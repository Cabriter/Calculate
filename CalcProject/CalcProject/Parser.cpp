#include "iostream"
#include "Parser.h"
#include "Scanner.h"
#include "Node.h"
#include "AddNode.h"
#include "SubNode.h"
#include "MultiplyNode.h"
#include "DivideNode.h"
#include "NumberNode.h"
#include "UMinusNode.h"

Parser::~Parser()
{

}

void Parser::Parse()
{
	tree_ = Expr();
}

EStatus Parser::Status()
{
	return status_;
}

double Parser::Calculate()
{
	return tree_->Calc();
}

//表达式
Node* Parser::Expr()
{
	Node* node_ret = nullptr;
	Node* node_right = nullptr;
	Node* node_left = Term();
	EToken token = scanner_.Token();
	switch (token)
	{
	case TOKEN_PLUS:
		scanner_.Accept();
		node_right = Expr();
		node_ret = new AddNode(node_left,node_right);
		break;
	case TOKEN_MINUS:
		scanner_.Accept();
		node_right = Expr();
		node_ret = new SubNode(node_left,node_right);
		break;
	default:
		break;
	}
	return node_ret;
}
//项
Node* Parser::Term()
{
	Node* node_ret = nullptr;
	Node* node_right = nullptr;
	Node* node_left = Factor();
	EToken token = scanner_.Token();
	switch (token)
	{
	case TOKEN_MUTIPLY:
		scanner_.Accept();
		node_right = Term();
		node_ret = new MultiplyNode(node_left,node_right);
		break;
	case TOKEN_DIVIDE:
		scanner_.Accept();
		node_right = Term();
		node_right = new DivideNode(node_left,node_right);
		break;
	default:
		break;
	}
	return node_ret;
}
//因子
Node* Parser::Factor()
{
	Node* node_ret = nullptr;
	EToken token = scanner_.Token();
	switch (token)
	{
	case TOKEN_NUMBER:
		node_ret = new NumberNode(scanner_.Number());
		scanner_.Accept();
		break;
	case TOKEN_MINUS:
		scanner_.Accept();
		node_ret = new UMinusNode(Factor());
		break;
	case TOKEN_LPARENTHESIS:
		scanner_.Accept();
		node_ret = Expr();
		if(scanner_.Token() == TOKEN_RPARENTHESIS)
		{
			scanner_.Accept();
		}else
		{
			std::cout<<"当前表达式缺少')'"<<std::endl;
			node_ret = nullptr;
			status_ = STATUS_ERROR;
		}
		break;
	case TOKEN_ERROR:
		node_ret = nullptr;
		status_ = STATUS_ERROR;
		break;
	default:
		break;
	}
	return node_ret;
}

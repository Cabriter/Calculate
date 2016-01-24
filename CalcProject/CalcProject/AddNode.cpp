#include"AddNode.h"

//AddNode::AddNode(Node* left,Node* right):BinaryNode(left,right)
//{
//
//}

double AddNode::Calc()
{
	return left_->Calc()+right_->Calc();
}


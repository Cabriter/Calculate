#ifndef PARSER_H
#define PARSER_H

class Scanner;//前置声明,提高编译效率
class Node;
class SymbolTable;
class Storage;

enum EStatus
{
	STATUS_OK,
	STATUS_ERROR
};

class Parser
{
public:
	Parser(Scanner& scanner,SymbolTable&symbolTable,Storage&storage):scanner_(scanner),symbolTable_(symbolTable),storage_(storage)
	{
		tree_ = nullptr;
	}
	~Parser();
	void Parse();
	EStatus Status();
	double Calculate();
private:
	Scanner& scanner_;
	Node* tree_;
	Node* Expr();
	Node* Term();
	Node* Factor();
	EStatus status_;
	SymbolTable &symbolTable_;
	Storage &storage_;
};
#endif // PARSER_H
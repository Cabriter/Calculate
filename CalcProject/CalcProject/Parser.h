#ifndef PARSER_H
#define PARSER_H

class Scanner;//前置声明,提高编译效率
class Node;

enum EStatus
{
	STATUS_OK,
	STATUS_ERROR
};

class Parser
{
public:
	Parser(Scanner& scanner):scanner_(scanner)
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
};
#endif // PARSER_H
#ifndef SCANNER_H
#define  SCANNER_H
#include <string>

enum EToken
{
	TOKEN_NUMBER,
	TOKEN_PLUS,
	TOKEN_MINUS,
	TOKEN_MUTIPLY,
	TOKEN_DIVIDE,
	TOKEN_LPARENTHESIS,
	TOKEN_RPARENTHESIS,
	TOKEN_IDENTIFIER,//标识符
	TOKEN_ASSIGN,//等号
	TOKEN_END,
	TOKEN_ERROR
};

//扫描类
class Scanner
{
public:
	Scanner(const std::string &buf);
	~Scanner(void);
	EToken Token() const;
	double Number()const;
	std::string Symbol() const;
	void Accept();
private:
	void SkipWhite();
	std::string buf_;
	unsigned int cur_pos_;
	EToken token_;
	double number_;
	std::string symbol_;
};
#endif
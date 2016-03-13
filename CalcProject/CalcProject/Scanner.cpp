#include "Scanner.h"

Scanner::Scanner(const std::string &buf)
{
	cur_pos_ = 0;
	number_ = 0.0;
	buf_ = buf;
	Accept();
}

Scanner::~Scanner(void)
{

}

EToken Scanner::Token() const
{
	return token_;
}

double Scanner::Number() const
{
	return number_;
}

void Scanner::SkipWhite()
{
	while (isspace(buf_[cur_pos_]))
	{
		++cur_pos_;
	}
}

void Scanner::Accept()
{
	SkipWhite();
	switch (buf_[cur_pos_])
	{
	case '+':
		token_ = TOKEN_PLUS;
		++cur_pos_;
		break;
	case  '-':
		token_ = TOKEN_MINUS;
		++cur_pos_;
		break;
	case  '*':
		token_ = TOKEN_MUTIPLY;
		++cur_pos_;
		break;
	case  '/':
		token_ = TOKEN_DIVIDE;
		++cur_pos_;
		break;
	case  '(':
		token_ = TOKEN_LPARENTHESIS;
		++cur_pos_;
		break;
	case  ')':
		token_ = TOKEN_RPARENTHESIS;
		++cur_pos_;
		break;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '.':
		token_ = TOKEN_NUMBER;
		char* temp;
		number_ = strtod(&(buf_[cur_pos_]),&temp);
		cur_pos_ = temp - &(buf_[0]);
		break;
	case '\0':
	case '\r':
	case '\n':
	case EOF:
		token_ = TOKEN_END;
		break;
	default:
		token_ = TOKEN_ERROR;
	}
}



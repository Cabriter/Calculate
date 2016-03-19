#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <map>

//·ûºÅ±í
class SymbolTable
{
public:
	SymbolTable():curId_(0)
	{
		
	};
	unsigned int Add(const std::string &str);
	unsigned int Find(const std::string &str) const;
	std::string GetSymbolName(unsigned int id) const;
	void Clear();
private:
	std::map<const std::string,unsigned int> dictionary_;
	unsigned int curId_;
};
#endif

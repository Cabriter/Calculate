#include "SymbolTable.h"

unsigned int SymbolTable::Add(const std::string &str)
{
	dictionary_[str] = curId_;
	return curId_++;
}

unsigned int SymbolTable::Find(const std::string &str) const
{
#pragma region Old Function
	//std::map<const std::string,unsigned int>::const_iterator iterBegin = dictionary_.begin();
	//std::map<const std::string,unsigned int>::const_iterator iterEnd = dictionary_.end();
	//for (;iterBegin!=iterEnd;++iterBegin)
	//{
	//	if (iterBegin->first == str)
	//	{
	//		return iterBegin->second;
	//	}
	//}
	//return -1;
#pragma endregion

	std::map<const std::string,unsigned int>::const_iterator iter;
	iter = dictionary_.find(str);
	if (iter!=dictionary_.end())
	{
		return iter->second;
	}
	return -1;
}

std::string SymbolTable::GetSymbolName(unsigned int id) const
{
	for (auto iter : dictionary_)
	{
		if (iter.second == id)
		{
			return iter.first;
		}
	}
}

void SymbolTable::Clear()
{
	dictionary_.clear();
	curId_ = 0;
}

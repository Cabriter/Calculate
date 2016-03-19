#ifndef STORAGE_H
#define STORAGE_H

#include <vector>

class SymbolTable;

//·ûºÅ²Ö¿â
class Storage
{
public:
	Storage(SymbolTable &tbl);
	~Storage();
	void AddConstants(SymbolTable &tbl);
	bool IsInit(unsigned int id) const;
	double GetValue(unsigned int id) const;
	void SetValue(unsigned int id,double value);
	void AddValue(unsigned int id,double value);
	void Clear();
private:
	std::vector<double> cells_;
	std::vector<bool> inits_;
};
#endif


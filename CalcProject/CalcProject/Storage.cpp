#include "Storage.h"
#include "SymbolTable.h"
#include <assert.h>

Storage::Storage(SymbolTable &tbl)
{
	AddConstants(tbl);
}

Storage::~Storage(void)
{
}

void Storage::AddConstants(SymbolTable &tbl)
{
	unsigned int id = tbl.Add("pi");
	AddValue(id,3.1415926);
}

bool Storage::IsInit(unsigned int id) const
{
	return id <cells_.size()&& inits_[id];
}

double Storage::GetValue(unsigned int id) const
{
	assert(id<cells_.size());
	return cells_[id];
}

void Storage::SetValue(unsigned int id,double value)
{
	assert(id<=cells_.size());
	if (id<cells_.size())
	{
		cells_[id] = value;
		inits_[id] = true;
	}else if(id == cells_.size())
	{
		AddValue(id,value);
	}
}

void Storage::AddValue(unsigned int id,double value)
{
	cells_.resize(id+1);
	inits_.resize(id+1);
	cells_[id] = value;
	inits_[id] = true;
}

void Storage::Clear()
{
	cells_.clear();
	inits_.clear();
}

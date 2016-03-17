#include <vector>
#include <iostream>
#include "ProductNode.h"

double ProductNode::Calc()
{
	double result = 1.0;
	std::vector<Node*>::const_iterator childIter = childs_.begin();
	std::vector<bool>::const_iterator positveIter = positves_.begin();
	for (;childIter!=childs_.end();++childIter,++positveIter)
	{
		if (*positveIter)
		{
			result*=(*childIter)->Calc();
		}else
		{
			if ((*childIter)->Calc()!=0.0)
				result/=(*childIter)->Calc();
			else{
				std::cout<< "被除数不能为0！"<<std::endl;
				result = 0;
			}
		}
	}
	return result;
}

#include "SumNode.h"
#include <vector>

double SumNode::Calc()
{
	double result = 0.0;
	std::vector<Node*>::const_iterator childIter = childs_.begin();
	std::vector<bool>::const_iterator positveIter = positves_.begin();
	for (;childIter!=childs_.end();++childIter,++positveIter)
	{
		if (*positveIter)
		{
			result+=(*childIter)->Calc();
		}else
		{
			result-=(*childIter)->Calc();
		}
	}
	return result;
}

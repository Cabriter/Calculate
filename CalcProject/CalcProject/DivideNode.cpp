#include "DivideNode.h"

double DivideNode::Calc()
{
	if (right_->Calc()!=0.0)
	{
		return left_->Calc()/right_->Calc();
	}else
	{
		return 0.0;
	}
}

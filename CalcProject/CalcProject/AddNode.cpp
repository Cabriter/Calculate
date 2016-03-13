#include"AddNode.h"

double AddNode::Calc()
{
	return left_->Calc()+right_->Calc();
}


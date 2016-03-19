#include "AssignNode.h"

double AssignNode::Calc()
{
	double val = 0.0;
	val = right_->Calc();
	left_->Assign(val);
	return val;
}

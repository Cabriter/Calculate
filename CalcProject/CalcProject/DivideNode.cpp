#include "DivideNode.h"


DivideNode::~DivideNode()
{
}

double DivideNode::Calc()
{
	return left_->Calc()/right_->Calc();
}

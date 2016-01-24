#include "MultiplyNode.h"

MultiplyNode::~MultiplyNode()
{
}

double MultiplyNode::Calc()
{
	return left_->Calc() * right_->Calc();
}

#include "SubNode.h"

SubNode::~SubNode()
{

}

double SubNode::Calc()
{
	return left_->Calc()-right_->Calc();
}


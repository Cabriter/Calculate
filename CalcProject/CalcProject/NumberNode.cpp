#include "NumberNode.h"


NumberNode::NumberNode(double number)
{
	number_ = number;
}

NumberNode::~NumberNode()
{

}

double NumberNode::Calc()
{
	return number_;
}

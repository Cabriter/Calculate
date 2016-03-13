#include "BinaryNode.h"

BinaryNode::~BinaryNode()
{
	if (left_)
	{
		delete left_;
	}
	if(right_)
	{
		delete right_;
	}
}



#include "UnaryNode.h"

UnaryNode::~UnaryNode()
{
	delete child_;
}

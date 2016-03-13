#include "UMinusNode.h"

double UMinusNode::Calc()
{
	return -(child_->Calc());
}

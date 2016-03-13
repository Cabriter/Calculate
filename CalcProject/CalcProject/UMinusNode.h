#ifndef UMINUSNODE_H
#define UMINUSNODE_H
#include "UnaryNode.h"

//负数节点
class UMinusNode :
	public UnaryNode
{
public:
	UMinusNode(Node* child):UnaryNode(child){}
	double Calc();
};
#endif


#ifndef UMINUSNODE_H
#define UMINUSNODE_H
#include "UnaryNode.h"

//�����ڵ�
class UMinusNode :
	public UnaryNode
{
public:
	UMinusNode(Node* child):UnaryNode(child){}
	double Calc();
};
#endif


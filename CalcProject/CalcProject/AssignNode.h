#ifndef ASSIGNNODE_H

#include "binarynode.h"

class AssignNode :public BinaryNode
{
public:
	AssignNode(Node* left,Node* right):BinaryNode(left,right){}
	~AssignNode();
	double Calc();
};
#endif // ASSIGNNODE_H
#ifndef UNARYNODE_H
#define UNARYNODE_H
#include "Node.h"
//һԪ�ڵ�
class UnaryNode :
	public Node
{
public:
	UnaryNode(void);
	~UnaryNode(void);
private:
	Node* child_;
};
#endif


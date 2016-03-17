#include "MultipleNode.h"

MultipleNode::MultipleNode(Node* node)
{
	AppendChild(node,true);
}

MultipleNode::~MultipleNode(void)
{
	for (std::vector<Node*>::iterator iter = childs_.begin();iter!=childs_.end();++iter)
	{
		delete *(iter);
	}
}

void MultipleNode::AppendChild(Node* node,bool positve)
{
	childs_.push_back(node);
	positves_.push_back(positve);
}

#include <iostream>
#include "Node.h"
#include "NumberNode.h"
#include "AddNode.h"
#include "SubNode.h"
#include "MultiplyNode.h"
#include "DivideNode.h"

int main()
{
	NumberNode left(100);
	NumberNode right(20);
	AddNode add_node(&left,&right);
	std::cout << add_node.Calc() << std::endl;
	SubNode sub_node(&left,&right);
	std::cout << sub_node.Calc() << std::endl;
	MultiplyNode mu_node(&left,&right);
	std::cout << mu_node.Calc() << std::endl;
	DivideNode div_node(&left,&right);
	std::cout << div_node.Calc() << std::endl;

	return 0;
}
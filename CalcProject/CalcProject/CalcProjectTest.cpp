#include <iostream>
#include "Node.h"
#include "NumberNode.h"
#include "AddNode.h"
#include "SubNode.h"
#include "MultiplyNode.h"
#include "DivideNode.h"
#include "Scanner.h"
#include "Parser.h"
#include "SymbolTable.h"
#include "Storage.h"

int main()
{
	SymbolTable symbolTable;
	Storage storage(symbolTable);
	EStatus status = STATUS_OK;
	do 
	{
		std::cout<<">";
		std::string input;
		std::cin>>input;
		Scanner scanner(input);
		Parser parser(scanner,symbolTable,storage);
		parser.Parse();
		status = parser.Status();
		if (status == STATUS_OK)
		{
			std::cout<< parser.Calculate()<<std::endl;
		}
	} while (status == STATUS_OK);

#pragma region Test1
	/*NumberNode left(100);
	NumberNode right(20);
	AddNode add_node(&left,&right);
	std::cout << add_node.Calc() << std::endl;
	SubNode sub_node(&left,&right);
	std::cout << sub_node.Calc() << std::endl;
	MultiplyNode mu_node(&left,&right);
	std::cout << mu_node.Calc() << std::endl;
	DivideNode div_node(&left,&right);
	std::cout << div_node.Calc() << std::endl;*/
#pragma endregion
	return 0;
}
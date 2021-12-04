// HuffmanProj.cpp : Defines the entry point for the console application.
//



#include "MyStarter.h"
#include <iostream>
#include <fstream>

int main()
{
	Huffman tJamesHuffman;
	int tSize = tJamesHuffman.ProcessFile("NewStarter.h");
	std::cout << "Processed bits = " << tSize << std::endl;

	std::string tDump = tJamesHuffman.GetTableDump();
	std::cout << "Dump: " << std::endl << tDump << std::endl;

	
		

}


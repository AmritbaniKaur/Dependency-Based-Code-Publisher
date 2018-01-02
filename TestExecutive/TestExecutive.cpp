//////////////////////////////////////////////////////////////////////////////
// TestExecutive.cpp - Test Executive for Code Publisher					//
// ver 1.0																	//
//--------------------------------------------------------------------------//
//	Language:		Visual C++ 2015, Visual Studio 2015 Community Edition	//
//	Platform:		HP Envy x360, Core i7, Windows 10 Home					//
//	Application:	CSE 687 Project #3, Spring 2017							//
//	Author:			Amritbani Sondhi,										//
//					Graduate Student, Syracuse University					//
//					asondhi@syr.edu											//
//////////////////////////////////////////////////////////////////////////////

#include "../CodePublisher/Publisher.h"
#include "TestExecutive.h"

using namespace CodePublisher;
using namespace FileSystem;
using namespace Scanner;

//	CodePublisher.exe -o		C:\input\ -p		*.h
//	argv[0]			  argv[1]	argv[i+1] argv[120] 

int main(int argc, char* argv[])
{

	std::cout << "\n ===========================================================================================";
	std::cout << "\n Testing Code Publisher - Project3-S2017";
	std::cout << "\n Amritbani Sondhi";
	std::cout << "\n ===========================================================================================";
	std::cout << "\n\n";

	TestExecutive test;
	test.requirement1();
	test.requirement2();
	test.requirement3();
	test.requirement4();
	test.requirement5();
	test.requirement6();
	test.requirement7();
	test.requirement8();
	test.requirement9();
	test.requirement10();

	HTMLPublisher htmlPublish;

	htmlPublish.ProcessCommandLineArgs(argc, argv);
	string currentDir = htmlPublish.config.inputDirectory;

	//Directory::setCurrentDirectory("..");
	Directory::setCurrentDirectory(currentDir);

	// gets contents of current directory
	currentDir = Directory::getCurrentDirectory(); // gets current directory
	htmlPublish.processDirectoryToHTML(currentDir);

	string openPage = htmlPublish.config.openWebPage;
	htmlPublish.openPage(openPage);
	std::cout << "\n\n";
	std::system("pause");
	return 0;
}

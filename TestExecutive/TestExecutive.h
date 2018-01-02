#pragma once
//////////////////////////////////////////////////////////////////////////////
// TestExecutive.h - Test Executive for Code Publisher						//
// ver 1.0																	//
//--------------------------------------------------------------------------//
//	Language:		Visual C++ 2015, Visual Studio 2015 Community Edition	//
//	Platform:		HP Envy x360, Core i7, Windows 10 Home					//
//	Application:	CSE 687 Project #3, Spring 2017							//
//	Author:			Amritbani Sondhi,										//
//					Graduate Student, Syracuse University					//
//					asondhi@syr.edu											//
//////////////////////////////////////////////////////////////////////////////
/*
* Package Operations:
* ==================
* Test Executive for Code Publisher
* declares all the requirements for Project 3
*
* Public Methods:
* ==============
*	TestExecutive Class
*		- requirement1()
*		- requirement2()
*		- requirement3()
*		- requirement4()
*		- requirement5()
*		- requirement6()
*		- requirement7()
*		- requirement8()
*		- requirement9()
*		- requirement10()
*
* Build Process:
* ==============
*	- Required Files:
*		SemiExp.h, Tokenizer.h, FileSystem.h, itokcollection.h, TestExecutive.h, Utilities.h
*		SemiExp.cpp, Tokenizer.cpp, FileSystem.cpp, itokcollection.cpp, TestExecutive.cpp, Utilities.cpp
*	- Build commands:
*		devenv TestExecutive.sln
*
* Maintenance History:
* ===================
* ver 1.0 : 27 Mar 2017
* - first release
*/

class TestExecutive
{
public:
	void requirement1();
	void requirement2();
	void requirement3();
	void requirement4();
	void requirement5();
	void requirement6();
	void requirement7();
	void requirement8();
	void requirement9();
	void requirement10();
};


void TestExecutive::requirement1()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #1 - ";
	std::cout << "\n\t Code was developed in Visual Studio, it is in C++, using it's standard libraries.\n";
	std::cout << "\n ===========================================================================================";
}

void TestExecutive::requirement2()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #2 - ";
	std::cout << "\n\t Used C++ standard library's streams for all console I/O and \n new and delete for all heap-based memory management. \n";
	std::cout << "\n ===========================================================================================";

}

void TestExecutive::requirement3()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #3 - ";
	std::cout << "\n\t Provides a Publisher program that provides for creation of web pages \n each of which captures the content of a single C++ source code file, e.g., *.h or *.cpp \n";
	std::cout << "\n ===========================================================================================";

}

void TestExecutive::requirement4()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #4 - ";
	std::cout << "\n\t Provides the facility to expand or collapse class bodies, methods, \n and global functions using JavaScript and CSS properties. \n";
	std::cout << "\n ===========================================================================================";

}

void TestExecutive::requirement5()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #5 - ";
	std::cout << "\n\t provides a CSS style sheet that the Publisher uses to style its generated pages \n\t and a JavaScript file that provides functionality to hide and unhide sections of code for outlining,\n\t using mouse clicks. \n";
	std::cout << "\n ===========================================================================================";

}

void TestExecutive::requirement6()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #6 - ";
	std::cout << "\n\t In each web page's <head> section there are links to the style sheet \n\t and JavaScript file.";
	std::cout << "\n\t CSS file is kept in \TestDirForCodePublisher\1.StyleSheet.css \n";
	std::cout << "\n\t Javascript file is kept in \TestDirForCodePublisher\2.JavaScript.js \n";
	std::cout << "\n ===========================================================================================";

}

void TestExecutive::requirement7()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #7 - ";
	std::cout << "\n\t HTML5 links to dependent files with a label, at the top of the web page. \n\t Publisher uses tokenizer and SemiExp to discover package dependencies within the published set of source files. \n";
	std::cout << "\n ===========================================================================================";

}

void TestExecutive::requirement8()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #8 - ";
	std::cout << "\n\t Command Line Processing is used to define the files to publish, \n\t by specifying path and file patterns. \n";
	std::cout << "\n\t Current Input Directory (-i) is set to the current directory ie. ..";
	std::cout << "\n\t Current Output Directory (-o) is set to: ../TestDirForCodePublisher";
	std::cout << "\n ===========================================================================================";

}

void TestExecutive::requirement9()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #9 - ";
	std::cout << "\n\t CodePublisher functionality is demonstrated by publishing all the important packages \n";
	std::cout << "\n ===========================================================================================";

}

void TestExecutive::requirement10()
{
	std::cout << "\n ===========================================================================================";
	std::cout << "\n Demonstrating Req #10 - ";
	std::cout << "\n\t  Included an Automated Unit Test Suite that demonstrates you meet \n\t all the requirements of this project \n";
	std::cout << "\n ===========================================================================================";

}

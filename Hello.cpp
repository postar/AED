/* Hello World
MTP
20180328
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string strhello = "Hello, World!!\n";
	ofstream outputtxt;
	outputtxt.open("output.txt");
	outputtxt << strhello;
	outputtxt.close();
	cout << strhello;
	system("PAUSE");
	return 0;
}

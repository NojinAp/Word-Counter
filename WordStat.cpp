/*
    ==================================================
    Word Counter
    ==================================================
    Name   : Nozhin Azarpanah
    Date   : January 14, 2022
*/

#include <iostream>

#include "Word.h"

using namespace sdds;
using namespace std;

int main()
{
	char filename[256];
	programTitle();
	cout << "Enter filename: ";
	cin >> filename;
	wordStats(filename);
	return 0;
}

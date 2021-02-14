// Summation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Adder.h"

int main()
{
	Adder a = Adder();
	cout << a.PointerSummation() << endl;
	cout << a.LibrarySummation() << endl;
	return 0;
}


// Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Templates.h"

int main()
{
	Stack<int> StackOfInts;

	StackOfInts.Push(3);
	StackOfInts.Push(2);
	StackOfInts.Push(1);

	int iVal1 = StackOfInts.Pop();
	int iVal2 = StackOfInts.Pop();
	int iVal3 = StackOfInts.Pop();

	printf("\nVal1 = %d, Val2 = %d, Val3 = %d", iVal1, iVal2, iVal3);

	Stack<float> StackOfFloats;

	StackOfFloats.Push(3.3f);
	StackOfFloats.Push(2.2f);
	StackOfFloats.Push(1.1f);

	float fVal1 = StackOfFloats.Pop();
	float fVal2 = StackOfFloats.Pop();
	float fVal3 = StackOfFloats.Pop();

	printf("\nVal1 = %f, Val2 = %f, Val3 = %f", fVal1, fVal2, fVal3);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

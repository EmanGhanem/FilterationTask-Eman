// ConsoleApplication50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
	
using namespace std;
//Method 1
void PrimeNumbers_1(int x, int y)
{
	int counter;

	for (int i = x + 1; i < y; i++)
	{
		counter = 0;
		if ((i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) && ((i != 2) && (i != 3) && (i != 5) && (i != 7)))
		{
			counter++;
		}


		if (counter == 0)
		{
			cout << i << " ";

		}

	}
}
//Method 2
void PrimeNumbers_2(int x, int y)
{
	int counter;

	for (int i = x+1; i <y; i++)
	{
		counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				counter++;
			}
		}

		if (counter <=2)
		{
			cout << i << " ";

		}

	}
}



	int main()
	{
		int num1,num2;
		cin >> num1>>num2;
		PrimeNumbers_1(num1, num2);
		cout << endl;
		PrimeNumbers_2(num1, num2);

		
	}
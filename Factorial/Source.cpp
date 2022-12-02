//Program part that calculates factorial of a number
//entered from the keyboard

#include <iostream>
using namespace std;
int main()
{
	int a, i;
	int factorial = 1;

	cout << "Please enter a number:";
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		factorial = factorial * i;

	}
	cout << factorial;

}
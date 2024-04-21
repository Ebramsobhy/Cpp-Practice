#include<iostream>
using namespace std;

// Validate Number 

int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number?" << endl;
	cin >> Number;

	while (cin.fail())
	{
		// User did'n input a number
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid Number, Enter a valid Number" << endl;
		cin >> Number;
	}
	return Number;
}

int main()
{
	cout << "Your Number is: " << ReadNumber();
	return 0;
}

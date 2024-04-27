#include<iostream>
using namespace std;

// Recursion is the technique of making a function call itself.

void PrintNumbers(int N, int M)
{
	if (N <= M)
	{
		cout << N << endl;
		PrintNumbers(N + 1, M);
	}
}

int main()
{
	PrintNumbers(1, 10);
	return 0;
}





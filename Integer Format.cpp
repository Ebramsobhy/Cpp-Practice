#include<iostream>
using namespace std;
    /* The Output :
           The page number = 1
           You are in Page 1 of 10
           The page number = 01
           The page number = 001
           The page number = 0001
           The Result of 20 + 30 = 50
    */

int main()
{
	int Page = 1, TotalPages = 10;

	// Print string and int variable
	printf("The page number = %d \n", Page);
	printf("You are in Page %d of %d \n", Page, TotalPages);

	// Width of int
	printf("The page number = %0*d \n", 2, Page);
	printf("The page number = %0*d \n", 3, Page);
	printf("The page number = %0*d \n", 4, Page);

	// Calc
	int Number1 = 20, Number2 = 30;
	printf("The Result of %d + %d = %d", Number1, Number2, Number1 + Number2);

	return 0;
}





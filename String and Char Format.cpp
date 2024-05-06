#include<iostream>
using namespace std;
/*
	Dear Ebram Sobhy, How are you?
	Welcome to Information Technology Institute!

	Setting the width of c :A
	Setting the width of c : A
	Setting the width of c :  A
	Setting the width of c :   A
*/
int main()
{
	char Name[] = "Ebram Sobhy";
	char SchoolName[] = "Information Technology";

	printf("Dear %s, How are you? \n\n", Name);
	printf("Welcome to %s Institute! \n\n", SchoolName);

	char c = 'A';
	printf("Setting the width of c :%*c \n", 1, c);
	printf("Setting the width of c :%*c \n", 2, c);
	printf("Setting the width of c :%*c \n", 3, c);
	printf("Setting the width of c :%*c \n", 4, c);

	return 0;
}

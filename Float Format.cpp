#include<iostream>
using namespace std;
    /* The Output :
           Precision specification of 3.1
           Precision specification of 3.14
           Precision specification of 3.142

            The float division is: 7.000 / 9.000 = 0.778

           The double value is : 12.450
           The double value is : 12.4500
    */

int main()
{
    float PI = 3.14159265;

    printf("Precision specification of %.*f\n", 1, PI);
    printf("Precision specification of %.*f\n", 2, PI);
    printf("Precision specification of %.*f\n", 3, PI);

    float x = 7.0, y = 9.0;
    printf("\n The float division is: %.3f / %.3f = %.3f \n\n", x, y, x / y);

    double d = 12.45;
    printf("The double value is : %.3f \n", d);
    printf("The double value is : %.4f \n", d);
	
	return 0;
}





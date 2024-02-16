#include <iostream>
#include <string>
using namespace std;

enum enScreenColor {Red=1 , Blue=2, Green=3};

int main()
{
   cout << "*******************\n";
   cout << "Please Chose the number of your color?\n";
   cout << "(1) Red\n";
   cout << "(2) Blue\n";
   cout << "(3) Green\n";
   cout << "*******************\n";
   cout << "Your Choice? ";
   
   int c;
   enScreenColor Color;
   cin >> c;
   Color = (enScreenColor) c; // This is casting to convert c from int to enum
   
   if (Color == enScreenColor::Red)
   {
      system("color 4F");
   }
   else if (Color == enScreenColor::Blue)
   {
      system("color 1F");
   }
   else if (Color == enScreenColor::Green)
   {
      system("color 2F");
   }

   return 0;
}

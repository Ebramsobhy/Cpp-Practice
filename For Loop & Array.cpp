#include <iostream>
#include <string>
using namespace std;

void ReadArrayData(int arr1[100], int &length)
{
    cout << "How many number do you want to enter? 1 to 100?\n" << endl;
    cin >> length;

    for (int i = 0; i <= length - 1; i++)
    {
       cout << "Please Enter Number " << i + 1 << endl;
       cin >> arr1[i];
    }
}

void PrintArrayData(int arr1[100], int length)
{
   for (int i = 0; i <= length - 1; i++)
   {
       cout << "Number [" << i + 1 << "] : " << arr1[i] << endl;
   }
}

int CalculateArraySum(int arr1[100], int length)
{
   int sum = 0;
   for (int i = 0; i <= length - 1; i++)
   {
      sum += arr1[i];
   }

   return sum;
}

float CalculateArrayAverage(int arr1[100], int length)
{
   return (float)CalculateArraySum(arr1, length) / length;
}

int main()
{
   int arr1[100], length = 0;
   ReadArrayData(arr1, length);
   PrintArrayData(arr1, length);
   
   cout << "\n************************\n";
   cout << "Sum = " << CalculateArraySum(arr1, length) << endl;
   cout << "Average = " << CalculateArrayAverage(arr1, length) << endl;
}

#include <iostream>
#include <string>
using namespace std;

struct strInfo
{
  string FirstName;
  string LastName;
  int Age;
  string Phone;
};

void ReadInfo(strInfo &Info)
{
   cout << "Please Enter FirstName?\n";
   cin >> Info.FirstName;

   cout << "Please Enter LastName?\n";
   cin >> Info.LastName;

   cout << "Please Enter Age?\n";
   cin >> Info.Age;

   cout << "Please Enter Phone?\n";
   cin >> Info.Phone;
}

void PrintInfo(strInfo Info)
{
   cout << "\n*********************\n";
   cout << "FirstName: " << Info.FirstName << endl;
   cout << "LastName: "  << Info.LastName << endl;
   cout << "Age: "       << Info.Age << endl;
   cout << "Phone: "     << Info.Phone << endl;
}

void ReadPersonsInfo(strInfo Persons[100], int &NumberOfPersons)
{
   cout << "Enter the number of persons? 1 to 100?\n";
   cin >> NumberOfPersons;
   for (int i = 0; i <= NumberOfPersons -1; i++)
   {
      cout << "Please Enter Person's " << i + 1 << " Info: \n";
      ReadInfo(Persons[i]);
   }
}

void PrintPersonsInfo(strInfo Persons[100], int NumberOfPersons)
{
   cout << "\n******************\n";
   for (int i = 0; i <= NumberOfPersons - 1; i++)
   {
       cout << "Persons's " << i + 1 << " Info: \n";
       PrintInfo(Persons[i]);
   }
}

int main()
{
   strInfo Persons[100];
   int NumberOfPersons = 0;
   ReadPersonsInfo(Persons, NumberOfPersons);
   PrintPersonsInfo(Persons, NumberOfPersons);
   
   return 0;
}
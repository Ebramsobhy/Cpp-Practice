#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Add Elements To Vectors
int main()
{

    vector<int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    cout << "Numbers Vector \n";

    for (int &Number : vNumbers)
    {
        cout << Number << endl;
    }

    return 0;
}

// Another Example

void ReadVectorNumbers(vector <int> &vNumbers)
{
    char Choices = 'Y';
    int Number = 0;

    while (Choices == 'Y' || Choices == 'y')
    {
        cout << "Add Number To Vector ";
        cin >> Number;
        vNumbers.push_back(Number);

        cout << "Do you want to add more numbers to vector? Y/N ";
        cin >> Choices;
    }
}

void PrintVectorNumbers(vector <int> &vNumbers)
{
    cout << "Numbers Vector: \n";

    for (int &Number : vNumbers)
    {
        cout << Number << endl;
    }
}

int main() {

    vector <int> vNumbers;
    ReadVectorNumbers(vNumbers);
    PrintVectorNumbers(vNumbers);
    return 0;
}

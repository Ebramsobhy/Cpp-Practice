#include <iostream>
#include <string>
#include <vector>
using namespace std;
      
                 // Add Elements To Vectors
int main() {

    vector <int> vNumbers;

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

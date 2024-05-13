#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {

    vector <int> vNumbers = { 10, 20, 30, 40 };

    cout << "Numbers Vector = ";

    for (int &Number : vNumbers)
    {
        cout << Number << " ";
    }

    return 0;
}

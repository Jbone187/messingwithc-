#include <iostream>

using namespace std;

void addNumber()
{

    int num1;
    int num2;
    int total;

    cout << "Please add numbers to be Added" << endl;
    cin >> num1;
    cin >> num2;

    total = num1 + num2;
    cout << "Here is your total: " << total << endl;
}

int main()
{
    addNumber();
    return 0;
}
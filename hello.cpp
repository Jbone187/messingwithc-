#include <iostream>

using namespace std;

void firstname()
{
    string name;

    cout << "What is your first name: " << endl;
    cin >> name;

    if (name.length() > 1)
    {
        cout << "Have a Great Day " << name << endl;
    }
    else
    {
        cout << "Not a Complete Name" << endl;
    }
}

int main()
{
    firstname();
}

#include <iostream>

using namespace std;

void search(int arr[], int len, int val)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == val)
        {
            cout << arr[i] << endl;
        }
        else if (val > 3)
        {
            cout << "The value is not correct" << endl;
            break;
        };
    };
};

int main()
{
    int arr[] = {1, 2, 3};

    int len = sizeof(arr) / sizeof(arr[0]);

    search(arr, len, 4);
    return 0;
}

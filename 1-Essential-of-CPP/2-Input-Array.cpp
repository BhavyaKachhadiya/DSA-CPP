#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the Number of Elements you want to store: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Number at Element: " << i << " ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }
}
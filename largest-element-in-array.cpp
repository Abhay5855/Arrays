#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the no of elements" << endl;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int largest = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    cout << largest << endl;
}
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
    
    //to check largest element
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

    // to check smallest element
    int smallest = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i] < smallest){
            smallest = a[i];
        }
    }

    cout << smallest << endl;
    
}
#include<iostream>
using namespace std;

int main(){
    int count;
    cin >> count;
    int a[count];
    for (int i = 0; i < count; i++)
    {
        /* code */
        cin>> a[i];
    }

    cout << "before reverse " << endl;
    for (int i = 0; i < count; i++)
    {
        /* code */
        cout << a[i] << " ";
    }
    cout << endl;
    
    int start = 0;
    int end = count-1;
     
    while(start <= end){

        swap(a[start++] , a[end--]);


    }

    cout << "after reverse " << endl;
    for (int i = 0; i < count; i++)
    {
        /* code */
        cout << a[i] << " ";
    }
    cout << endl;


}
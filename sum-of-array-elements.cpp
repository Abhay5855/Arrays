#include<iostream>
using namespace std;

int main(){
    cout << "enter the number of elements " << endl;
    int n;
    cin>>n;

    int a[n];

    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }

    int sum = 0;
    for(int i=0; i < n ; i++){
        sum = sum + a[i];
    }

    cout << sum << endl;


}

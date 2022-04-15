#include<iostream>
using namespace std;


int main()
{
    int n, i;
    cout << "Enter a number:";
    cin >> n;

    for(i = 2; i < n; i++){
        if(n % i == 0){
            cout<< " NOT PRIME";
            break;
        } 
    }
    if(i == n){
        cout << "PRIME";
    }


return 0;
}
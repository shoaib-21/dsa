/*
    A
    B C
    C D F
    D E F G
*/
#include<iostream>
using namespace std;


int main()
{
    int i = 1, n;
    cout << "Enter a number;";
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }


return 0;
}

/* 
!!! This can be solve using a very much better way...

    while(i <= n){
        int j = 1;
        char ch = 'A' + i - 1;
        while(j <= i){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

*/
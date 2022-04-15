/*
    1 
    2 3
    3 4 5
    4 5 6 7
    
- increasing numbers
*/

#include<iostream>
using namespace std;


int main()
{
    int i = 1, n;
    cout << "Enter a number:";
    cin >> n;

    while(i <= n){
        int j = 1;
        int value = i;
        while(j <= i){
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }


return 0;
}

/* 
//!!! this can solved with using the variable value

     while(i <= n){
        int j = 1;
        int value = i;
        while(j <= i){
            cout << (i + j - 1) << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }


*/
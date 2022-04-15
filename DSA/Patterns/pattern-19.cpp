/*
    - - - *
    - - * *
    - * * *
    * * * *

*/

#include<iostream>
using namespace std;


int main()
{
    int i = 1, n;
    cout << "Enter a number:";
    cin >> n;
    while(i <= n){
        int spaces = n - i;
        while(spaces){
            cout << "  ";
            spaces--;
        }

        int j = 1;
        while(j <= i){
           cout << "* ";
           j++;
        }
        cout << endl;
        i++;
    }


return 0;
}
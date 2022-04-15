/*
    * * * *
    - * * *
    - - * *
    - - - *
*/
#include<iostream>
using namespace std;


int main()
{
    int i = 1, n;
    cout << "Enter a number:";
    cin >> n;
    while(i <= n){
        int spaces = i - 1;
        while(spaces){
            cout << "  ";
            spaces--;
        }

        int j = n - i + 1;
        while(j){
            cout << "* ";
            j--;
        }
        cout << endl;
        i++;
    }


return 0;
}
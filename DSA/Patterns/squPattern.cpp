/*
    * * * 
    * * *
    * * *

- No of rows = No of cols
*/

#include<iostream>
using namespace std;


int main()
{
    int i = 1, n;
    cout << "Enter the no of rows: ";
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
return 0;
}
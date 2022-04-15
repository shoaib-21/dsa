/*
    A B C 
    D E F 
    G H I

*/

#include<iostream>
using namespace std;


int main()
{
    int i = 1, n;
    char ch = 'A';
    cout << "Enter a number";
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << ch << " ";
            ch++;
            j++; 
        }
        cout << endl;
        i++;
    }
return 0;
}
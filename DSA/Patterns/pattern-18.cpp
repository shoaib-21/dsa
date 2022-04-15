/*
    D 
    C D
    B C D
    A B C D
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
        char ch = 'A' + n - i; // we try to get the 1st character then increment it in the inner loop.
        while(j <= i){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }



return 0;
}
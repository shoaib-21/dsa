/*
    - - - 1
    - - 1 2 1 
    - 1 2 3 2 1
    1 2 3 4 3 2 1

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
            cout << j << " ";
            j++;
        }


        j = i - 1;
        while(j >=1){
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
return 0;
}
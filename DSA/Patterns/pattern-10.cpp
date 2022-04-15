/*
    1 
    2 1 
    3 2 1 
    4 3 2 1

- use i - j + 1
(similar formula (n - j +1) was used in a square pattern,
here its i because its triangle)

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
        while(j <= i){
            cout << (i - j + 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

return 0;
}
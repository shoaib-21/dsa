/*
    1 2 3
    1 2 3
    1 2 3 

- square
- print col No.
*/
#include<iostream>
using namespace std;

int main()
{
    int i = 1,n;
    cout << "Enter a number:";
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
return 0;
}
/* !!! to make a pattern like
    3 2 1
    3 2 1 
    3 2 1

- print (n - j + 1)
*/


/*
    1 1 1
    2 2 2
    3 3 3

- rows = cols
- intergers increaming for each row
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
        while(j <= n){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }


return 0;
}
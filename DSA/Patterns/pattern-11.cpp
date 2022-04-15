/*
    A A A
    B B B
    C C C
- 
*/

#include<iostream>
using namespace std;


int main()
{
    int i = 1, n;
    char ch = 65;
    cout << "Enter a number:";
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << ch << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }


return 0;
}

/*
!!! This can also be done using..
    
    char ch = 'A' + i - 1;
    cout << ch;


*/
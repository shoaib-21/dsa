/* 
    - - - 1
    - - 2 2
    - 3 3 3
    4 4 4 4
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

        int j = i;
        while(j){
            cout << i << " ";
            j--;
        }
        cout << endl;
        i++;
    }


return 0;
}
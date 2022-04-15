/* 
    A B C 
    A B C
    A B C
- For column use ('A' + j - 1)
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
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }



return 0;
}

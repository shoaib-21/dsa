/* 
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1 
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1

*/
#include<iostream>
using namespace std;


int main()
{
    int i = 1, n;
    cout << "Enter a number:";
    cin >> n;
    while(i <= n){
        int num = n - i + 1;
        int count = 1;
        while(num){
            cout << count << " ";
            count++;
            num--;
        }

        int star = 2 * (i - 1);
        while(star){
            cout << "* ";
            star--;
        }

        num = n - i + 1;
        while(num){
            cout << num << " ";
            num--;
        }
        cout << endl; 
        i++;
    }


return 0;
}
/*
    1 2 3 
    4 5 6 
    7 8 9
- square
- print and increment
*/

#include<iostream>
using namespace std;


int main()
{
    int i = 1,count = 1 , n;
    cout << "Enter a number:";
    cin >> n;

    while(i <= n)
    {
        int j = 1;
        while(j <= n){
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
return 0;
}
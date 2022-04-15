/*
    A
    B C
    D E F
    G H I J

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
         while(j <= i){
             cout << ch << " ";
             ch++;
             j++;

         }
         cout << endl;
         i++;
     }


return 0;
}
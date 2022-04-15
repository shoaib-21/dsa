// A program which finds the sum of integers till 'n'

#include<iostream>
using namespace std;


int main()
{
    int i = 1,sum = 0, n;
    cout << "Enter a number:";
    cin >> n;
    while(i <= n){
        sum += i;
        i++;
    }
    cout << endl << sum;
return 0;
}
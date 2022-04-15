#include<iostream>
using namespace std;


int main()
{
    int n, firstPrev = 0, secondPrev = 1, fib;
    cout << "Enter a number:";
    cin >> n;
    cout << "FIBONACCI SERIES: " << "0 1 ";
    for (int i = 0;i < n - 1;i++)
    {
        fib = firstPrev + secondPrev;
        firstPrev = secondPrev;
        secondPrev = fib;
        cout << fib << " ";
    }
    cout << endl << fib << endl;
    
return 0;
}
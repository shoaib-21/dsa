#include<iostream>
using namespace std;


int main()
{
    int i = 2, n;
    cout << "Enter a number to check if it is prime:";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "NOT PRIME for " << i << endl;
        }
        else{
            cout << "PRIME for " << i << endl;
        }
        i++;
    }
return 0;
}
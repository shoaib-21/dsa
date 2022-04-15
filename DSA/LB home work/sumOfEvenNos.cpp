#include<iostream>
using namespace std;


int main()
{
    int i = 2,sum = 0, n;
    cout << "Enter a number:";
    cin >> n;
    while (i <= n)
    {
        if(i % 2 == 0){
            sum += i;
            i += 2;
        }
    }
    cout << endl << sum;
return 0;
}
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n, i = 0, result = 0;
    cout << "Enter a number:";
    cin >> n;

    while(n != 0){
        int digit = n % 10;
        n /= 10;
        if(digit == 1){
            result = result + (pow(2, i));
        }
        i++;
    }
    cout << result;


return 0;
}
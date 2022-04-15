#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int n;
	cin >> n;

      int i=0;
    int num =0;
    
    while(n!=0){
        int r =n & 1;
        num = num +(r*(pow(10,i))); 
        i++;
		// cout << r;
        n = n / 2;
    }
    // cout << num;
    


return 0;
}
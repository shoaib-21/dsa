// A program to print Farenheit to Celsius table

#include<iostream>
using namespace std;


int main()
{
    float C = 0;
    cout << endl << "F:" << '\t' << "C:" << endl;

    for (int F = 1; F <= 50; F++)
    {
        C = (F - 32) * (.5556);
        cout << F << '\t' << C << endl;
        
    }
    



return 0;
}
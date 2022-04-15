// A program that takes input character and 
// prints the category such as lower case alphabet, upper case alphabet and numbers 

#include<iostream>
using namespace std;

int main(void){
    int ch = 9;
    cout<< "Enter a character:";
    ch = cin.get();
    if(ch >= 65 && ch <= 90 )
        cout<< "Upper case";
    else if( ch >=61 && ch <= 122)
        cout<< "Lower case";
    else if( ch >= 48 && ch <= 57)
        cout<< "Number";
    else 
        cout<< "Other character";


 }
#include<iostream>
using namespace std;


int main()
{
    int trows;
    cin>>trows;
    int i=1;
    int col=trows*2;
    while(i<=trows)
    {
    	//printing 1st no. triangle
    	int j=1;
    	while(j<=trows-i+1)
    	{
    		cout<<j;
    		j++;
    	}
    	//printing star
    	int star=i*2-2;
    	while(star)
    	{
    		cout<<"*";
    		star--;
    	}
    	//printing 2nd no. traingle
    	int k=trows-i+1;
    	while(k)
    	{
    		cout<<k;
    		k--;
    	}
    	cout<<endl;
    	i++;
    }

return 0;
}
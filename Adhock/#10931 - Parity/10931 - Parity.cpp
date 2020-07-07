///AC,15ms,5739
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int binary[1000];

int bin(int num)
{
    for(int i=0;i<1000;i++)binary[i] = 0;

    int i=0,counts=0;
    while(num)
    {
        binary[i] = num%2;
        num/=2;

        if(binary[i])counts++;
        i++;
    }

    return counts;
}

int main()
{
    int num,counts;

    while(cin>>num && num)
    {
        cout<<"The parity of ";
        counts = bin(num);

        int i;
        for(i=999;!binary[i];i--);
        for(;i>=0;i--)cout<<binary[i];

        cout<<" is "<<counts<<" (mod 2).\n";
    }
}




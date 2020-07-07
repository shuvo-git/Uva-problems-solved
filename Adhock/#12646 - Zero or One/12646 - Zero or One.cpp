///AC

#include <stdio.h>
#include <iostream>

using namespace std;




int main()
{
    int a,b,c,out;

    while(cin>>a>>b>>c)
    {
        if(a && b && c)cout<<"*\n";
        else if(!a && !b && !c)cout<<"*\n";
        else
        {
            if( (a==1 && b==0 && c==0) || (a==0 && b==1 && c==1)  )cout<<"A\n";
            if( (b==1 && a==0 && c==0) || (b==0 && a==1 && c==1)  )cout<<"B\n";
            if( (c==1 && b==0 && a==0) || (c==0 && b==1 && a==1)  )cout<<"C\n";
        }
    }
}

///AC

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <iostream>

using namespace std;

int dp[501][501];

int gcd(int a,int b)
{
    if(!b)return a;
    return gcd(b,a%b);
}

int sum(int num)
{

    int con = 0;

    for(int i=1;i<=num;i++)
    for(int j=i+1;j<=num;j++)
    {
        if(dp[i][j])con+=dp[i][j];
        else
        {
            dp[i][j] = gcd(i,j);
            con += dp[i][j];
        }
    }

    return con;
}

int main()
{
    int num;

    while(cin>>num && num)
    {
        cout<<sum(num)<<endl;
    }
}




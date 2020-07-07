#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

char str[1001],str2[1001];
int dp[1001][1001],l1,l2;
int lcs(int l1,int l2);


int main()
{

    while(gets(str) && gets(str2))
    {
        l1 = strlen(str);
        l2 = strlen(str2);

        for(int i=0;i<=l1;i++)
        for(int j=0;j<=l2;j++)
        dp[i][j] = -1;

        cout<<lcs(l1,l2)<<endl;
    }
}




int lcs(int l1,int l2)
{
    for(int i=0;i<=l1;i++)
    dp[i][0] = 0;
    for(int i=0;i<=l2;i++)
    dp[0][i] = 0;


    for(int i=1;i<=l1;i++)
        for(int j=1;j<=l2;j++)
        {
            dp[i][j] = max( dp[i-1][j], dp[i][j-1] );
            if (str[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
        }

    return dp[l1][l2];
}




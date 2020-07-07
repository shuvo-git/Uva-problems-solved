/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :
 * Run-time       :
 *
 */

#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <ctime>

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <iterator>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 105
#define PI 3.14159265358979323
#define mem(x,val) memset(x,val,sizeof(x))
#define cube(x) (x*x*x)
#define sqr(x)  (x*x)
#define rep(a,b,i) for(i=a;i<=b;i++)
#define rep2(a,i) for(i=0;i<a;i++)
#define Max(a,b,c) max(a,max(b,c))
#define Min(a,b,c) min(a,min(b,c))

char str[100][100];

int main()
{
    int tc,i;
    cin>>tc;
    gets(str[0]);

    for(int i=0;i<tc;i++)
        gets(str[i]);

    for(i=1;;i++)
    {
        if(tc*i%16 == 0)break;
    }

    int wTime = i*tc/16;
    int pos=0;

    for(int j=0;j<wTime;j++)
    {
        for(int k=0;k<16;k++)
        {
            if(pos==tc) pos=0;
            printf("%s:\n",str[pos]);

            pos++;
        }
    }

}







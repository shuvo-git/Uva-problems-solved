/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     Banglawash
 * Run-time       :     19ms(111)
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


int main()
{

    int tc,m,b,w,t,a,kase=0;
    char ch;
    cin>>tc;

    while(tc--)
    {
        cin>>m;
        a = b = t = w = 0;
        for(int i=0;i<m;i++)
        {
            cin>>ch;
            if(ch=='B')b++;
            else if(ch=='W')w++;
            else if(ch=='T')t++;
            else if(ch=='A')a++;
        }

        printf("Case %d: ",++kase);

        if( m == a )puts("ABANDONED");
        else if( !w && !t && b )puts("BANGLAWASH");
        else if( !b && !t && w )puts("WHITEWASH");
        else if( w == b ) printf("DRAW %d %d\n",w,t);
        else if( b>w ) printf("BANGLADESH %d - %d\n",b,w);
        else if( w>b ) printf("WWW %d - %d\n",w,b);
    }
}







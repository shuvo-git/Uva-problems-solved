
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

#define mx 100
#define PI 3.14159265358979323
#define mem(x,val) memset(x,val,sizeof(x))
#define cube(x) (x*x*x)
#define sqr(x)  (x*x)
#define rep(a,b,i) for(i=a;i<=b;i++)
#define rep2(a,i) for(i=0;i<a;i++)
#define Max(a,b,c) max(a,max(b,c))
#define Min(a,b,c) min(a,min(b,c))

int l[101],w[101],h[101];

int main()
{
    int tc,m,pos;

    while(cin>>tc && tc)
    {
        m = -1,pos = 0;
        for(int i=0;i<tc;i++)
        {
            cin>>l[i]>>w[i]>>h[i];

            if(h[i]>m)
            {
                m = h[i];
            }
        }

        int tmp,volume = 0;
        for(int i=0;i<tc;i++)
        {
            if( h[i] == m )
            {
                tmp = l[i]*w[i]*h[i];
                if(tmp>volume)
                volume = tmp;
            }
        }
        cout<<tmp<<endl;
    }
}







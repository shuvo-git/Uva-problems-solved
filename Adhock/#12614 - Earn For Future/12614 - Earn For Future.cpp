/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     12614-Earn For Future
 * Run-time       :     13ms( Rank - 124 )
 * AC
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
    int tc,n,kase,card,m;
    cin>>tc;

    for(int kase=1;kase<=tc;kase++)
    {
        cin>>n;

        cin>>m;
        for(int i=1;i<n;i++)
        {
            cin>>card;
            if(card>m) m = card;
        }

        printf("Case %d: %d\n",kase,m);
    }

}







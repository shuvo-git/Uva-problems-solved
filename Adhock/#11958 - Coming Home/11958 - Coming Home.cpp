/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :
 * Run-time       :     15ms(Rank - 449)
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

#define mx 90000
#define PI 3.14159265358979323
#define mem(x,val) memset(x,val,sizeof(x))
#define cube(x) (x*x*x)
#define sqr(x)  (x*x)
#define rep(a,b,i) for(i=a;i<=b;i++)
#define rep2(a,i) for(i=0;i<a;i++)
#define Max(a,b,c) max(a,max(b,c))
#define Min(a,b,c) min(a,min(b,c))

int bh[101],bm[101],atob[101];

int main()
{
    int tc,kase=0,nob,ah,am,mini,tmp;
    cin>>tc;

    while(tc--)
    {
        scanf("%d %d:%d",&nob,&ah,&am);

        for(int i=0;i<nob;i++)
        {
            scanf("%d:%d %d",&bh[i],&bm[i],&atob[i]);
        }

        ah = ah*60 + am;
        mini = mx;

        for(int i=0;i<nob;i++)
        {
            tmp = bh[i]*60+bm[i];

            if(tmp<ah)
            {
                tmp +=  1440-ah + atob[i];
            }
            else tmp = tmp + atob[i] - ah;


            mini = min(mini,tmp);
        }

        printf("Case %d: %d\n",++kase,mini);
    }

}







/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     Alaska
 * Run-time       :     15ms(rank - 812)
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

int charge[2000];

int main()
{
    int tc,tmp;

    while(cin>>tc && tc)
    {
        for(int i=0;i<tc;i++)
            cin>>charge[i];

        sort(charge,charge+tc);

        bool flag = true;
        tmp = 0;

        for(int i=1;i<tc;i++)
        if( (charge[i] - charge[i-1]) > 200  )
            flag = false;



        if(2*(1422-charge[tc-1])>200 || !flag)cout<<"IMPOSSIBLE\n";
            else cout<<"POSSIBLE\n";
    }

}







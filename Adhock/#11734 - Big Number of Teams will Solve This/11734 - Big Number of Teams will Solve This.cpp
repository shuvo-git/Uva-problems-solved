/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :
 * Run-time       :     15ms(rank - 1292)
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

char str1[1000],str2[1000],space[1000];

int main()
{

    int tc,kase=0,j,i;
    cin>>tc;
    gets(str1);

    while(tc--)
    {
        gets(str1);
        gets(str2);

        if(!strcmp(str1,str2))
            printf("Case %d: Yes\n",++kase);
        else
        {
            for(i=0,j=0;str1[i];i++)
            if(str1[i]!=' ')
            {
                space[j] = str1[i];
                j++;
            }
            space[j] = NULL;

            if(!strcmp(str2,space))printf("Case %d: Output Format Error\n",++kase);
            else printf("Case %d: Wrong Answer\n",++kase);

        }
    }


}







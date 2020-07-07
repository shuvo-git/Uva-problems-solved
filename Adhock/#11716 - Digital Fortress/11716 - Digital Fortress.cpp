/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     I I U P C   2 0 0 9 ... Problem D: Digital Fortress
 * Run-time       :     22ms(1280)
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

char str[10000];
char final[101][101];


int main()
{
    int tc;

    cin>>tc;
    gets(str);

    while(tc--)
    {
        gets(str);

        int len = strlen(str);

        int x = sqrt((double) len);

        if(x*x == len)
        {
            for(int i=0;i<x;i++)
                for(int j=i;j<len;j=j+x)
                cout<<str[j];
            cout<<endl;
        }
        else cout<<"INVALID"<<endl;
    }

}







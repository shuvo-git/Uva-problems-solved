/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :
 * Run-time       :     15ms
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

char str[10];

int main()
{
    double s,angle,r,arc,chord;

    while((scanf("%lf %lf %s",&s,&angle,str)==3))
    {
        r = 6440+s;

        if(!strcmp(str,"deg"))
        {
            angle = angle*PI/180.0;
        }
        else if(!strcmp(str,"min"))
        {
            angle = (angle/60.0)*(PI/180.0);
        }

        if(angle>PI) angle = 2*PI - angle;

        arc = r*angle;
        chord = 2*r*sin(angle/2.0);

        printf("%.6lf %.6lf\n",arc,chord);

    }

}







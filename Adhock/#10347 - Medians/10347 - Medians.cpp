
/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     Medians.
 * Run-time       :     22ms.
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

double area_t(double a,double b,double c)
{
    double Sm = (a+b+c)/2.0;
    double area = (Sm-a)*(Sm-b)*(Sm-c)*Sm;

    if(area<=0)return -1.0;

    area = sqrt(area);
    return 4.0/3.0*area;
}

int main()
{
    double a,b,c,area;

    while(cin>>a>>b>>c)
    {
        area = area_t(a,b,c);
        printf("%.3lf\n",area);

    }

}







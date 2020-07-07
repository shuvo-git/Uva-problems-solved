/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :
 * Run-time       :     15ms(693)
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


int ancs[100][30];

void ancestor()
{
    mem(ancs,0);

    ancs[0][0] = 1;
    ancs[1][0] = 1;

    for(int i=2;i<=85;i++)
    {
        for(int j=0;j<30; j++)
        {
            ancs[i][j] += ancs[i-1][j] + ancs[i-2][j];

            if(ancs[i][j]>9)
            {
                ancs[i][j+1] += ancs[i][j]/10;
                ancs[i][j] %= 10;
            }

        }
    }
}

int main()
{

    int n,i;
    ancestor();

    while(cin>>n && n)
    {
        for(i=30-1;!ancs[n][i];i--);

        for(;i>=0;i--)
            cout<<ancs[n][i];

        cout<<endl;


    }
}







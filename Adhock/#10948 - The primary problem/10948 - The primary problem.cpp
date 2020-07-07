/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     10948 - The primary problem
 * Run-time       :     1.710s
 * Rank(UVA)      :     3225
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 1001001
#define PI 3.14159265358979323
#define mem(x,val) memset(x,val,sizeof(x))
#define cube(x) (x*x*x)
#define sqr(x)  (x*x)
#define rep(a,b,i) for(i=a;i<=b;i++)
#define rep2(a,i) for(i=0;i<a;i++)
#define Max(a,b,c) max(a,max(b,c))
#define Min(a,b,c) min(a,min(b,c))
#define read(FILE) freopen(FILE,"r",stdin)
#define write(FILE) freopen(FILE,"w",stdout)

int n;
bool prime[mx];

vector<int> prm;
map<int,int> mii;

void sieve ()
{
    int lim = sqrt(mx);

    prime[2] = true;
    for(int i=3;i<mx;i+=2)
        prime[i] = true;

    for(int i=3 ; i<lim ; i+=2)
    {
        if(prime[i]==true)
            for(int j=i*i;j<mx; j += i)
                prime[j] = false;

    }

    prm.push_back(-1);

    for(int i=2,j=1;i<mx;i++)
    {
        if(prime[i]){
            prm.push_back(i);
            mii[i] = j;
            j++;
        }
    }

}

bool retIfSumEquals(int n,int a)
{

    if(mii[n-a]!=0)return true;
    else return false;
}

void sumReturn(int n)
{

    bool found = false;

    int sq = sqrt(n),tmp;
    for(int i=n;;i--)
    if(mii[i]!=0){tmp = i;break;}

    int lim = mii[tmp];



    for(int i=1;i<=lim;i++)
    {

        found = retIfSumEquals(n,prm[i]);
        if(found)
        {
            printf("%d:\n%d+%d\n",n,prm[i],n-prm[i]);
            break;
        }
    }

    if(!found)printf("%d:\nNO WAY!\n",n);
}

int main()
{
    read("in.txt");
    write("out.txt");
    sieve();



    while(cin>>n && n)
    {

        sumReturn(n);

    }

}







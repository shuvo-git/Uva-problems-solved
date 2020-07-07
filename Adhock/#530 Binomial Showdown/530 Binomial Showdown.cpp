/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     530 - Binomial Showdown
 * Run-time       :     0ms
 * Rank(UVA)      :     3211
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

typedef unsigned long ui32;

#define mx 105
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

ui32 n,r;

ui64 gcd(ui64 a,ui64 b)
{
    if(!b)return a;
    return gcd(b,a%b);
}

ui32 nCr(ui32 n,ui32 r)
{
    r = (n-r<r)? n-r:r;
    ui64 p=1,k=1,m;

    while(r)
    {
        p *=n;
        k *=r;

        m = gcd(p,k);
        p /=m;
        k /=m;

        n--;
        r--;
    }
    return p;

}

int main()
{
    read("in.txt");
    write("out.txt");


    while(cin>>n>>r && !(!n && !r))
    {
        cout<<nCr(n,r)<<endl;
    }

}







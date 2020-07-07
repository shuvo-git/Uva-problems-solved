/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :
 * Run-time       :
 * Rank(UVA)      :
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 1000005
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

void sieve ()
{
    int lim = sqrt(mx);

    prime[2] = true;
    for(int i=3;i<lim;i+=2)
        prime[i] = true;

    for(int i=3 ; i<lim ; i+=2)
    {
        if(prime[i]==true)
            for(int j=i*i;j<mx; j += i)
                prime[j] = false;

    }
}

int main()
{
    //read("in.txt");
    //write("out.txt");
    //mem(prime,false);
    sieve();

    while(cin>>n && n)
    {
        if(prime[n])
            cout<<"prime\n"<<endl;
        else cout<<"not prime\n"<<endl;

    }

}







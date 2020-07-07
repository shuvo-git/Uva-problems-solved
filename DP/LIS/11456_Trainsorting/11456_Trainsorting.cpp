/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     11456 Trainsorting
 * Run-time       :
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 2005
#define PI 3.14159265358979323
#define mem(x,val) memset(x,val,sizeof(x))
#define cube(x) (x*x*x)
#define sqr(x)  (x*x)
#define rep(a,b,i) for(i=a;i<=b;i++)
#define rep2(a,i) for(i=0;i<a;i++)
#define Max(a,b,c) max(a,max(b,c))
#define Min(a,b,c) min(a,min(b,c))
#define read(FILE) freopen(FILE,"a+",stdin)
#define write(FILE) freopen(FILE,"a+",stdout)

int dpInc[mx];
int dpDec[mx];
int tcase,n,weights[mx];

void lis(int * w,int n)
{
    for(int i=0;i<n;i++)
        dpInc[i] = 1;
    for(int i=n-2;i>=0;i--)
    {
        for(int j=i+1;j<n;j++)
        {
            if(w[j]>w[i])
                dpInc[i]=max(dpInc[i],dpInc[j]+1);
        }
    }


}

void lds(int * w,int n)
{
    for(int i=0;i<n;i++)
        dpDec[i] = 1;
    for(int i=n-2;i>=0;i--)
    {
        for(int j=i+1;j<n;j++)
        {
            if(w[j]<w[i])
                dpDec[i]=max(dpDec[i],dpDec[j]+1);
        }
    }


}

int main()
{
    read("in.txt");


    scanf("%d",&tcase);

    for(int i=0;i<tcase;i++)
    {
        cin>> n;
        for(int j=0;j<n;j++)
            cin >> weights[j];


        lis(weights,n);
        lds(weights,n);

        int ans = 0;
        for(int i=0;i<n;i++)
            ans = max(ans,dpInc[i]+dpDec[i]-1);


        cout<<ans<<endl;

    }
}







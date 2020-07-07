/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     481 - What Goes Up
 * Run-time       :     40 ms
 * Rank(uva)      :     2488
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

void LIS(int * X,int n)
{
    int parent[n];
    int increasingSub[n+1];
    int len = 0; /// Length of Longest Subsequence

    for(int i=0;i<n;i++)
    {
        int low  = 1;
        int high = len;
        //printf("%d %d\n",low,high);

        while(low<=high)
        {
            int mid = (int) ceil((double)(low+high)/2.0);

            //printf("%d %d %d  %d X[increasingSub[mid]]  <  X[i] = %d < %d\n",low,high,mid,increasingSub[mid], X[increasingSub[mid]], X[i]);

            if(X[increasingSub[mid]]<X[i])
                low = mid+1;
            else high = mid - 1;
        }
        int pos = low;

        parent[i] = increasingSub[pos-1];
        increasingSub[pos] = i;

        if(pos>len)len = pos;
    }

    ///Printing

    printf("%d\n-\n",len);

    int lis_arr[len],k = increasingSub[len];
    for(int j=len-1;j>=0;j--)
    {
        lis_arr[j] = X[k];
        k = parent[k];
    }

    for(int j=0;j<len;j++)
    {
        printf("%d\n",lis_arr[j]);
    }
}


int main()
{
    //read("in2.txt");
    int n=0,a,X[mx];


    while(cin>>a)
    {
        X[n++]=a;
    }
    LIS(X,n);
}




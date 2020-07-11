/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     11235 - Frequent values(Binary Segment Tree)
 * Run-time       :
 * Rank(UVA)      :
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 100005
#define PI 3.14159265358979323
#define INF std::numeric_limits<int>::max()
#define NEG_INF std::numeric_limits<int>::min()
#define mem(x,val) memset(x,val,sizeof(x))
#define cube(x) (x*x*x)
#define sqr(x)  (x*x)
#define rep(a,b,i) for(i=a;i<=b;i++)
#define rep2(a,i) for(i=0;i<a;i++)
#define Max(a,b,c) max(a,max(b,c))
#define Min(a,b,c) min(a,min(b,c))
#define read(FILE) freopen(FILE,"r",stdin)
#define write(FILE) freopen(FILE,"w",stdout)

int arr[mx] ;

struct{
    int freq;
}node[4*mx+1];

int seg[4*mx+1];

int segUtil(int x,int y)
{
    return min(x,y);
}

void build_tree(int idx,int st,int ed)
{
    if(st == ed )
    {
        seg[idx] = arr[st];
        return;
    }

    int mid = (st+ed)/2;

    build_tree(2*idx,st,mid);
    build_tree(2*idx+1,mid+1,ed);

    seg[idx] = segUtil( seg[2*idx],seg[2*idx+1] );

}

int _query(int idx,int st,int ed,int i,int j)
{
    if(st>j || ed<i)return INF;
    if(st>=i && ed<=j)return seg[idx];

    int mid   = (st+ed)/2;
    int left  = _query(2*idx,st,mid,i,j);
    int right = _query(2*idx+1,mid+1,ed,i,j);

    return segUtil(left,right);

}

int query(int n,int i,int j)
{
    return _query(1,0,n-1,i,j);
}



int main()
{

    read("in.txt");
    //write("out.txt");

    /*for(int i=0;i<9;i++){
            cout<<arr[i]<<" ";

    }
    cout<< endl;


    build_tree(1,0,8);


    for(int i=1;i<9*2;i++){
            cout<<seg[i]<<" ";

    }
    cout<< endl;
    cout<<query(9,4,5)<<endl;

    update(9,4,-20);

    cout<<query(9,4,5)<<endl;
    */

    int n,q;

    while(cin>>n>>q && n)
    {
        for(int i=0;i<n;i++)cin>>arr[i];
        build_tree(1,0,n-1);
    }

}







/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     10305 - Ordering Tasks
 * Run-time       :     0ms
 * Rank(UVA)      :     6131
 * AC
 */

#include <bits/stdc++.h>

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
#define read(FILE) freopen(FILE,"r+",stdin)
#define write(FILE) freopen(FILE,"w",stdout)


vector < int >g[mx];
int reach[mx];
vector<int> listDfs;

void dfs(int v)
{

    //printf("%d ",v);
    for(int i=0;i< g[v].size();i++)
    if(!reach[g[v][i]])
    {
        //printf("%d->%d\n",v,g[v][i]);
        dfs(g[v][i]);
    }
    reach[v]=1;
    listDfs.push_back(v);

}

void dfs_(int v)
{
    mem(reach,0);
    for(int i=1;i<=v;i++){
        if(!reach[i])dfs(i);
    }

    for(int i=listDfs.size()-1;i>=0;i--)
    {
        printf("%d ",listDfs[i]);
    }
}

int main()
{
    read("in.txt");
    //write("out.txt");
    int v,e,a,b;

    while(cin>>v>>e)
    {
        if(!v && !e)break;

        for(int i=0;i<e;i++)
        {
            cin>>a>>b;
            g[ a ].push_back( b );
        }

        dfs_(v);
        cout<<endl;

        for(int i=0;i<mx;i++)g[i].clear();
        listDfs.clear();
    }
}





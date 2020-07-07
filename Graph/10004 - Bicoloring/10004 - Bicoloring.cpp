/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :
 * Run-time       :
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 205
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


vector <int >g[mx];

int cost[mx],partitions[mx];

bool bfs(int s)
{
    queue < int > q;
    mem(cost,-1);
    mem(partitions,0);


    cost[s] = 0;
    partitions[s] = 1;
    q.push(s);

    while(!q.empty())
    {
        int u,v;
        u = q.front();
        q.pop();

        for(int i=0;i<g[u].size();i++)
        {
            v = g[u][i];

            if(partitions[u] == partitions[v])return false;
            if(cost[v]==-1)
            {
                cost[v] = cost[u] + 1;
                partitions[v] = 3 - partitions[u];
                q.push(v);
            }
        }
    }
    return true;
}

int main()
{
    int n,e,a,b;

    //read("in.txt");

    while(cin>>n>>e)
    {

        for(int i=0;i<200;i++)g[i].clear();

        for(int i=0;i<e;i++)
        {
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        if(bfs(a))cout<<"BICOLORABLE.\n";
        else cout<<"NOT BICOLORABLE.\n";

    }

}







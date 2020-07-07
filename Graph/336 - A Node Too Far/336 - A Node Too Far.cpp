/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     A Node Too Far
 * Run-time       :     112ms
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

map<int,int> mii;
vector < int >g[mx];
int cost[mx];

void bfs(int s)
{
    queue < int > q;
    mem(cost,-1);

    cost[s] = 0;
    q.push(s);

    while(!q.empty())
    {
        int u,v;
        u = q.front();
        q.pop();

        for(int i=0;i<g[u].size();i++)
        {
            v = g[u][i];
            if(cost[v]==-1)
            {
                cost[v] = cost[u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int tc,a,b,mindx,s,ttl,kase=0;

    while(cin>>tc && tc)
    {
        mindx = 1;
        for(int i=0;i<tc;i++)
        {
            cin>>a>>b;

            if(!mii[a]){mii[a] = mindx;mindx++;}
            if(!mii[b]){mii[b] = mindx;mindx++;}

            g[ mii[a] ].push_back( mii[b] );
            g[ mii[b] ].push_back( mii[a] );
        }

        while(cin>>s>>ttl && (s || ttl) )/*Here was wrong code "while(cin>>s>>ttl && s && ttl )" replaced by
                                          *"while(cin>>s>>ttl && (s || ttl) )"
                                          */
        {
            int con = 0;
            bfs(mii[s]);

            for(int i=1;i<mindx;i++)
                if(cost[i]>ttl || cost[i]==-1) con++; /*Here was wrong code "if(cost[i]>ttl)" replaced by
                                                       *"if(cost[i]>ttl || cost[i]==-1)"
                                                       */

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++kase,con,s,ttl);
        }

        for(int i=0;i<mx;i++)g[i].clear();
        mii.clear();
    }
}





/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     10954 - Add All
 * Run-time       :     20ms
 * Rank(UVA)      :     4197
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 5005
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

int main()
{
    //read("in.txt");
    //write("out.txt");

    int n,val,cost;

    while(cin>>n && n)
    {
        priority_queue <int, vector<int>, greater<int> > pq;

        for(int i=0;i<n;i++){
            cin>>val;
            pq.push(val);
        }

        cost = 0;
        while(pq.size()>1)
        {
            int sum = pq.top();pq.pop();
            sum += pq.top();pq.pop();

            cost += sum;

            pq.push(sum);
        }
        cout<<cost<<endl;
    }

}







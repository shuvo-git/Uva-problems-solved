/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     12032 - The Monkey and the Oiled Bamboo
 * Run-time       :     110ms
 * Rank(UVA)      :     1947
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 1000005
#define PI 3.14159265358979323
#define mem(x,val) memset(x,val,sizeof(x))

#define read(FILE) freopen(FILE,"r",stdin)
#define write(FILE) freopen(FILE,"w",stdout)

int rounge[mx],dif[mx];

int main()
{
    read("in.txt");
    write("out.txt");

    int tc,kase=0,n,k;
    rounge[0] = 0;

    cin>>tc;

    while(tc--)
    {
        cin>>n;

        for(int i=1;i<=n;i++){
            cin>>rounge[i];
            dif[i] = rounge[i]-rounge[i-1];
        }
        //sort(dif,dif+n+1);

        int maxi = dif[1];
        for(int i=1;i<=n;i++){
            //cout<<dif[i]<<" ";
            maxi = dif[i]>maxi? dif[i]:maxi;
        }

        //cout<<endl<<"max: "<<maxi<<endl;

        k = maxi;
        for(int i=1;i<=n;i++)
        {
            if(dif[i]<maxi)continue;
            else if(dif[i]==maxi)
            {
                maxi--;
                //k++;
            }
            else if(dif[i]>maxi)
            {
                k++;
                break;
            }
        }

        printf("Case %d: %d\n",++kase,k);
    }

}







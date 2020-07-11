/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     389 - Basically Speaking (Number system conversion)
 * Run-time       :     100ms
 * Rank(UVA)      :     820
 *
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
#define read(FILE) freopen(FILE,"r",stdin)
#define write(FILE) freopen(FILE,"w",stdout)





int toDec(char * num,int base)
{
    int len = strlen(num),p=1,sum=0;
    for(int i=len-1;i>=0;i--)
    {
        int tmp;
        tmp = (num[i]>='A')? num[i]-'A'+10: num[i]-'0';

        sum += tmp*p;

        p *= base;

    }
    return sum;
}

void toBase(int num,int b)
{
    if(num==0)
    {cout<<"      0"<<endl;return;}
    int bnum[100];
    int i=0;

    while(num)
    {
        if(i>7)break;

        int tmp = num%b;


        if(tmp>9)
            bnum[i] = tmp-10+65;
        else
            bnum[i] = tmp+48;

        //cout<<tmp<<" "<<bnum[i]<<endl;

        num /= b;
        i++;
    }

    //cout <<i<<endl;

    if(i>7)printf("  ERROR");
    else{
        for(int j=0;j<7-i;j++)
            cout<<" ";
        for(int j=i-1;j>=0;j--)
            printf("%c",bnum[j]);
    }

    cout<<endl;

}



int main()
{
    read("in.txt");
    write("out.txt");

    int f,t,x;
    char str[2000];


    while(scanf("%s %d %d",str,&f,&t)!=EOF)
    {

        x = toDec(str,f);
        toBase( x,t);
    }


}







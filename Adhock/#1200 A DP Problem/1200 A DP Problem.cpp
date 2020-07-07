/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     1200 - A DP Problem
 * Run-time       :     0ms
 * Rank(UVA)      :     197
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 305
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

int numFromChar(int num,char d)
{
    return num*10 + (d-'0');
}

void parse(char * str)
{
    int len = strlen(str);
    int nums[len];
    int xs[len];

    int isEqual = 0;
    char curSign = '+';
    int curNumber = 0;
    int j =0,k=0;

    for(int i=0;i<len;i++)
    {
        if(str[i]=='='){
            if(isEqual)nums[j++] = (curSign=='-')? curNumber:(-1)*curNumber;
            else nums[j++] = (curSign=='-')? (-1)*curNumber:curNumber;

            isEqual = 1;
            curNumber = 0;
            curSign = '+';
        }
        else if(str[i]=='+' || str[i]=='-')
        {
            if(isEqual)nums[j++] = (curSign=='-')? curNumber:(-1)*curNumber;
            else nums[j++] = (curSign=='-')? (-1)*curNumber:curNumber;

            curSign = str[i];

            curNumber = 0;
        }
        else if(str[i]=='x')
        {
            if(i==0) curNumber = 1;
            else if(str[i-1]=='+' || str[i-1]=='-'|| str[i-1]=='=')curNumber = 1;

            if(isEqual)xs[k++] = (curSign=='-')? curNumber:(-1)*curNumber;
            else xs[k++] = (curSign=='-')? (-1)*curNumber:curNumber;

            curNumber = 0;
        }
        else
        {
            curNumber = numFromChar(curNumber,str[i]);

            if(i==len-1){
                if(isEqual)nums[j++] = (curSign=='-')? curNumber:(-1)*curNumber;
                else nums[j++] = (curSign=='-')? (-1)*curNumber:curNumber;
            }
        }
    }

    int xs_sum=0,nums_sum=0;
    for(int i=0;i<j;i++)
    {
        //cout<<nums[i]<<" ";
        nums_sum += nums[i];
    }
    //cout<<endl;
    for(int i=0;i<k;i++){
        //cout<<xs[i]<<" ";
        xs_sum+=xs[i];
    }
    //cout<<endl;

    nums_sum *= (-1);



    //cout << xs_sum <<"x = "<< nums_sum<<endl;

    if(xs_sum == 0 && nums_sum==0)
        cout<<"IDENTITY"<<endl;
    else if (xs_sum == 0 && nums_sum!=0)
        cout<<"IMPOSSIBLE"<<endl;
    else
    {
        double ans = (double)nums_sum/(double)xs_sum;
        cout<< (int)floor(ans) <<endl;
        //cout<< floor(nums_sum/xs_sum) <<endl;

    }
}

int main()
{
    read("in.txt");
    write("out.txt");

    //printf("%d %d\n",0/(-2),floor(0/(-2)));

    int n;
    char str[mx] ;
    scanf("%d\n",&n);

    for(int i=0;i<n;i++)
    {
        gets(str);

        //printf("%d...............\n",i);

        parse(str);
    }


}







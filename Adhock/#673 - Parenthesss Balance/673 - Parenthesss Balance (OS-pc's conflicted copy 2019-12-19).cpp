
/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     673 - Parenthesss Balance
 * Run-time       :     0 ms
 * Rank           :     1142
 *
 */

#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <ctime>

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <iterator>

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

#define read(FILE) freopen(FILE,"a+",stdin)
#define write(FILE) freopen(FILE,"a+",stdout)



int isBalanced(char * str)
{

    stack<char> st;
    map<char,char> mc;

    mc[']']='[';
    mc[')']='(';


    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==']' || str[i]==')')
        {

            if(st.empty())return 0;
            else
            {
                char tmp = st.top();
                //printf("%c *\n",tmp);

                if(mc[str[i]]==tmp)st.pop();
                else return 0;
            }



        }
        else {
                st.push(str[i]);
                //printf("%c #\n",str[i]);
        }
    }
    if(!st.empty())return 0;
    else return 1;
}


int main()
{
    read("in2.txt");
    write("out.txt");
    char str[130];

    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        gets(str);
        if(isBalanced(str))printf("Yes\n");
        else printf("No\n");
    }

}







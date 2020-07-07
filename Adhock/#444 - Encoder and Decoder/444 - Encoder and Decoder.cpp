/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     Encoder and Decoder
 * Run-time       :     15ms
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

char str[1000000],str2[1000000];

char conv(int x)
{
    if(x==0)return '0';
    if(x==1)return '1';
    if(x==2)return '2';
    if(x==3)return '3';
    if(x==4)return '4';
    if(x==5)return '5';
    if(x==6)return '6';
    if(x==7)return '7';
    if(x==8)return '8';
    if(x==9)return '9';
}

int main()
{
    int tmp,len;

    while(gets(str))
    {
        len = strlen(str);

        if(str[0]>='0' && str[0]<='9')
        {
            reverse(str,str+len);

            for(int i=0;str[i];)
            {
                if(str[i]=='1')
                {
                    char tmp=0;
                    tmp = (str[i]-'0')*100;
                    i++;
                    tmp += (str[i]-'0')*10;
                    i++;
                    tmp += (str[i]-'0');
                    i++;

                    printf("%c",tmp);
                }
                else
                {
                    char tmp=0;
                    tmp = (str[i]-'0')*10;
                    i++;
                    tmp += (str[i]-'0');
                    i++;
                    printf("%c",tmp);
                }
            }
            cout<<endl;

        }
        else
        {
            int j=0;
            for(int i=0;i<len;i++)
            {
                tmp = str[i];
                if(tmp>=100)
                {
                    str2[j] = conv(tmp/100);
                    j++;
                    str2[j] = conv((tmp-100)/10);
                    j++;
                    str2[j] = conv((tmp-100)%10);
                    j++;
                }
                else
                {
                    str2[j] = conv(tmp/10);
                    j++;
                    str2[j] = conv(tmp%10);
                    j++;
                }
            }
            str2[j] = NULL;

            reverse(str2,str2+j);
            puts(str2);
        }


    }
}







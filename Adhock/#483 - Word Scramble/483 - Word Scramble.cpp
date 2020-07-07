
/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     483 - Word SCramble
 * Run-time       :     0.00 ms
 * Rank(UVA)      :
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

typedef long long int i64;
typedef unsigned long long int ui64;

#define mx 100005
#define PI 3.14159265358979323
#define mem(x,val) memset(x,val,sizeof(x))
#define cube(x) (x*x*x)
#define sqr(x)  (x*x)
#define Max(a,b,c) max(a,max(b,c))
#define Min(a,b,c) min(a,min(b,c))
#define read(FILE) freopen(FILE,"r",stdin)
#define write(FILE) freopen(FILE,"w",stdout)

void revPrint(char *str,int start,int ends)
{
    for(int i=ends-1;i>=start;i--)
    {
        printf("%c",str[i]);
    }
}

int main()
{
    char str[mx];
    while(gets(str))
    {
        int n= strlen(str);
        for(int i=0,j=0;;)
        {
            if(str[j]==' ' || j>=n)
            {
                revPrint(str,i,j);
                if(str[j]==' ')printf(" ");
                j++;
                i = j;

                if(j>n)break;
            }
            else j++;


        }
        printf("\n");
    }

}







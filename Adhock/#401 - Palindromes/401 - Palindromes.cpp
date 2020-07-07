
/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     401 - Palindromes
 * Run-time       :     0ms
 * Rank(UVA)      :     4285
 * AC
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



class pallindrome
{
    public:

    string str;
    string tmp,x;
    map <char,char> mcc;



    pallindrome()
    {
        mcc['S'] = '2';
        mcc['2'] = 'S';
        mcc['E'] = '3';
        mcc['J'] = 'L';
        mcc['Z'] = '5';
        mcc['3'] = 'E';
        mcc['L'] = 'J';
        mcc['5'] = 'Z';
        mcc['A'] = 'A';
        mcc['H'] = 'H';
        mcc['I'] = 'I';
        mcc['M'] = 'M';
        mcc['O'] = 'O';
        mcc['T'] = 'T';
        mcc['U'] = 'U';
        mcc['V'] = 'V';
        mcc['W'] = 'W';
        mcc['X'] = 'X';
        mcc['Y'] = 'Y';
        mcc['1'] = '1';
        mcc['8'] = '8';
    }

    bool is_palin()
    {
        str = x;


        int len = str.size(),i,j;
        for(int i=0;i<len;i++)
            if(str[i]=='0')str[i] = 'O';

        bool flag = true;
        for(i=0,j=len-1;i<= j;i++,j--)
        {
            if(str[i] != str[j])
            {
                flag = false;
                break;
            }
        }

        return flag;

    }

    void revString()
    {
        int len = tmp.size(),i,j;

        char t;

        for(i=0,j=len-1;i<=j;i++,j--)
        {
            t    = tmp[i];
            tmp[i] = tmp[j];
            tmp[j] = t;
        }
    }

    bool is_mirror()
    {
        str = x;
        int len = str.size();
        for(int i=0;i<len;i++)
            if(str[i]=='0')str[i] = 'O';

        tmp = str;

        revString();



        for(int i=0;i<len;i++)
        {
            if(mcc[ tmp[i] ])tmp[i] = mcc[ tmp[i] ];
            else return false;
        }

        if(str == tmp)return true;
        return false;
    }


};

int main()
{
    read("in.txt");
    write("out.txt");

    pallindrome p ;
    bool m,pl;

    while(cin>>p.x)
    {
        cout<<p.x;

        m = p.is_mirror();
        pl = p.is_palin();

        if(m && pl) puts(" -- is a mirrored palindrome.\n");
        else if(!m && pl) puts(" -- is a regular palindrome.\n");
        else if(m && !pl) puts(" -- is a mirrored string.\n");
        else if(!m && !pl) puts(" -- is not a palindrome.\n");


    }

}







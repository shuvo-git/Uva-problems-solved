/*
 * author         :     Jobayed Ullah Shuvo
 * Institution    :     University of Dhaka
 * problem-name   :     10222 - Decode the Mad man
 * Run-time       :     15ms
 * Rank(UVA)      :     8802
 *
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

char str[1000000];
char a[200];

void assign()
{
    a[ '`' ] = '=';
    a[ '1' ] = '-';
    a[ '2' ] = '`';
    a[ '3' ] = '1';
    a[ '4' ] = '2';
    a[ '5' ] = '3';
    a[ '6' ] = '4';
    a[ '7' ] = '5';
    a[ '8' ] = '6';
    a[ '9' ] = '7';
    a[ '0' ] = '8';
    a[ '-' ] = '9';
    a[ '=' ] = '0';
    a[ 'q' ] = ']';
    a[ 'w' ] = '\\';
    a[ 'e' ] = 'q';
    a[ 'r' ] = 'w';
    a[ 't' ] = 'e';
    a[ 'y' ] = 'r';
    a[ 'u' ] = 't';
    a[ 'i' ] = 'y';
    a[ 'o' ] = 'u';
    a[ 'p' ] = 'i';
    a[ '[' ] = 'o';
    a[ ']' ] = 'p';
    a[ '\\' ] = '[';
    a[ 'a' ] = ';';
    a[ 's' ] = '\'';
    a[ 'd' ] = 'a';
    a[ 'f' ] = 's';
    a[ 'g' ] = 'd';
    a[ 'h' ] = 'f';
    a[ 'j' ] = 'g';
    a[ 'k' ] = 'h';
    a[ 'l' ] = 'j';
    a[ ';' ] = 'k';
    a[ '\'' ] = 'l';
    a[ 'z' ] = '.';
    a[ 'x' ] = '/';
    a[ 'c' ] = 'z';
    a[ 'v' ] = 'x';
    a[ 'b' ] = 'c';
    a[ 'n' ] = 'v';
    a[ 'm' ] = 'b';
    a[ ',' ] = 'n';
    a[ '.' ] = 'm';
    a[ '/' ] = ',';
    a[ ' ' ] = ' ';
}

int main()
{
    assign();

    while(gets(str))
    {
        for(int i=0;str[i];i++)
        cout<<a[ tolower(str[i]) ];

        cout<<endl;
    }
}

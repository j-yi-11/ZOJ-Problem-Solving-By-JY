#include <cstring>
#include <string>
#include <map>
#include <cstdio>
#include <iostream>
#define max 31
#define eps 1e-6
using namespace std;
int casenumber,n,m;
double rate[max][max];
map<string,int> mapping;
void floyd(int n)
{
    for( int k = 0 ; k < n ; k++ )
        for( int i = 0 ; i < n ; i+= 1 )
            for( int j = 0 ; j < n ; j++ )
                if( rate[i][k] * rate[k][j] > rate[i][j] + eps )
                    rate[i][j] = rate[i][k] * rate[k][j];
    /*汇率最long距离是相乘定义的*/
}
void initial(int n)
{
    memset(rate,0,sizeof(rate));
    for( int i = 0 ; i < max ; i+= 1 )
            for( int j = 0 ; j < max ; j++ )
                rate[i][j] = 0 ;
    for(int i = 0 ; i < n ; i++ )
        rate[i][i] = 1 ;
}
int main()
{
    while( scanf(" %d",&n) != EOF && n )
    {
        bool profitable = false;
        casenumber++;
        initial(n);
        string countryname;
        for( int i = 0 ; i < n ; i++ )
        {
            cin >> countryname;
            mapping[countryname] = i ;
        }
        string country1,country2;
        scanf(" %d\n",&m);
        double exchangerate;
        for( int i = 0 ; i < m ; i++ )
        {
            cin >> country1 >> exchangerate >> country2;
            rate[mapping[country1]][mapping[country2]] = exchangerate ;
        }
        floyd(n);
        for( int i = 0 ; i < n ; i++ )
                if( 1 < rate[i][i] )
                    profitable = true;
        if( profitable )
            printf("Case %d: Yes\n",casenumber);
        else
            printf("Case %d: No\n",casenumber);
    }
    return 0;
}

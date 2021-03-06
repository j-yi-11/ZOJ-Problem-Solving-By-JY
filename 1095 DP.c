#include<stdio.h>
long long n;
long long humble[5843];
/*we abandon humble[0] to think easily.*/
void printpost(long long n)
{
    if( n % 10 == 1 ||  n % 10 == 2 || n % 10 == 3 )
        if ( ! (n % 100 < 20 && n % 100 > 10 ) )
        {
            if ( n % 10 == 1 )
                 printf("st");
            else if ( n % 10 == 2 )
                printf("nd");
            else if( n % 10 == 3 )
                printf("rd");
            return;
        }
    printf("th");
    return;
}
long long min(long long a, long long b)
{
    return ( a < b ) ? a : b ;
}
int main()
{
    humble[1] = 1 ; humble[2] = 2 ; humble[3] = 3 ; humble[4] = 4 ;
    /*humble number == 2^p1 * 3^p2 * 5^p3 * 7^p4 打表*/
    int power2 = 1 , power3 = 1, power5 = 1 , power7 = 1 ;
    for(int i = 2 ; i <= 5842 ; i += 1 )
    {
        humble[i] = min( min(2*humble[power2],3*humble[power3]) ,
                         min(5*humble[power5],7*humble[power7]) );
        if ( humble[i] == 2*humble[power2] )
            power2++;
        if( humble[i] == 3*humble[power3] )
            power3++;
        if( humble[i] == 5*humble[power5] )
            power5++;
        if( humble[i] == 7*humble[power7] )
            power7++;
    }
    while( scanf("%lld ",&n) != EOF && n != 0 )
    {
        printf("The %d",n);
        printpost(n);
        printf(" humble number is %d.\n",humble[n]);
    }
    return 0;
}

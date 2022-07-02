#include <stdio.h>
#include <string.h>
#define max 6
#define accessible '.'
#define shooted '0'
#define initial '0'
#define wall 'X'
typedef enum{ true , false} bool;
int n , count;
char area[max][max];
bool legitimate( int x , int y)
{
    for( int column = y - 1 ; column >= 0 ; column-- )
    {
        if( area[x][column] == wall )
            break;
        if( area[x][column] == shooted )
            return false;
    }
    for( int row = x - 1 ; row >= 0 ; row-- )
    {
        if( area[row][y] == wall )
            break;
        if( area[row][y] == shooted )
            return false;
    }
    return true;
}
void dfs(  int position , int counting )
{
    if( position == n * n )
    {
        if(counting > count){
             count = counting;
             return;
        }
    }
    if( position > n * n)
        return;
    int x = position / n  , y = position % n  ;
    if( area[x][y] == accessible && legitimate(x,y) == true )
    {
        area[x][y] = shooted;
        dfs(  position+1 , counting+1 );
        area[x][y] = accessible;
    }
        dfs( position+1 , counting );
}
int main()
{
    scanf("%d\n", &n);
    while ( n )
    {    
        memset(area, initial , sizeof(area));
        for (int i = 0; i < n; i++)
            for(int j = 0 ; j < n ; j++)
                scanf("%c\n", &area[i][j]);
        count = 0;
        dfs(0,0);
        printf("%d\n", count);
        scanf("%d\n", &n);
    }
    return 0;
}

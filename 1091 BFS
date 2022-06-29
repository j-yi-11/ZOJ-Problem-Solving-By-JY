#include <iostream>
#include <queue>
#include <cstdio>
#include <string>
#define unvisited 0
#define visited 1
using namespace std;
typedef struct point{
	int x,y;
	int moves;/*从出发点到该点所走过的步数*/
}point;
queue<point>Q;
int e_x,e_y;
int map[10][10];
int dir[8][2]={{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2}};
void initial()
{
    for(int i = 0 ; i < 10 ; i++)
        for(int j = 0 ; j < 10 ; j++ )
            map[i][j] = unvisited;
	while( !Q.empty() )
		Q.pop();/*清空上一次的队列*/
}
bool inchessboard(int x, int y)
{
    return x>0 && x<=8 && y>0 && y<=8 && map[x][y]==unvisited ;
}
int bfs(point s)
{
	map[s.x][s.y] = visited;
	Q.push (s);/*s入队*/
	while( !Q.empty() )
	{
		point head=Q.front ();
		Q.pop();
		if(head.x==e_x&&head.y==e_y) /*到达终点*/
            return head.moves;
		for(int j=0;j<8;j++)
		{
			int x=head.x+dir[j][0];
			int y=head.y+dir[j][1];
			if( inchessboard( x, y ) )
			{
				map[x][y]=visited;
                point t;
				t.x=x;
				t.y=y;
				t.moves=head.moves+1;
				Q.push(t);
			}
		}
	}
}
int main()
{
	char start[5],end[5];
	point head;
	while( scanf("%s %s\n",start,end) != EOF )
	{
		e_x = end[0]-'a'+1;
		e_y = end[1]-'0';
		head.moves=0;/*自己到自己*/
		head.x = start[0]-'a'+1;
		head.y = start[1]-'0';
        initial();
		printf("To get from %s to %s takes %d knight moves.\n",start,end,bfs(head));
	}
	return 0;
}

/*灌水定理*/
#include<stdio.h>
int goal,capacity_a,capacity_b;
int main()
{
	int temp;
	while( scanf("%d%d%d",&capacity_a,&capacity_b,&goal) == 3 )
    	{
		if( capacity_a == 1 )
		{
			for(temp = 1 ; temp <= goal ; temp++ )
			  printf("fill A\npour A B\n");
			printf("success\n");
			continue;
		}
		temp = 0 ;
		while( temp != goal )
		{
			printf("fill A\npour A B\n");
			temp += capacity_a;
			if( temp >= capacity_b )
			{
                temp -= capacity_b ;
                printf("empty B\npour A B\n");
            }
		}	
        printf("success\n");
	}
	return 0;
}

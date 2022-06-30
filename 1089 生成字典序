#include <stdio.h>
int k,a[14],b[7];
void dfs(int len,int current)
{
    int i;
	if(len>6) 
	{
		for(i=1;i<6;i++)
			printf("%d ",b[i]);
		printf("%d\n",b[i]);
	}
	else
		for(int i=current;i<k-(6-len)+1;i++)//这里的循环，确定i的范围并赋值
		{
			b[len]=a[i];
			dfs(len+1,i+1);
		}
}
int main()
{
    scanf("%d ",&k);
	while( k )
	{
		for(int i = 1 ; i <= k ; i++)
			scanf("%d ",a+i);
		dfs(1,1);
        scanf("%d ",&k);
		if(k)
            printf("\n");
	}
	return 0;
}

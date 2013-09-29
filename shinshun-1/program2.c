#include <stdio.h>

int main(void)
{
	int n,i,p,q,r,a,b;
	int count = 0;
	printf("N=");
	scanf("%d",&n);
	a = -1;
	for(i=2;n!=1;)
	{
		p = n/i;
		q = i*p;
		r = n-q;
		if(r!=0)
		{
			i++;
		}
		else
		{
			b = i;	count++;
			if(b == a+2)
				printf("双子素数\n");
			printf("%d %d %d\n",i,a,b);
			a = i;
			n = p;
		}
	}
	printf("%d\n",count);
	return 0;
}

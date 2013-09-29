#include <stdio.h>

int main(void)
{
	int n,i,p,q,r;
	int count = 0;
	printf("N=");
	scanf("%d",&n);
	for(i=2;n!=1;)
	{
		p = n/i;	count++;
		q = i*p;
		r = n-q;
		if(r!=0)
		{
			i++;
		}
		else
		{
			printf("%d\n",i);
			n = n/i;
		}
	}
	printf("%d\n",count);
	return 0;
}

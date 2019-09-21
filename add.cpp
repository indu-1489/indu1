#include<stdio.h>
int main()
{
	
	double a,b;
	int c,d;
	scanf("%lf %lf",&a,&b);
	
	c=a;
	d=b;
	//printf("%ld %ld %d %d",a,b,c,d);
	if(c==a && d==b)
	{
		printf("%d",(c+d));
	}
	else
	{
		printf("%lf",(a+b));
	}
	return 0;
	
}




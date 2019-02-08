#include<stdio.h>
void input(int *x,int *y,int *z)
{
	printf("Enter three numbers:");
	scanf("%d%d%d",x,y,z);
}
int compute(int a,int b,int c)
{
	int d;
	if(a>b&&a>c)
	{
		d=a;
	}
	
	else if(b>a&&b>c)
	{	
		d=b;
	}
        else
	{
		d=c;
	}
	return d;
}
void output(int f)
{
	printf("The greatest number is:%d",f);
}
int main()
{
	int e,f,g;
	int h;
	input(&e,&f,&g);
	h=compute(e,f,g);
	output(h);
	return 0;
}

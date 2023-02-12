#include<stdio.h>
int main()
{
	int a,b;
	int add,sub,multi,div,mod;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	mod=b%a;
	printf("%d\n",add);
	printf("%d\n",sub);
	printf("%d\n",multi);
	printf("%d\n",div);
	printf("%d\n",mod);
	return 0;
}

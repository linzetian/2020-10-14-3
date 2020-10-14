//用函数方式计算n！
#include<stdio.h>
int funct1(int x)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= x; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数:");
	scanf("%d", &n);
	ret = funct1(n);
	printf("%d", n);
	printf("!=%d\n",ret);
}
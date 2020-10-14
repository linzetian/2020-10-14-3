//用函数方式计算n！(递归+迭代)（迭代就是重复做一件事）
#include<stdio.h>
//int funct1(int x)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
int funct2(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		return x * funct2(x - 1);//递归+迭代
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数:");
	scanf("%d", &n);
	ret = funct2(n);
	printf("%d", n);
	printf("!=%d\n", ret);
}
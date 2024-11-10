#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stdio.h>
using std::cout;
using std::endl;
using std::vector;
//给定一个整数数组 Array，请计算该数组在每个指定区间内元素的总和。
//第一行输入为整数数组 Array 的长度 n，接下来 n 行，每行一个整数，表示数组的元素。随后的输入为需要计算总和的区间下标：a，b （b > = a），直至文件结束。

void rangeSum()
{
	int n, a, b;
	printf("请输入整数数组的长度\n");
	scanf("%d", &n);
	vector<int> nums(n, 0);
	vector<int> res(n, 0);
	int presum = 0;
	printf("请输入数组的值\n");
	for (int i = 0; i < nums.size(); ++i)
	{
		scanf("%d", &nums[i]);
		presum += nums[i];
		res[i] = presum;
	}
	printf("请输入计算总和的区间下标\n");
	while (scanf("%d%d", &a, &b) == 2)
	{
		int sum;
		if (a == 0)
		{
			sum = res[b];
		}else {
			sum = res[b] - res[a - 1];
		}
		printf("%d\n", sum);
	}
	
}
int main(void)
{
	rangeSum();
	return 0;
}
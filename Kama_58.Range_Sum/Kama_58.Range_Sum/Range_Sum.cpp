#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stdio.h>
using std::cout;
using std::endl;
using std::vector;
//����һ���������� Array��������������ÿ��ָ��������Ԫ�ص��ܺ͡�
//��һ������Ϊ�������� Array �ĳ��� n�������� n �У�ÿ��һ����������ʾ�����Ԫ�ء���������Ϊ��Ҫ�����ܺ͵������±꣺a��b ��b > = a����ֱ���ļ�������

void rangeSum()
{
	int n, a, b;
	printf("��������������ĳ���\n");
	scanf("%d", &n);
	vector<int> nums(n, 0);
	vector<int> res(n, 0);
	int presum = 0;
	printf("�����������ֵ\n");
	for (int i = 0; i < nums.size(); ++i)
	{
		scanf("%d", &nums[i]);
		presum += nums[i];
		res[i] = presum;
	}
	printf("����������ܺ͵������±�\n");
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
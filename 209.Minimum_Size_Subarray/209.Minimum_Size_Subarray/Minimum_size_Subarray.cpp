#include <iostream>
#include <vector>
#include <vcruntime.h>
using std::cout;
using std::endl;
using std::vector;

//����һ������ n ���������������һ�������� target ��
//�ҳ����������������ܺʹ��ڵ��� target �ĳ�����С��������
//[numsl, numsl + 1, ..., numsr - 1, numsr] ���������䳤�ȡ���������ڷ��������������飬���� 0��

//�������ڷ�
int minSubArrayLen(int target, vector<int>& nums)
{
	int result = INT32_MAX;
	int subLength = 0;
	//���ڵ���߽�ֵ
	int i = 0;
	//�����еĺ�
	int sum = 0;
	for (int j = 0; j < nums.size(); j++)
	{
		sum += nums[j];
		while (sum >= target)
		{
			subLength = (j - i + 1);
			result = result < subLength ? result : subLength;
			sum -= nums[i++];
		}
	}
	return result == INT32_MAX ? 0 : result;
}
int main(void)
{
	vector<int> nums = { 2,3,1,2,4,3 };
	int sublength = minSubArrayLen(7, nums);

	cout << sublength;

	return 0;
}
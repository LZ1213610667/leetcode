#include <iostream>
#include <vector>
#include <vcruntime.h>
using std::cout;
using std::endl;
using std::vector;

//给定一个含有 n 个正整数的数组和一个正整数 target 。
//找出该数组中满足其总和大于等于 target 的长度最小的子数组
//[numsl, numsl + 1, ..., numsr - 1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0。

//滑动窗口法
int minSubArrayLen(int target, vector<int>& nums)
{
	int result = INT32_MAX;
	int subLength = 0;
	//窗口的左边界值
	int i = 0;
	//子序列的和
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
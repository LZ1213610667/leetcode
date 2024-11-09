#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::endl;
//给你一个按 非递减顺序 排序的整数数组 nums，
//返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。

//双指针法，一前一后
vector<int> sortedSquence(vector<int>& nums)
{
	int sub = nums.size() - 1;
	vector<int> result(nums.size(), 0);
	for (int i = 0, j = sub; i <= j;)
	{
		if ((nums[i] * nums[i]) < (nums[j] * nums[j]))
		{
			result[sub--] = nums[j] * nums[j];
			--j;
		}
		else 
		{
			result[sub--] = nums[i] * nums[i];
			++i;
		}
	}
	return result;
}
int main(void)
{
	vector<int> nums = { -4, -1, 0, 3, 10 };
	vector<int> result = sortedSquence(nums);
	int i = 0;

	while (i < result.size())
	{
		cout << result[i]<<endl;
		++i;
	}
	
	return 0;
}
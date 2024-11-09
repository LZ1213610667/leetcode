#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

//给你一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素。
//元素的顺序可能发生改变。然后返回 nums 中与 val 不同的元素的数量。

//双指针法
int removeElement(vector<int> &nums,int val)
{
	int slow = 0;
	int len = nums.size();
	for (int fast = 0; fast < len; ++fast)
	{
		if (nums[fast] != val)
		{
			nums[slow++] = nums[fast];
		}
	}
	return slow;
}
int main(void)
{
	vector<int> nums = { 0, 1, 2, 2, 3, 0, 4, 2 };
	int sub = removeElement(nums, 2);
	cout << sub;

	return 0;
	
}

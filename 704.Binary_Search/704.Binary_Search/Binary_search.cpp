#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

//给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target，
//写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
int Binary_search(vector<int> &nums, int target)
{
	int left = 0;
	int right = nums.size() - 1;
	int mid;
	//[left,right]采用闭区间方式
	while (left <= right)
	{
		mid = (left + right);
		if (nums[mid] > target)
		{
			right = mid -1;
		}
		else if (nums[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}

	return -1;
}
int main(void)
{
	vector<int> nums = {-1, 0, 3, 5, 9, 12};
	int sub;
	sub = Binary_search(nums,9);
	cout << sub << endl;
	return 0;
}
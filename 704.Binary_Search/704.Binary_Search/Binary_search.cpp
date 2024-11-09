#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

//����һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target��
//дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��
int Binary_search(vector<int> &nums, int target)
{
	int left = 0;
	int right = nums.size() - 1;
	int mid;
	//[left,right]���ñ����䷽ʽ
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
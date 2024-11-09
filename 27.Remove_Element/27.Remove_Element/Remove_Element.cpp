#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

//����һ������ nums ��һ��ֵ val������Ҫԭ���Ƴ�������ֵ���� val ��Ԫ�ء�
//Ԫ�ص�˳����ܷ����ı䡣Ȼ�󷵻� nums ���� val ��ͬ��Ԫ�ص�������

//˫ָ�뷨
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

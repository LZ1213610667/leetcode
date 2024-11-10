#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

//����һ�������� n ������һ������ 1 �� n2 ����Ԫ�أ���Ԫ�ذ�˳ʱ��˳���������е� n x n �����ξ��� matrix ��
//�߽�������ҿ�,˳ʱ�����
/*
*001 
*3 1 
*322
*/
vector<vector<int>> generateMaxtri(int n)
{
	vector<vector<int>> res(n, vector<int>(n,0));
	int startx = 0, starty = 0;
	int loop = n / 2;
	int mid = n / 2;
	int count = 1;
	int offset = 1;
	int i, j;
	while (loop--)
	{
		i = startx;
		j = starty;

		for (; j < n - offset; j++)
		{
			res[i][j] = count;
			++count;
		}
		for (; i < n - offset; i++)
		{
			res[i][j] = count;
			++count;
		}
		for (; j > startx; j--)
		{
			res[i][j] = count;
			++count;
		}
		for (; i > starty; i--)
		{
			res[i][j] = count;
			++count;
		}

		++startx;
		++starty;
		++offset;
	}
	if (n % 2 != 0)
	{
		res[mid][mid] = n * n;
	}
	return res;
}
int main(void)
{
	vector<vector<int>> res = generateMaxtri(3);

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << res[i][j];
		}
		cout << endl;
	}
	return 0;
}

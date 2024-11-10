#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

//给你一个正整数 n ，生成一个包含 1 到 n2 所有元素，且元素按顺时针顺序螺旋排列的 n x n 正方形矩阵 matrix 。
//边界是左闭右开,顺时针填充
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

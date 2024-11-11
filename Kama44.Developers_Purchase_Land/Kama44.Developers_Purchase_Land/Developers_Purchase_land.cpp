#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::cin;
//在一个城市区域内，被划分成了n * m个连续的区块，每个区块都拥有不同的权值，代表着其土地价值。目前，有两家开发公司，A 公司和 B 公司，希望购买这个城市区域的土地。 
//现在，需要将这个城市区域的所有区块分配给 A 公司和 B 公司。然而，由于城市规划的限制，只允许将区域按横向或纵向划分成两个子区域，
//而且每个子区域都必须包含一个或多个区块。 为了确保公平竞争，你需要找到一种分配方式，使得 A 公司和 B 公司各自的子区域内的土地总价值之差最小。
//注意：区块不可再分。

void developersPurLand()
{
	int row, line;
	cin >> line >> row;
	int sum = 0;
	vector<vector<int>> vec(line, vector<int>(row, 0));
	for (int i = 0; i < line; ++i)
	{
		for(int j = 0; j < row;++j)
		{ 
			 cin >> vec[i][j];
			 sum += vec[i][j];
		}
	}
	//统计横向
	vector<int> horizontal(line, 0);
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			horizontal[i] += vec[i][j];
		}
	}
	//统计纵向
	vector<int> vertical(row, 0);
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < line; ++j)
		{
			vertical[i] += vec[j][i];
		}
	}
	int result = INT_MAX;
	int horizontalCut = 0;
	for (int i = 0; i < line; ++i)
	{
		horizontalCut += horizontal[i];
		result = result > abs((sum - horizontalCut)-horizontalCut) ? abs((sum - horizontalCut) - horizontalCut) : result;
	}
	int verticalCut = 0;
	for (int j = 0; j < row; ++j)
	{
		verticalCut += vertical[j];
		result = result > abs((sum - verticalCut) - verticalCut) ? abs((sum - verticalCut) - verticalCut) : result;
	}
	cout << result << endl;
}
int main(void)
{
	developersPurLand();
	return 0;
}
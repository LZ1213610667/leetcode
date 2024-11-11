#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::cin;
//��һ�����������ڣ������ֳ���n * m�����������飬ÿ�����鶼ӵ�в�ͬ��Ȩֵ�������������ؼ�ֵ��Ŀǰ�������ҿ�����˾��A ��˾�� B ��˾��ϣ���������������������ء� 
//���ڣ���Ҫ�������������������������� A ��˾�� B ��˾��Ȼ�������ڳ��й滮�����ƣ�ֻ�������򰴺�������򻮷ֳ�����������
//����ÿ�������򶼱������һ���������顣 Ϊ��ȷ����ƽ����������Ҫ�ҵ�һ�ַ��䷽ʽ��ʹ�� A ��˾�� B ��˾���Ե��������ڵ������ܼ�ֵ֮����С��
//ע�⣺���鲻���ٷ֡�

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
	//ͳ�ƺ���
	vector<int> horizontal(line, 0);
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			horizontal[i] += vec[i][j];
		}
	}
	//ͳ������
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
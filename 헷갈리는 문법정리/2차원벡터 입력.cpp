// 2차원벡터의 입출력
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	// int 형 2차원 벡터
	vector<vector<int>> land;

	// string 형 2차원 벡터
	vector<vector<string>> clothes;

	cout << "행과 열을 입력하시오" << endl;

	int row;	// 행
	int col;	// 열

	int temp;
	string stemp;


	cin >> row;
	cin >> col;
	// int 형
	// row행 col열 을 입력함
	for (int i = 0; i < row; i++)
	{
		vector<int> rowVec;
		for (int j = 0; j < col; j++)
		{
			cin >> temp;
			rowVec.push_back(temp);
		}
		land.push_back(rowVec);
	}

	// string 형
	// row행 col열 을 입력함
	for (int i = 0; i < row; ++i)
	{
		vector<string> row;
		for (int j = 0; j < col; ++j)
		{
			cin >> stemp;
			row.push_back(stemp);
		}
		clothes.push_back(row);
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << land[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << clothes[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
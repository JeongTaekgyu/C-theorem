// 2���������� �����
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	// int �� 2���� ����
	vector<vector<int>> land;

	// string �� 2���� ����
	vector<vector<string>> clothes;

	cout << "��� ���� �Է��Ͻÿ�" << endl;

	int row;	// ��
	int col;	// ��

	int temp;
	string stemp;


	cin >> row;
	cin >> col;
	// int ��
	// row�� col�� �� �Է���
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

	// string ��
	// row�� col�� �� �Է���
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
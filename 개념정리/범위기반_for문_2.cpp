// C++ range based for example.
//BlockDMask.
#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}

	cout << "ex1) ������ �ݺ����� ���������." << endl;
	cout << "for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)" << endl;
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}


	cout << endl << endl;
	cout << "ex2) ������� �ݺ����� ���������." << endl;
	cout << "for (int elem : v)" << endl;
	for (int elem : v)
	{
		cout << elem << " ";
	}


	cout << endl << endl;
	cout << "ex3) ���� �ݺ������� ���� ������ ���� Ȯ��" << endl;
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		*iter += 10;
		cout << *iter << " ";
	}
	cout << endl;
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}


	cout << endl << endl;
	cout << "ex4) ������� �ݺ������� ���� ������ ���� Ȯ��" << endl;
	for (int elem : v)
	{
		elem += 100;
		cout << elem << " ";
	}
	cout << endl;
	for (int elem : v)
	{
		cout << elem << " ";
	}

	// 1, 2�� ���� : ó������ ������ ��ȸ�ϴ� ���̶�� ������� for���� �ξ� ������ ª��. 
	// 3, 4�� ���� : ������� for���� ���� elem ���� �ٲ۴� �ϴ���, ���� �����Ͱ� ��������� �ʴ´�.

	cout << endl << endl;
	system("pause");
	return 0;
}

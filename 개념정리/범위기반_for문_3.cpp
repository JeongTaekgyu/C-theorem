/* 
	1, 2 ���� �⺻���� ������� for���� �����. 

	������,
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int elem : arr)
	{
		cout << elem << endl;
	}

	�̷������� ���� �⺻���� ���� �ϰ� �Ǹ�, arr �迭�� �ִ� ���ڸ� elem �̶�� ���ο� ������ ���縦 �ϰ� �ȴ�.
	�� �ݺ����� �������� �Ʒ�ó�� ���簡 �ȴ�.

	elem = arr[0];
	elem = arr[1];
	elem = arr[2];


	���縦 �ϰԵǸ� ������ ����.

	1) ���縦 �߱� ������ �迭�� ���� ���� �������� ���Ѵ�.
	2) ���縦 �߱� ������ �������� �߻��Ѵ�.


	�̷��� ������ �����ϱ� ���ؼ��� C++�� & (������, reference)�� �̿��ϸ� �ȴ�.


1. C++ range based for���� reference�� ����ϴ� ���.

	for(int& elem : arr)
	{
		elem += 1;    //arr[ ] ���� �����.
		cout << elem << endl;
	}

	for(������ Ÿ��& �����̸� : �����͸���Ʈ) �� ���� ������ Ÿ�� �ڿ� ���۷���(&)�� ���̴� ������� �Ѵٸ�,
	�迭�� �ش� ������ �����簡 �ƴ� ������ reference(=������, ���۷���)�� ������ ���� �ȴ�.

	�̷��� �� ���� ������ �Ʒ��� ����.

	1) �������� ���� �ʾƼ� ����� ���� �Ѵ�.
	2) �迭�� ���� ���Ҹ� ������ �� �ִ�.

	�̷��� �Ǹ� �� �ذ��� �Ǿ ������, 
	�� �������� �ȵ�� ���� ������ �ݺ��� ���ο��� ������ �Ͼ�� �ʾƾ� �ϴ� ��쵵 �����Ѵ�..
	�̷� ��쿡�� const�� reference�� ���� ����ϸ�˴ϴ�.


2. C++ range based for���� const�� reference�� ����ϴ� ���.

	for(const int& elem : arr)
	{
		elem += 1;    // �Ұ���.
		cout << elem << endl;
	}

	for(const ������ Ÿ��& �����̸� : �����͸���Ʈ) �̷�������� ������ Ÿ�� �տ� const�� ���̸� �� ������ �Ұ����ϰ� �ȴ�.
	�׷��� �������� ���� �ʰ� �迭�� ���� �̿��� �� �ְ�, �迭�� ���� �������� �ʴ°� ������ �� �ְ� �ȴ�.

	const & �� �������, &�� ������� �ƴϸ� �׳� ����� ��������� �� ��Ȳ�� �°� �� �Ǵ��ؼ� �ϸ� �ȴ�.
*/

//C++ range based for, const reference example.
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

	cout << "ex) ������� �ݺ��� const reference�� �̿��� ������ ���� �Ұ���" << endl;
	for (const int& elem : v)
	{
		//elem += 100; �Ұ���.
		cout << elem << " ";
	}

	cout << endl;
	for (int& elem : v)
	{
		elem += 100; //����.
		cout << elem << " ";
	}

	cout << endl;
	for (const int& elem : v)
	{
		cout << elem << " ";
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

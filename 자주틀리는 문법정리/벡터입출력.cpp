#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> arr;
	vector<int> brr(5);

	vector<string> str1;
	vector<string> str2;

	int n = 5;
	int temp;

	// ---------------------------- <int> ---------------------------------
	/*
	for (int i = 0; i < n; i++)
	{
		// �̷��� arr�� ũ�⸦ �̸� ������ ������ �ٷ� �Է� �Ұ���
		cin >> arr[i];
		
		�׷��Ƿ� �Ʒ�ó�� �Űܾ� �Ѵ�.
		//cin >> temp;
		//arr.push_back(temp);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	*/

	// �ڡڡ� ���� ������ ũ�Ⱑ �̸� �������� �ٷ� �Է� �����ϱ���..�ڡڡ�
	// ������ ũ�⸦ �̸� ������ ������ �ٸ� ������ �ѹ� �ְ� �Űܾ��Ѵ�.
	for (int i = 0; i < n; i++)
	{
		cin >> brr[i];
	}
	for (int i = 0; i < n; i++)
		cout << brr[i] << " ";

	return 0;
}
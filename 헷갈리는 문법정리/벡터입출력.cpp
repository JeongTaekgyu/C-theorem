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
	vector<string> str2(5);

	int n = 5;
	int temp;
	string temps;

	// ---------------------------- vector<int> ---------------------------------
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

	cout << endl << "arr.size() : " << arr.size() << endl;
	cout << "brr.size() : " << brr.size() << endl;
	// �� ���࿡ cin >> brr[i]; ���ϰ� brr.push_back(i)������ ���� vector<int> brr(5); �� push_back() �� ��ŭ size�� �߰� �Ǿ���.



	// ---------------------------- vector<string> ---------------------------------

	for (int i = 0; i < n; i++)
	{
		cin >> temps;
		str1.push_back(temps);
		// vector<string> str1; �� ũ�⸦ �ʱ�ȭ���� �ʾұ� ������ �̷��� �Է��ؾ� �ȴ�.
	}
	for (int i = 0; i < n; i++)
		cout << str1[i] << " ";

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> str2[i];	// vector<string> str2(5); �� ũ�⸦ �ʱ�ȭ �߱� ������ �ٷ� �Է��� �����ϴ�.
	}
	for (int i = 0; i < n; i++)
		cout << str2[i] << " ";

	return 0;
}
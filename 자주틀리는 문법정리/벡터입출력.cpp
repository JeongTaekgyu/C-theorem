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
		// 이렇게 arr의 크기를 미리 안정해 놓으면 바로 입력 불가능
		cin >> arr[i];
		
		그러므로 아래처럼 옮겨야 한다.
		//cin >> temp;
		//arr.push_back(temp);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	*/

	// ★★★ 아하 벡터의 크기가 미리 정해져야 바로 입력 가능하구나..★★★
	// 벡터의 크기를 미리 정하지 않으면 다른 곳에다 한번 넣고 옮겨야한다.
	for (int i = 0; i < n; i++)
	{
		cin >> brr[i];
	}
	for (int i = 0; i < n; i++)
		cout << brr[i] << " ";

	return 0;
}
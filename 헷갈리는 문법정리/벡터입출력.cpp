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

	cout << endl << "arr.size() : " << arr.size() << endl;
	cout << "brr.size() : " << brr.size() << endl;
	// ★ 만약에 cin >> brr[i]; 안하고 brr.push_back(i)했으면 기존 vector<int> brr(5); 에 push_back() 한 만큼 size가 추가 되었다.



	// ---------------------------- vector<string> ---------------------------------

	for (int i = 0; i < n; i++)
	{
		cin >> temps;
		str1.push_back(temps);
		// vector<string> str1; 로 크기를 초기화하지 않았기 때문에 이렇게 입력해야 된다.
	}
	for (int i = 0; i < n; i++)
		cout << str1[i] << " ";

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> str2[i];	// vector<string> str2(5); 로 크기를 초기화 했기 때문에 바로 입력이 가능하다.
	}
	for (int i = 0; i < n; i++)
		cout << str2[i] << " ";

	return 0;
}
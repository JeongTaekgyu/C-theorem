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

	cout << "ex1) 기존의 반복문을 사용했을때." << endl;
	cout << "for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)" << endl;
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}


	cout << endl << endl;
	cout << "ex2) 범위기반 반복문을 사용했을때." << endl;
	cout << "for (int elem : v)" << endl;
	for (int elem : v)
	{
		cout << elem << " ";
	}


	cout << endl << endl;
	cout << "ex3) 기존 반복문에서 원래 데이터 변경 확인" << endl;
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
	cout << "ex4) 범위기반 반복문에서 원래 데이터 변경 확인" << endl;
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

	// 1, 2번 예제 : 처음부터 끝까지 순회하는 것이라면 범위기반 for문이 훨씬 문장이 짧다. 
	// 3, 4번 예제 : 범위기반 for문의 변수 elem 값을 바꾼다 하더라도, 원래 데이터가 변경되지는 않는다.

	cout << endl << endl;
	system("pause");
	return 0;
}

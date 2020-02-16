/* 
	1, 2 에서 기본적인 범위기반 for문을 배웠다. 

	하지만,
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int elem : arr)
	{
		cout << elem << endl;
	}

	이런식으로 위쪽 기본편에서 배운데로 하게 되면, arr 배열에 있는 인자를 elem 이라는 새로운 변수에 복사를 하게 된다.
	매 반복문이 돌때마다 아래처럼 복사가 된다.

	elem = arr[0];
	elem = arr[1];
	elem = arr[2];


	복사를 하게되면 단점이 많다.

	1) 복사를 했기 때문에 배열의 원래 값를 변경하지 못한다.
	2) 복사를 했기 때문에 복사비용이 발생한다.


	이러한 단점을 보완하기 위해서는 C++의 & (참조자, reference)를 이용하면 된다.


1. C++ range based for문을 reference로 사용하는 방법.

	for(int& elem : arr)
	{
		elem += 1;    //arr[ ] 값도 변경됨.
		cout << elem << endl;
	}

	for(데이터 타입& 변수이름 : 데이터리스트) 와 같이 데이터 타입 뒤에 레퍼런스(&)를 붙이는 방식으로 한다면,
	배열의 해당 인자의 값복사가 아닌 변수의 reference(=참조자, 레퍼런스)를 가지고 오게 된다.

	이렇게 할 때의 이점은 아래와 같다.

	1) 복사비용이 들지 않아서 비용이 감소 한다.
	2) 배열의 원래 원소를 변경할 수 있다.

	이렇게 되면 다 해결이 되어서 좋지만, 
	★ 복사비용이 안드는 것은 좋은데 반복문 내부에서 변경이 일어나지 않아야 하는 경우도 존재한다..
	이런 경우에는 const와 reference를 같이 사용하면됩니다.


2. C++ range based for문을 const와 reference로 사용하는 방법.

	for(const int& elem : arr)
	{
		elem += 1;    // 불가능.
		cout << elem << endl;
	}

	for(const 데이터 타입& 변수이름 : 데이터리스트) 이런방식으로 데이터 타입 앞에 const를 붙이면 값 변경이 불가능하게 된다.
	그러면 복사비용이 들지 않고 배열의 값을 이용할 수 있고, 배열의 값을 변경하지 않는걸 보장할 수 있게 된다.

	const & 를 사용할지, &를 사용할지 아니면 그냥 복사로 사용할지는 각 상황에 맞게 잘 판단해서 하면 된다.
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

	cout << "ex) 범위기반 반복문 const reference를 이용한 데이터 변경 불가능" << endl;
	for (const int& elem : v)
	{
		//elem += 100; 불가능.
		cout << elem << " ";
	}

	cout << endl;
	for (int& elem : v)
	{
		elem += 100; //가능.
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

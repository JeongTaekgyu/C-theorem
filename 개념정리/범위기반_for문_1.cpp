/*
C++ 범위 기반 for문

1. 범위기반 for문이란?
	- 기존의 for 반복문과는 달리 시작과 끝점을 알려주지 않아도 알아서 처음부터 끝까지 순회를 해주는 반복문이다.
	- C++11 에서부터 사용 할 수 있다.
	- C# 에서의 foreach와 같다고 생각하면 된다.


2. C++ 범위기반 for문 사용법

	for (데이터 타입 elem : 데이터 리스트)
	{
		당신이 하고싶은 그 모든것들. elem을 이용하면 된다.
	}

	따로 키워드가 있는 것은 아니다. for( --- ) 이 괄호 안에를 자세히 살펴보아야 한다.
	
	데이터 타입 :		데이터 리스트에서 부터 하나씩 받아올 데이터의 타입을 말한다. 그 데이터는 변수 elem에 들어가게 된다.
	변수 이름 elem :	데이터를 가지고 있는 변수 이름이다.
	데이터 리스트 :		배열, vector와 같은 순회가 가능한 데이터 리스트 이다. 데이터 리스트 앞에 꼭 " : " (콜론)을 붙여줘야 한다.


3. for문과 범위기반 for문의 차이점.

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(int i = 0; i < 10; i++)
	{    
		cout << arr[i] << endl;
	}
	기존의 for문은 이런식으로 했었다.


	for(int elem : arr)
	{
		cout << elem << endl;
	}
	범위기반 for문은 이런식으로 순회하면 된다.


	이렇게 좋아보이는 base ranged for문이 완전히 for 반복문을 대체하지는 못한다.

	그 이유는
	1) 범위기반 for문에서는 index 정보가 존재하지 않는다.

		index 를 나타내는 아무런 정보가 없기 때문이다.
		기존의 for문에서는 위 예제에서 처럼 index를 나태는 " i " 가 존재하는데 범위기반 for문에는 존재하지 않는다.
		오직 elem이라는 값만 존재한다. index로 구분할 수 있는 여러가지 조절이 힘들다는 단점이 존재한다. (할 수 있긴 하다. 코드가 더러워질뿐)


	2) 범위기반 for 배열의 요소를 일반적으로는 변경할 수 없다. (변경 가능한것은 범위기반_for문_3 참조)
		매 반복문이 돌때마다 int elem : arr 을 통해서 하는 일은 아래와 같다.

		elem = arr[0];
		elem = arr[1];

		이런식으로 배열의 요소들이 elem 이라는 변수에 복사된다.
		그래서 배열의 요소를 내부에서 바꾸려고 elem = 1; 시도를 해도. 복사된 값 이기 때문에 arr[0] 의 값이 바뀌거나 하지않는다.
		그래서 range based for문 내부에서는 배열의 요소를 변경할수 없다.
*/


//C++ range based for example.
#include<iostream>
#include<vector>

using namespace std;
int main(void)
{
	cout << "ex1) 일반적인 배열에서 범위기반 for문 사용법" << endl;
	cout << "for (int elem : arr)" << endl;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int elem : arr)
	{
		cout << elem << " ";
	}
	cout << endl << endl;


	cout << "ex2) vector같은 std container에서 범위기반 for문 사용법" << endl;
	cout << "for (int elem : v)" << endl;

	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i+1);
	}

	for (int elem : v)
	{
		cout << elem << " ";
	}
	cout << "\niterator를 사용하지 않아도 된다는 것이 좋다." << endl;


	/*
	ex2) 에서 기존의 for문을 이용했더라면
	for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
		이런 방식으로 iterator를 사용해서 for문을 사용했어야 했다.
		하지만 범위기반 for문에서는 이런 번거로운 작업이 없다.
	*/

	cout << endl << endl;
	system("pause");
	return 0;
}

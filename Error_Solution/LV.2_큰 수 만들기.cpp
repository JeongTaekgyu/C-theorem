/*
	문자열의 아스키 값 비교 문제 해결
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string solution(string number, int k) {
	string answer = "";

	return answer;
}
int main() {
	vector<string> str;
	vector<char> btr;
	vector<int> ind;	// 0과1을 저장 할 벡터 생성

	string number;
	string temp;
	string max = "0";
	int k;

	cin >> number;
	cin >> k;


	for (int i = 0; i < number.size(); i++)
		btr.push_back(number[i]);



	for (int i = 0; i < k; i++)
	{
		ind.push_back(1);
	}

	for (int i = 0; i < number.size() - k; i++) 
	{
		ind.push_back(0);
	}

	// 오름차순 정렬 -> 조합을 뽑기 위해서
	// 앞에 0의 개수가 number.size() - k 개가 되게 하고 뒤에 1의 개수가 k개가 되게한다.
	sort(ind.begin(), ind.end());

	do {
		// 출력
		for (int i = 0; i < ind.size(); i++) {
			if (ind[i] == 1) {
				cout << number[i] << " ";
				temp += number[i];
			}
		}

		cout << temp << endl;
		cout << "max : " << max << " temp : " << temp << endl;
		printf("\n");

		if (max < temp)
		{
			max = temp;
			cout << "max < temp 문 들어옴 : " << max << endl << endl;
		}
		/*
		temp = " ";
		이렇게 하면 스페이스바의 아스키코드값(32) 가 들어간다.. 그러므로 숫자보다 작을 수 밖에 없었다.
		이를 해결하려면 temp = ""; 또는 temp.clear();를 통해 해결한다
		*/
		temp = "";

	} while (next_permutation(ind.begin(), ind.end()));
	
	return 0;

}
/*
	���ڿ��� �ƽ�Ű �� �� ���� �ذ�
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
	vector<int> ind;	// 0��1�� ���� �� ���� ����

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

	// �������� ���� -> ������ �̱� ���ؼ�
	// �տ� 0�� ������ number.size() - k ���� �ǰ� �ϰ� �ڿ� 1�� ������ k���� �ǰ��Ѵ�.
	sort(ind.begin(), ind.end());

	do {
		// ���
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
			cout << "max < temp �� ���� : " << max << endl << endl;
		}
		/*
		temp = " ";
		�̷��� �ϸ� �����̽����� �ƽ�Ű�ڵ尪(32) �� ����.. �׷��Ƿ� ���ں��� ���� �� �ۿ� ������.
		�̸� �ذ��Ϸ��� temp = ""; �Ǵ� temp.clear();�� ���� �ذ��Ѵ�
		*/
		temp = "";

	} while (next_permutation(ind.begin(), ind.end()));
	
	return 0;

}
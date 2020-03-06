# String

다음 코드는 string script out of range 에러가 발생한다.

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string answer;	//이렇게 초기화 없이 생성하면

	cout << answer.size() << endl;	// '0'출력
    answer[0] ='4';
    answer[1] ='5';
	//answer.push_back('7');
	//answer.push_back('8');
	cout << answer.size() << endl;	// '0'출력
    
	cout << answer[0] << endl;
	cout << answer[1] << endl;
    
    /* 
    이 코드는 string script out of range 에러가 발생한다.
    그 이유는 string answer를 초기화 하지 않았기 때문이다.
    이를 해결하려면
    1. answer.resize(2);
    2. push_back을 사용한다.
    
    참고로 answer[0]은 운좋게 들어간 것 뿐이다.(정상적인 코드아 아니더라도 그럴듯 하게 돌아가는 경우)
    
    또한 answer.resize(1); 
    또는 string answer = " "; 이렇게 한 칸씩만 생성하면
    answer[1] = '5';는 
    answer.push_back('7')에 덮어 쓰인다
    string answer ="  ";
    answer.resize(2);
    이렇게 생성해야 안 덮어 쓰인다.
	*/
	return 0;
}
```


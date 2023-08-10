//#include <iostream>
//using namespace std;
//
//// 오늘의 주제 : 유의 사항
//
//// 1) 변수의 유효범위
//
//// 전역 변수
//// int hp = 10;
//
//// 스택
//// { } 중괄호의 범위가 생존 범위
//// 같은 이름 두번 사용할 때 문제
//// 여러번 초기화 하였습니다...같은 문제 발생
//
//int hp = 10;
//int G_hp = 30; // convention
//
//
//// 2) 연산 우선순위
//
//
//int main()
//{
//
//
//	{
//		int hp = 10;
//		cout << hp << endl;
//
//	}
//
//	// int hp = 20; // 4byte
//
//	cout << hp << endl;
//	// 이땐 20이 나옴
//
//	// 짝수 여부를 판단
//	bool isEven = (hp % 2 == 0);
//
//	// 바구니 교체
//	
//	short hp2 = (short)hp; // 안써도 생략이 되어있는것 4->2바이트 .. 위쪽 비트 데이터 짤림
//	float hp3 = (float)hp; // 4바이트 4바이트?지만.. 플롯이라서.. 실수변환 정밀도차이 데이터 손실
//	unsigned int hp4 = (unsigned int)hp; // 4바이트 4바이트지만..  분석하는 방법이 달라짐
//	
//
//	// 곱셈
//	// - 오버플로우
//	// int* int = int
//	// 99999999*9999999 =.... 오버플로우
//
//	// 방법은 (__int64)..
//	
//	// 나눗셈
//	// - 나누는거 조심
//	int hp = 123;
//	int maxHp = 0;
//
//	float ratio = hp / maxHp;
//
//	int maxHp = 1000;
//
//	// int / int = int<<< 0 밖에 안남는거
//	// 그래서 둘중하나를 실수를 만들어줘야지
//	float ratio = hp / (float)maxHp; // 0.123??
//
//
//	
//
//
//}
//

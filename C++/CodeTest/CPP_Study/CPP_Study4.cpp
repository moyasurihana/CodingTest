//#include <iostream>
//using namespace std;
//
//// 오늘의 주제 : 데이터 연산
//// 데이터를 가공하는 방법에 대해서 알아보자.
//
//
//
//
//int a = 1;
//int b = 2;
//
//bool isSame;
//bool isDifferent;
//bool isGreater;
//bool isSamller;
//
//bool test;
//
//int hp = 100;
//bool isInvincible = true;
//
//int main()
//{
//#pragma region 산술 연산
//
//	
//
//	// 산술 연산자
//	
//	// 대입 연산자 a = b
//
//	a = b;
//	a = (b = 3);
//	a = b = 3;
//	
//	// 사칙 연산
//	// ex) 데미지 계산
//	// ex) 체력을 깎는다던가
//	// ex) 루프문에서 카운터를 1 증가 시킨다던가
//
//	a = b + 3; // 덧셈 add
//	a = b - 3; // 뺄쎔 sub
//	a = b * 3; // 곱셈 mul
//	a = b / 3; // 나눗셈 div
//	a = b % 3; // 나머지 div
//
//	a = a + 3;
//	a += 3; // a = a + 3;
//
//	// 증감 연산자
//	a = a + 1;
//	a++;
//	++a;
//	a--;
//	--a;
//
//	b = a + 1 * 3; // 연산 곱셈 우선
//
//	
//#pragma endregion
//
//#pragma region 비교 연산
//
//	// 언제 필요한가?
//	// ex) 체력이 0 이 되면 사망
//	// ex) 체력이 30% 이하이면 궁극기를 발동 (100 * hp / maxHp)
//	// ex) 경험치가 100 이상이면 레벨업
//	
//	// a == b : a와 b의 값이 같은가?
//	// 같으면 1, 다르면 0
//
//	isSame = (a == b);
//	
//	// a != b : a dhk ㅠdml rkqtdl ekfmsrk?
//	// 다르면 1, 같으면 0
//	isDifferent = (a != b);
//	
//	// a > b : a가 b보다 큰가?
//	// a >= b : a가 b보다 크거나 같은가?
//	// 1 아니면 0
//	isGreater = (a > b);
//	
//#pragma endregion
//
//#pragma region 논리연산
//	// 언제 필요한가? 조건에 대한 논리적 사고가 필요할 때
//	// ex) 로그인 할 때 아이디도 같고 AND 비밀번호도 같아야 한다.
//	// ex) 길드 마스터이거나 OR 운영자 계정이면 길드 해산 가능
//
//	// ! not
//	// 0이면 1, 그 외 0
//
//	test = !isSame; // 사실상 isDifferent의 의미
//	// && and
//	// a && b -> 둘다 1이면 1, 그외 0
//
//	
//	test = (hp <= 0 && isInvincible == false); // 죽었니?
//
//	// || or
//	// 둘다 하나라도 1 이면 1 아니면 0
//	test = (hp > 0 || isInvincible == true);
//	test = !(hp <= 0 && isInvincible == false); // 살아있니?
//
//		
//
//
//#pragma endregion
//
//	cout << test << endl;
//
//
//
//
// }

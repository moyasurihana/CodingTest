//#include <iostream>
//
//using namespace std;
//
//
//// 1) struct vs class
//
//// c++에서는 struct나 class나 종이 한장 차이다.
//// struct는 기본 접근 지정자가 public이고, class는 private이다.
//// 왜 이렇게 했을까? C++는 c언어에서 파생되어 발전했기 때문에, 호환성을 지키기위하여
//// -> struct는 그냥 구조체(데이터 묶음) 을 표현하는 용도
//// -> class는 객체 지향 프로그래밍의 특징 나타내는 용도
//
//
//
//struct TestStruct
//{
//public: //pulbic default
//
//	int _a;
//	int _b;
//
//};
//
//class TestClass
//{
//
//
//public: // private default
//	int _a;
//	int _b;
//};
//
//// 2) static 변수, static 함수 (static = 정적 = 고정된)
//
//class Marine
//{
//public:
//
//
//	int _hp; // 각각의 객체가 다른 hp를 가지고있고 - > 특정 마린 객체에 종속적
//	// int _attack; // 어택은 모든 객체가 같아.
//
//
//	void TakeDamage(int damage) // 역시 hp를 가지고 하는거기에 종속적
//	{
//		_hp -= damage;
//
//	}
//
//	static void SetAttack() //#2 여기서 모든 마린이 동등하게 데미지를입는듯한게 잇을수가없잖아
//	{
//		// _hp -=30;
//		// TakeDamage(3)이런것도 불가
//		s_attack = 100;
//
//	}
//
//
//	static int s_attack; // 어택은 모든 객체가 같아.
//	// static은 바깥으로 빠져있는 느낌이야 #1 설계도상으로만 존재 마린이라는 클래스 자체와 연관
//};
//
//// int _attack; #1
//// static 변수는 어떤 메모리?
//// 초기화 하면 .data
//// 초기화 안하면 .bss
//
//
//int Marine::s_attack = 0; // 전역이라기보다도 외부선언으로 용어를 사용해
//
//
//
//// void SetAttack() 전역처럼 됨 #2
////{
////
////
////}
//
//class Player
//{
//public:
//	int _id;
//
//};
//
//int GenerateId()
//{
//	// 생명주기: 프로그램 시작 /종료(메모리에 항상 올라가 있음)
//	// 가시범위: 함수내부
//	// main 함수 내부에서 s_id 를 바꿀수없어, 그냥 이함수자체에서만가능
//	// 
//	// 
//	// 정적 + 지역 객체 // 데이터 영역에 생성됨
//	static int s_id = 1;
//	return s_id++;
//}
//
//// 정적 + 전역 객체 /
//static int s_global = 1;
//
//
//
//int main()
//{
//	TestStruct ts;
//	ts._a = 1;
//
//	TestClass tc;
//	tc._a = 1;
//
//
//	////////////////////////////////
//
//
//	Marine m1;
//	m1._hp = 40;
//
//	Marine::s_attack = 6;
//	// m1.s_attack = 6;	
//	Marine::SetAttack();
//
//
//	m1.TakeDamage(3);
//	
//	Marine m2;
//	m2._hp = 30;
//	//m2.s_attack = 6;
//	m2.TakeDamage(4);
//
//	// 마린 공격력 업그레이드 완료!
//
//	Marine::s_attack = 7;
//
//
//
//	static int id = 10;// 스택일까? 아니다.. 안에있어도 데이터영역에 올라가진다.
//	int a = id;  
//
//
//	cout << GenerateId() << endl;
//	cout << GenerateId() << endl;
//	cout << GenerateId() << endl;
//	cout << GenerateId() << endl;
//
//	return 0;
//
//}
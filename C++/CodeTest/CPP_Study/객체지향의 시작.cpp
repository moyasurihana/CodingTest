//#include<iostream>
//
//using namespace std;
//
//// 객체지향 프로그래밍
//// 절차(precedural) 지향 프로그래밍
//// - procedure  = 함수
//// 지금까지는 함수가 메인
//
//// 데이터 + 가공(로직, 동작)
//
//// 객체지향 = 객체
//// 객체란? 플레이어, 몬스터, GameRoom
//
//// Knight를 설계해보자
//// - 속성(데이터) : hp, attack, position(y,x)
//// - 기능(동작) : Move, Attack, Die
//
//
//
//
//
//struct A 
//{
//	int hp;
//	int attack;
//	int posY;
//	int posX;
//};
//
//class Knight
//{
//public:
//	// 멤버 함수 선언
//	void Move(int y, int x);	
//	void Attack();
//	void Die()
//	{
//		_hp=0;
//		// this->_hp = 0; // this->가 생략된거야
//		cout<< "Die" << endl;
//
//	}
//
//
//
//public:
//	// 멤버 변수
//	int _hp;
//	int _attack;
//	int _posY;
//	int _posX;
//
//};
//
//// Knight에 속해있는 멤버함수다.
//void Knight::Move(int y, int x)
//{
//	_posX = x;
//	_posY = y;
//	cout << "Move" << endl;
//
//
//}
//
//void Knight::Attack()
//{
//	cout << "Attack : " << _attack << endl;
//
//}
//
//
//// Knight k1;
//// 전역처럼 쓸 수있고
//
//
//int main()
//{
//	Knight k1;
//
//	k1._hp = 100;
//	k1._attack = 10;
//	k1._posY = 0;
//	k1._posX = 0;
//	
//
//	Knight k2;
//	
//	k2._hp = 80;
//	k2._attack = 5;
//	k2._posY = 1;
//	k2._posX = 1;
//	
//	k1.Move(2, 2);
//	k1.Attack();
//	k1.Die();
//
//	
//
//
//
//
//	return 0;
//}
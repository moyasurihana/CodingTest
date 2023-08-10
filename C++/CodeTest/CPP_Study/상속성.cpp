//#include <iostream>
//
//using namespace std;
//
//// 상속성
//// class는 일종의 설계도
//
//
//// 객체지향 (oop object oriented programming)
//// - 상속성
//// - 은닉성
//// - 다형성
//
//
//struct StatInfo
//{
//
//	int hp;
//	int attack;
//	int defence;
//};
//
//
//// 메모리
//
//// [ Knight ]  ->2. ~knight ->3
//// [ [Player]] ->1. ~player ->4
//
//
//
//
//// 상속(inheritance) 부모 - > 자식에게 유산을 물려주는 것
//
//// 생성자(N), 소멸자(1) - > 물려줄수없어, 각각의 객체의 생성자와 소멸자가 생김
//// knight를 생성해보면, 부모생성자 나잇 생성자 나잇 소멸자 부모 소멸자 이 순서는 외워야 함
//
//
//
//
//// 부모도 부모를 가질수잇음
//
//// GameObject는 최상위 오브젝트
//// - Creature 살아움직이는
//// -- player, monster, npc, pet
//// - Projectile 투사체
//// -- Arrow, Fireball...
//// - Env 환경(맵상에서 존재만하는)
//
//
//// Item
//// - Weapon
//// -- sowrd, bow
//// - Armor
//// -- helemt, boots, armor
//// - Consumable
//// -- portion, scroll..
//
//
//
//
//class GameObject
//
//{
//public:
//	int _objectId;
//};
//
//
//
//
//
//class Player : public GameObject
//{
//public:
//
//
//	Player()
//	{
//		_hp = 0;
//		_attack = 0;
//		_defence = 0;
//		cout << "Player() 기본 생성자 호출" << endl;
//		
//	}
//	Player(int hp)
//	{
//		_hp = hp;
//		_attack = 0;
//		_defence = 0;
//		cout << "Player() 기본 생성자 호출" << endl;
//
//
//	}
//
//	~Player()
//	{
//		cout << "~Player() 소멸자 호출 " << endl;
//	}
//
//
//	void Move() { cout << " Player Move 호출 " << endl; }
//	void Attack() { cout << " Player Attack 호출 " << endl; }
//	void Die() { cout << " Player Die 호출 " << endl; }
//
//
//public:
//	int _hp;
//	int _attack;
//	int _defence;
//};
//
//
//class Knight : public Player
//{
//public:
//
//	Knight()
//	{
//		/*
//		선(먼저)처리 영역 
//		- 여기서 Player() 생성자를 호출
//		*/
//
//
//
//		_stamina = 0;
//		cout << "Knight() 기본 생성자 호출" << endl;
//
//	}
//
//	// 그냥 생성하면
//	Knight(int stamina) : Player(10)
//	{
//
//		// int stamin를 넣었으니생성하면 기본생성자 외에 생성자로 생성되지 않았을까? 라고 생각하지만 그렇지 않다.
//		// 그럼 부모의 원하는 생성자를 받는 방법은? : 하고 넣어주면됌
//		// hp는 10이고 스태미나는 stamina인 기사가 탄생
//
//		_stamina = stamina;
//	}
//
//	~Knight()
//	{
//
//
//		cout << "~Knight() 소멸자 호출 " << endl;
//	}
//
//
//	/*
//	후(나중)처리 영역
//	- 여기서 Player() 소멸자를 호출 (컴파일러가 알아서)
//	*/
//
//
//
//
//	// 재정의 : 부모님의 유산을 거부하고 내 재산으로 새로이 하겠다.
//	void Move() { cout << " Knight Move 호출 " << endl; }
//
//public:
//
//	int _stamina;
//
//};
//
//
//class Mage : public Player
//{
//public:
//
//
//	Mage()
//	{
//		cout << "Mage() 기본 생성자 호출" << endl;
//		_mana = 10;
//	}
//	~Mage()
//	{
//		cout << "~Mage() 소멸자 호출 " << endl;
//	}
//public:
//	int _mana;
//
//
//
//};
//
//
//int main()
//{
//	Knight k;
//	k.Attack();
//	// k.Player::Move(); 쓸 이유가없음
//
//
//
//
//	return 0;
//
//
//
//}
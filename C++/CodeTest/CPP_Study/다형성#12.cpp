//#include <iostream>
//using namespace std;
//
//
//// 다형성 ( plymorphism = poly + morph) = 겉은 똑같은데, 기능이 다르게 동작한다.
//
//// - 오버로딩 = 함수 중복 정의 = 함수 이름의 재사용
//// - 오버라이딩 = 재사용 = 부모 클래스의 함수를 자식 클래스에서 재정의
//
//
//
//
//// 바인딩(binding) = 묶는다.
//// - 정적 바인딩(Static Binding) : 컴파일 시점에 결정
//// - 동적 바인딩(Dynamic Binding) : 실행 시점에 결정
//
//// 일반 함수는 정적바인딩을 사용
//// 동적 바인딩을 원한다면? - > 가상 함수( virtual function)
//
//// 그런데 실제 객체가 어떤 타입인지 어떻게 알아서 가상함수를 호출해준걸까?
//// - 가상 함수 테이블 (vftable)
//
//// .vftable[] 4바이트(32) 8바이트(64)
//// [VMove] [VDie]
//
//
//// 순수 가상함수 : 구현은 없고 ' 인터페이스'로만 전달하는 용도로 사용하고 싶을 경우
//// 
//
//class Player
//{
//public:
//	void Move() { cout << "move player" << endl; }
//
//	// void Move(int a) { cout << "move player" << a << endl; }
//	// 가상함수는 재정의를 하더라도 가상함수다
//	virtual void VMove() { cout << "move player" <<endl; }
//	virtual void VDie() { cout << "Die player" << endl; }
//
//	// 순수가상함수 정의
//	virtual void VAttack() = 0; 
//	// 자식들이 반드시 재정의를 해야돼
//	// 추상 클래스 : 순수 가상 함수가 1개 이상 포함되면 바로 추상클래스로 간주
//	// - 직접적으로 객체를 만들 수 없게 됨!
//	// 여기서는 Player자체의 객체를 생성할수없음
//
//
//public:
//	// [] 가상함수 테이블이 낑겨들어감 , 
//	int _hp;
//};
//
//class Knight : public Player
//{
//public:
//
//	Knight()
//	{
//		_stamina = 100;
//	}
//
//	virtual void VMove() { cout << "move Knight " << endl; } // 부모에서 버츄얼로해줫기때문에  // virtual 접두어 없어도 자동으로  virtual이 됌
//	virtual void VDie() { cout << "move Die " << endl; }  
//
//	
//	virtual void VAttack() { cout << "Attack " << endl; } //
//	
//
//
//public:
//	int _stamina;
//
//
//};
//
//
//class Mage : public Player
//{
//public:
//
//
//public:
//	int _mp;
//
//};
//
//void MovePlayer(Player* player)
//{
//	player->VMove();
//	player->VDie();
//}
//void MoveKnight(Knight* knight)
//{
//	knight->VMove();
//	knight->VDie();
//}
//
//
//
//int main()
//{
//
//	// Player p; 추상 클래스는 이제 존재못함
//	// MovePlayer(&p);
//	// MoveKnight(&p); 부모 -> 자식?  자식-> 부모 가능
//	
//	
//	Knight k;
//	// MoveKnight(&k);
//	MovePlayer(&k); // -> player의 move가 호출이 됨.
//	// 오버라이딩을 했는데..  - > 정적바인딩
//
//
//
//	return 0;
//
//}
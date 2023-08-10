//#include <iostream>
//
//using namespace std;
//
//
//// 오늘의 주제 : 초기화 리스트
//
//// 멤버 변수 초기화 ? 다양한 문법이 존재
//// 초기화 왜 해야하지?
//// -. 버그 예방에 중요
//// -. 특히 포인터 등 주소값이 연루되어 있을 경우
//
//// 초기화 방법
//// 1. 생성자 내에서
//// 2. 초기화 리스트
//// 3. C++11 문법 
//
//
//// 초기화 리스트
//// - 일단 상속 관계에서 원하는 부모 생성자 호출할 때 필요하다.
//// - 생성자 내에서 초기화 vs 초기화 리스트
//// -- 일반 변수는 별 차이 없음
//// -- 멤버 타입이 클래스인 경우는 차이가 난다.
//
//// -- 정의함과 동시에 초기화가 필요한 경우(참조 타입, const 타입)
//
//class Inventory
//{
//
//public:
//	Inventory() { cout << "Inventory()" << endl; }
//	Inventory(int size) { cout << "Inventory(int size)" << endl; _size = size; }
//
//	~Inventory() { cout << "~Inventory()" << endl; }
//
//
//public:
//	int _size = 10;
//
//
//};
//
//class Player
//{
//public:
//	Player() {}
//	Player(int id){}
//};
//
//
//
//// Is-A (Knight Is-A Player?) 기사는 플레이어다. ok 상속관계
//// Is-A (Knight Is-A Inventory?)  기사는 인벤토리냐? no 포함관계
//// Has-A (Knight Has-A Inventory?) 기사는 인벤토리를 포함하고있다 (가지고 있다) 포함관계다
//
//
//class Knight : public Player
//{
//
//public:
//
//	// Knight() // 아무것도 넣어주지않으면 부모의 기본생성자가 실행됨
//	// Knight() : Player(1) 선처리 영역에서 다른 값으로 쓸 수도 있음
//	Knight() : Player(1), _hp(200), _inventory(20),_hpRef(_hp),_hpConst(100)
//		/*
//		선처리영역
//
//		
//		*! _inventory = Inventory(); 이런식으로 간접적으로 생성되는데 밑에서 한번더하기에 쓸때없이 2번 생성자가 생성이됨
//		그래서 위에서 초기화를시켜야돼 
//		*/
//	{
//		_hp = 100;
//		// _inventory = Inventory(20); //*!
//
//
//		// 뒤늦게 아래처럼 초기화를 해봐야 소용이없다
//		/*_hpRef = _hp;
//		_hpConst = 100;*/ //
//		 
//		// const는 절대로 바뀔수없는값이고 hpref는 누굴 가리키고 잇엇어야하는 값인데.. 수정이안돼 선처리 영역에서해야돼
//
//
//	}
//
//
//public:
//	// int _hp = 200;// 3. C++11 문법.
//	int _hp; // 쓰레기값
//	
//	Inventory _inventory;  // 나이트가 만들어지면서 선처리 영역에서 간접적으로 만들어지게 될것이다.
//	// 사실 인벤토리는 모든플레이어가 가지고 있는 것이기에 플레이어 
//	// 내부의 멤버변수로 있는게 낫겟지만 일단은 여기서는 일단 무시하고
//	// 나이트내부에 있다고하자, 나이트 내부에있다고한다면 고유스킬이나
//	// 검의 종류 클래스가 좋겠지?
//
//	int& _hpRef; // 포인터랑 참조는 다르다는거 기억해? 포인터는 널포인트로서 가능햇지만, 참조는 대상이 반드시 존재해야돼
//	// int& _hpRef = _hp; 모던 문법
//	const int _hpConst;
//	// const int _hpConst = 100; 모던 c11문법
//
//
//
//
//};
//
//
//int main()
//{
//
//	Knight k;
//	cout << k._hp << endl;
//
//
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//// 생성자 constructor오 ㅏ소멸자 destructor
//
//// 클래스에 소속된 함수들을 멤버 함수라고 함
//// 이 중에서 굉장히 특별한 함수 2종이 있는데 바로 [시작]과 [끝]을 알리는 함수들
//// - 시작(탄생) -> 생성자 , 여러개 존재가능
//// - 끝(소멸) -> 소멸자 , 오직 1개
//
//// [암시적 생성자]
//// 생성자를 명시적으로 만들지 않으면,
//// 아무 인자도 받지 않는 [기본 생성자]가 컴파일러에 의해 자동으로 만들어짐.
//// -> 그러나 우리가 명시적(explicit)으로 아무 생성자를 하나 만들면,
//// 자동으로 만들어지던 [기본 생성자]는 더 이상 만들어지지 않음!
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
//
//	// [1] 기본 생성자 (인자가 없음)
//	Knight()
//	{
//		cout << "knight()기본생성자 호출" << endl;
//
//		_hp = 100;
//		_attack = 10;
//		_posY = 0;
//		_posX = 0;
//
//	}
//
//
//	// [2] 복사 생성자 (자기 자신의 클래스 참조 타입을 인자로 받음
//	// 일반적으로 똑같은 데이터를 지닌 객체가 생성되길 기대한다.
//	Knight(const Knight& knight)
//	{
//		_hp = knight._hp;
//		_attack = knight._attack;
//		_posX = knight._posX;
//		_posY = knight._posY;
//		
//	}
//
//
//	// 일반 생성자 혹은 기타생성자
//
//	// 이 중에서 인자를 1개만 받는 [기타 생성자]를 
//	// 타입 변환 생성자 라고 부르기도함
//
//	// 근데 원하는건.. 명시적으로만 사용하고싶을때 explicit을 붙여준다
//	explicit Knight(int hp) 
//	{
//		_hp = 100;
//		_attack = 10;
//		_posY = 0;
//		_posX = 0;
//	}
//
//	Knight(int hp, int attack, int posX, int posY)
//	{
//		_hp = hp;
//		_attack = attack;
//		_posY = posY;
//		_posX = posX;
//	}
//
//
//
//
//
//	// 소멸자
//	~Knight()
//	{
//		cout << "knight()기본소멸자 호출" << endl;
//
//	}
//
//
//
//	// 멤버 함수 선언
//	void Move(int y, int x);
//	void Attack();
//	void Die()
//	{
//		_hp = 0;
//		// this->_hp = 0; // this->가 생략된거야
//		cout << "Die" << endl;
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
//// 전역처럼 쓸 수잇다.
//
//void HelloKnight(Knight k)
//{
//	cout << "Hello Knight" << endl;
//}
//
//
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
//
//	k1.Move(2, 2);
//	k1.Attack();
//	k1.Die();
//
//	Knight k2(100,10,10,10);
//
//	Knight k3(k2); // 복사 생성자
//
//	Knight k4 = k1; // 복사 생성자
//
//	Knight k5; // 생성자
//
//	k5 = k1; // 복사
//
//	
//	Knight k5;
//	// k5 = 1; // 인자를 1개만 받기에 타입변환생성자, _hp가 1인 나이트가 생성됨 근데 지금 explicit을 붙였기에 명시적으로해서 불가능해
//	// 그래서 Knight이라는 명시적 형변환을 써줘야함.
//	k5 = Knight(1);
//
//	HelloKnight(Knight(5));
//
//
//
//
//	return 0;
//}
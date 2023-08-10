//#include <iostream>
//
//using namespace std;
//
//
//
//// 객체지향
//
//// 상속성, 은닉성, 다형성
//
//
//// 은닉성(Data Hiding ) = 캡슐화(Encapsulation)
//// 은닉하는 이유?
//// 1. 위험하고 건드리면 안되는경우
//// 2. 다른 경로로 접근하길 원하는 경우
//
//// 자동차
//// - 핸들
//// - 페달
//// - 엔진
//// - 문
//// - 하네스
//
//// 일반 구매자 입장에서 사용하는 것
//// - 핸들/ 페달 / 문
//// 건드리면 큰일나는것
//// - 엔진, 각종 전기선
//
//// public (공개) 
//// protected (보호받는) << 파생(자손들에게만 허락
//// private (개인의) << class 내부에서만
//
//
//
//// 상속 접근 지정자 : 다음 세대한테 부모님의 유산을 어떻게 물려줄지?
//// 부모님한테 물려받은 유산을 꼭 나의 자손들한테도 똑같이 물려줘야 하진 않음
//// - public : 공개 상속 (public->public , protected -> protected)
//// - protected : 보호 받는 상속, 내 자손들한테만 (public - > protected, protected -> protected)
//// - private : 개인적인 상속 나까지만, 자손들한테는 ㄴㄴ (public -> private, protected - > private)
//
//
//class Car
//{
//public: // (멤버) 접근 지정자
//	void MoveHandle() {}
//	void PushPedal() {}
//	void OpenDoor() {}
//
//	void TurnKey()
//	{
//		// ...
//
//		RunEngine(); // 키를 돌리는 행동으로 엔진을 구동시켜야지 다른방법은 위험하잖아
//
//	}
//protected:
//	void DisassembleCar() {} // 차를 분해한다.
//	void RunEngine() {} // 엔진을 구동
//	void ConnectHarness() {} // 전기선 연결
//
//
//public:
//	// 핸들
//	// 페달
//	// 엔진
//	// 문
//	// 각종 전기선
//
//};
//
//class SuperCar : private Car // 상속 접근 지정자
//{
//
//public:
//	void PushRemoteController()
//	{
//
//		RunEngine();
//
//	}
//
//};
//
//
//class TestSuperCar : SuperCar // 아무것도 안쓰면 private
//{
//public:
//	void Test()
//	{
//		DisassembleCar();
//	}
//
//};
//
//
//// 캡슐화
//// 연관된 데이터와 함수를 논리적으로 묶어놓은 것
//
//class Berserker
//{
//public:
//	int GetHp() { return _hp; }
//	void SetHp(int hp)
//	{
//		_hp = hp;
//		if (_hp <= 50)
//			SetBerserkerMode();
//	}
//	// 사양 : 체력이 50 이하로 떨어지면 버서커 모드 발동 ( 강해짐 )
//
//private:
//	void  SetBerserkerMode()
//	{
//		cout << "매우 강해짐" << endl;
//	}
//
//
//
//private:
//	int _hp = 100;
//
//
//};
//
//int main()
//{
//
//
//	Berserker b;
//
//	//b._hp = 20;
//	//if (b._hp < 50)
//	//	b.SetBerserkerMode();
//
//	b.SetHp(20);
//
//	Car car;
//	SuperCar car2;
//	car2.PushRemoteController();
//	
//	
//
//
//
//
//
//
//	return 0;
//
//}
//#include <iostream>
//
//using namespace std;
//
//
//
//// ��ü����
//
//// ��Ӽ�, ���м�, ������
//
//
//// ���м�(Data Hiding ) = ĸ��ȭ(Encapsulation)
//// �����ϴ� ����?
//// 1. �����ϰ� �ǵ帮�� �ȵǴ°��
//// 2. �ٸ� ��η� �����ϱ� ���ϴ� ���
//
//// �ڵ���
//// - �ڵ�
//// - ���
//// - ����
//// - ��
//// - �ϳ׽�
//
//// �Ϲ� ������ ���忡�� ����ϴ� ��
//// - �ڵ�/ ��� / ��
//// �ǵ帮�� ū�ϳ��°�
//// - ����, ���� ���⼱
//
//// public (����) 
//// protected (��ȣ�޴�) << �Ļ�(�ڼյ鿡�Ը� ���
//// private (������) << class ���ο�����
//
//
//
//// ��� ���� ������ : ���� �������� �θ���� ������ ��� ��������?
//// �θ������ �������� ������ �� ���� �ڼյ����׵� �Ȱ��� ������� ���� ����
//// - public : ���� ��� (public->public , protected -> protected)
//// - protected : ��ȣ �޴� ���, �� �ڼյ����׸� (public - > protected, protected -> protected)
//// - private : �������� ��� ��������, �ڼյ����״� ���� (public -> private, protected - > private)
//
//
//class Car
//{
//public: // (���) ���� ������
//	void MoveHandle() {}
//	void PushPedal() {}
//	void OpenDoor() {}
//
//	void TurnKey()
//	{
//		// ...
//
//		RunEngine(); // Ű�� ������ �ൿ���� ������ �������Ѿ��� �ٸ������ �������ݾ�
//
//	}
//protected:
//	void DisassembleCar() {} // ���� �����Ѵ�.
//	void RunEngine() {} // ������ ����
//	void ConnectHarness() {} // ���⼱ ����
//
//
//public:
//	// �ڵ�
//	// ���
//	// ����
//	// ��
//	// ���� ���⼱
//
//};
//
//class SuperCar : private Car // ��� ���� ������
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
//class TestSuperCar : SuperCar // �ƹ��͵� �Ⱦ��� private
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
//// ĸ��ȭ
//// ������ �����Ϳ� �Լ��� �������� ������� ��
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
//	// ��� : ü���� 50 ���Ϸ� �������� ����Ŀ ��� �ߵ� ( ������ )
//
//private:
//	void  SetBerserkerMode()
//	{
//		cout << "�ſ� ������" << endl;
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
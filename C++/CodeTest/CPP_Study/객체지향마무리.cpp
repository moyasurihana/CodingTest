//#include <iostream>
//
//using namespace std;
//
//
//// 1) struct vs class
//
//// c++������ struct�� class�� ���� ���� ���̴�.
//// struct�� �⺻ ���� �����ڰ� public�̰�, class�� private�̴�.
//// �� �̷��� ������? C++�� c���� �Ļ��Ǿ� �����߱� ������, ȣȯ���� ��Ű�����Ͽ�
//// -> struct�� �׳� ����ü(������ ����) �� ǥ���ϴ� �뵵
//// -> class�� ��ü ���� ���α׷����� Ư¡ ��Ÿ���� �뵵
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
//// 2) static ����, static �Լ� (static = ���� = ������)
//
//class Marine
//{
//public:
//
//
//	int _hp; // ������ ��ü�� �ٸ� hp�� �������ְ� - > Ư�� ���� ��ü�� ������
//	// int _attack; // ������ ��� ��ü�� ����.
//
//
//	void TakeDamage(int damage) // ���� hp�� ������ �ϴ°ű⿡ ������
//	{
//		_hp -= damage;
//
//	}
//
//	static void SetAttack() //#2 ���⼭ ��� ������ �����ϰ� ���������Դµ��Ѱ� �����������ݾ�
//	{
//		// _hp -=30;
//		// TakeDamage(3)�̷��͵� �Ұ�
//		s_attack = 100;
//
//	}
//
//
//	static int s_attack; // ������ ��� ��ü�� ����.
//	// static�� �ٱ����� �����ִ� �����̾� #1 ���赵�����θ� ���� �����̶�� Ŭ���� ��ü�� ����
//};
//
//// int _attack; #1
//// static ������ � �޸�?
//// �ʱ�ȭ �ϸ� .data
//// �ʱ�ȭ ���ϸ� .bss
//
//
//int Marine::s_attack = 0; // �����̶�⺸�ٵ� �ܺμ������� �� �����
//
//
//
//// void SetAttack() ����ó�� �� #2
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
//	// �����ֱ�: ���α׷� ���� /����(�޸𸮿� �׻� �ö� ����)
//	// ���ù���: �Լ�����
//	// main �Լ� ���ο��� s_id �� �ٲܼ�����, �׳� ���Լ���ü����������
//	// 
//	// 
//	// ���� + ���� ��ü // ������ ������ ������
//	static int s_id = 1;
//	return s_id++;
//}
//
//// ���� + ���� ��ü /
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
//	// ���� ���ݷ� ���׷��̵� �Ϸ�!
//
//	Marine::s_attack = 7;
//
//
//
//	static int id = 10;// �����ϱ�? �ƴϴ�.. �ȿ��־ �����Ϳ����� �ö�����.
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
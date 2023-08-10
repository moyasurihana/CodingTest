//#include<iostream>
//
//using namespace std;
//
//// ������ constructor�� ���Ҹ��� destructor
//
//// Ŭ������ �Ҽӵ� �Լ����� ��� �Լ���� ��
//// �� �߿��� ������ Ư���� �Լ� 2���� �ִµ� �ٷ� [����]�� [��]�� �˸��� �Լ���
//// - ����(ź��) -> ������ , ������ ���簡��
//// - ��(�Ҹ�) -> �Ҹ��� , ���� 1��
//
//// [�Ͻ��� ������]
//// �����ڸ� ��������� ������ ������,
//// �ƹ� ���ڵ� ���� �ʴ� [�⺻ ������]�� �����Ϸ��� ���� �ڵ����� �������.
//// -> �׷��� �츮�� �����(explicit)���� �ƹ� �����ڸ� �ϳ� �����,
//// �ڵ����� ��������� [�⺻ ������]�� �� �̻� ��������� ����!
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
//	// [1] �⺻ ������ (���ڰ� ����)
//	Knight()
//	{
//		cout << "knight()�⺻������ ȣ��" << endl;
//
//		_hp = 100;
//		_attack = 10;
//		_posY = 0;
//		_posX = 0;
//
//	}
//
//
//	// [2] ���� ������ (�ڱ� �ڽ��� Ŭ���� ���� Ÿ���� ���ڷ� ����
//	// �Ϲ������� �Ȱ��� �����͸� ���� ��ü�� �����Ǳ� ����Ѵ�.
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
//	// �Ϲ� ������ Ȥ�� ��Ÿ������
//
//	// �� �߿��� ���ڸ� 1���� �޴� [��Ÿ ������]�� 
//	// Ÿ�� ��ȯ ������ ��� �θ��⵵��
//
//	// �ٵ� ���ϴ°�.. ��������θ� ����ϰ������ explicit�� �ٿ��ش�
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
//	// �Ҹ���
//	~Knight()
//	{
//		cout << "knight()�⺻�Ҹ��� ȣ��" << endl;
//
//	}
//
//
//
//	// ��� �Լ� ����
//	void Move(int y, int x);
//	void Attack();
//	void Die()
//	{
//		_hp = 0;
//		// this->_hp = 0; // this->�� �����Ȱž�
//		cout << "Die" << endl;
//
//	}
//
//
//
//public:
//	// ��� ����
//	int _hp;
//	int _attack;
//	int _posY;
//	int _posX;
//
//};
//
//// Knight�� �����ִ� ����Լ���.
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
//// ����ó�� �� ���մ�.
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
//	Knight k3(k2); // ���� ������
//
//	Knight k4 = k1; // ���� ������
//
//	Knight k5; // ������
//
//	k5 = k1; // ����
//
//	
//	Knight k5;
//	// k5 = 1; // ���ڸ� 1���� �ޱ⿡ Ÿ�Ժ�ȯ������, _hp�� 1�� ����Ʈ�� ������ �ٵ� ���� explicit�� �ٿ��⿡ ����������ؼ� �Ұ�����
//	// �׷��� Knight�̶�� ����� ����ȯ�� �������.
//	k5 = Knight(1);
//
//	HelloKnight(Knight(5));
//
//
//
//
//	return 0;
//}
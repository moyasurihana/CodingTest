//#include<iostream>
//
//using namespace std;
//
//// ��ü���� ���α׷���
//// ����(precedural) ���� ���α׷���
//// - procedure  = �Լ�
//// ���ݱ����� �Լ��� ����
//
//// ������ + ����(����, ����)
//
//// ��ü���� = ��ü
//// ��ü��? �÷��̾�, ����, GameRoom
//
//// Knight�� �����غ���
//// - �Ӽ�(������) : hp, attack, position(y,x)
//// - ���(����) : Move, Attack, Die
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
//	// ��� �Լ� ����
//	void Move(int y, int x);	
//	void Attack();
//	void Die()
//	{
//		_hp=0;
//		// this->_hp = 0; // this->�� �����Ȱž�
//		cout<< "Die" << endl;
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
//// ����ó�� �� ���ְ�
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
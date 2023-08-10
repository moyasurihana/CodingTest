//#include <iostream>
//using namespace std;
//
//
//// ������ ( plymorphism = poly + morph) = ���� �Ȱ�����, ����� �ٸ��� �����Ѵ�.
//
//// - �����ε� = �Լ� �ߺ� ���� = �Լ� �̸��� ����
//// - �������̵� = ���� = �θ� Ŭ������ �Լ��� �ڽ� Ŭ�������� ������
//
//
//
//
//// ���ε�(binding) = ���´�.
//// - ���� ���ε�(Static Binding) : ������ ������ ����
//// - ���� ���ε�(Dynamic Binding) : ���� ������ ����
//
//// �Ϲ� �Լ��� �������ε��� ���
//// ���� ���ε��� ���Ѵٸ�? - > ���� �Լ�( virtual function)
//
//// �׷��� ���� ��ü�� � Ÿ������ ��� �˾Ƽ� �����Լ��� ȣ�����ذɱ�?
//// - ���� �Լ� ���̺� (vftable)
//
//// .vftable[] 4����Ʈ(32) 8����Ʈ(64)
//// [VMove] [VDie]
//
//
//// ���� �����Լ� : ������ ���� ' �������̽�'�θ� �����ϴ� �뵵�� ����ϰ� ���� ���
//// 
//
//class Player
//{
//public:
//	void Move() { cout << "move player" << endl; }
//
//	// void Move(int a) { cout << "move player" << a << endl; }
//	// �����Լ��� �����Ǹ� �ϴ��� �����Լ���
//	virtual void VMove() { cout << "move player" <<endl; }
//	virtual void VDie() { cout << "Die player" << endl; }
//
//	// ���������Լ� ����
//	virtual void VAttack() = 0; 
//	// �ڽĵ��� �ݵ�� �����Ǹ� �ؾߵ�
//	// �߻� Ŭ���� : ���� ���� �Լ��� 1�� �̻� ���ԵǸ� �ٷ� �߻�Ŭ������ ����
//	// - ���������� ��ü�� ���� �� ���� ��!
//	// ���⼭�� Player��ü�� ��ü�� �����Ҽ�����
//
//
//public:
//	// [] �����Լ� ���̺��� ���ܵ� , 
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
//	virtual void VMove() { cout << "move Knight " << endl; } // �θ𿡼� �������آZ�⶧����  // virtual ���ξ� ��� �ڵ�����  virtual�� ��
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
//	// Player p; �߻� Ŭ������ ���� �������
//	// MovePlayer(&p);
//	// MoveKnight(&p); �θ� -> �ڽ�?  �ڽ�-> �θ� ����
//	
//	
//	Knight k;
//	// MoveKnight(&k);
//	MovePlayer(&k); // -> player�� move�� ȣ���� ��.
//	// �������̵��� �ߴµ�..  - > �������ε�
//
//
//
//	return 0;
//
//}
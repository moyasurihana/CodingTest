//#include <iostream>
//
//using namespace std;
//
//// ��Ӽ�
//// class�� ������ ���赵
//
//
//// ��ü���� (oop object oriented programming)
//// - ��Ӽ�
//// - ���м�
//// - ������
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
//// �޸�
//
//// [ Knight ]  ->2. ~knight ->3
//// [ [Player]] ->1. ~player ->4
//
//
//
//
//// ���(inheritance) �θ� - > �ڽĿ��� ������ �����ִ� ��
//
//// ������(N), �Ҹ���(1) - > �����ټ�����, ������ ��ü�� �����ڿ� �Ҹ��ڰ� ����
//// knight�� �����غ���, �θ������ ���� ������ ���� �Ҹ��� �θ� �Ҹ��� �� ������ �ܿ��� ��
//
//
//
//
//// �θ� �θ� ����������
//
//// GameObject�� �ֻ��� ������Ʈ
//// - Creature ��ƿ����̴�
//// -- player, monster, npc, pet
//// - Projectile ����ü
//// -- Arrow, Fireball...
//// - Env ȯ��(�ʻ󿡼� ���縸�ϴ�)
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
//		cout << "Player() �⺻ ������ ȣ��" << endl;
//		
//	}
//	Player(int hp)
//	{
//		_hp = hp;
//		_attack = 0;
//		_defence = 0;
//		cout << "Player() �⺻ ������ ȣ��" << endl;
//
//
//	}
//
//	~Player()
//	{
//		cout << "~Player() �Ҹ��� ȣ�� " << endl;
//	}
//
//
//	void Move() { cout << " Player Move ȣ�� " << endl; }
//	void Attack() { cout << " Player Attack ȣ�� " << endl; }
//	void Die() { cout << " Player Die ȣ�� " << endl; }
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
//		��(����)ó�� ���� 
//		- ���⼭ Player() �����ڸ� ȣ��
//		*/
//
//
//
//		_stamina = 0;
//		cout << "Knight() �⺻ ������ ȣ��" << endl;
//
//	}
//
//	// �׳� �����ϸ�
//	Knight(int stamina) : Player(10)
//	{
//
//		// int stamin�� �־����ϻ����ϸ� �⺻������ �ܿ� �����ڷ� �������� �ʾ�����? ��� ���������� �׷��� �ʴ�.
//		// �׷� �θ��� ���ϴ� �����ڸ� �޴� �����? : �ϰ� �־��ָ��
//		// hp�� 10�̰� ���¹̳��� stamina�� ��簡 ź��
//
//		_stamina = stamina;
//	}
//
//	~Knight()
//	{
//
//
//		cout << "~Knight() �Ҹ��� ȣ�� " << endl;
//	}
//
//
//	/*
//	��(����)ó�� ����
//	- ���⼭ Player() �Ҹ��ڸ� ȣ�� (�����Ϸ��� �˾Ƽ�)
//	*/
//
//
//
//
//	// ������ : �θ���� ������ �ź��ϰ� �� ������� ������ �ϰڴ�.
//	void Move() { cout << " Knight Move ȣ�� " << endl; }
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
//		cout << "Mage() �⺻ ������ ȣ��" << endl;
//		_mana = 10;
//	}
//	~Mage()
//	{
//		cout << "~Mage() �Ҹ��� ȣ�� " << endl;
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
//	// k.Player::Move(); �� ����������
//
//
//
//
//	return 0;
//
//
//
//}
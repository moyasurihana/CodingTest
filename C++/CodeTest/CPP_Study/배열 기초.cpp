//#include <iostream>
//using namespace std;
//
//// ������ ���� : �迭
//
//struct StatInfo
//{
//	int hp = 0xAAAAAAAA;
//	int attack = 0xBBBBBBBB;
//	int defence = 0xDDDDDDDD;
//};
//
//int main()
//{
//
//	// TYPE �̸�[����]
//	// �迭�� ũ��� ������� �� (VC �����Ϸ� ����) - > GCC�� �����ѰŰ���
//	const int monsterCount = 10;
//
//	// StatInfo monsters[monsterCount];
//	StatInfo monsters[monsterCount];
//
//	// ���²� �������� [�̸�]�� �ٱ����� �̸��̿���
//
//	int a = 10;
//	int b = a;
//
//	// �׷��� �迭�� [�̸�] ���� �ٸ��� �����Ѵ�.
//	StatInfo players[10];
//
//	// players = monsters; �̰� �ȵȴ�!
//	
//	// �׷� �迭�� �̸��� ����?
//	// �迭 �̸��� �� �迭�� ���� �ּ�
//	// ��Ȯ���� ���� ��ġ�� ����Ű�� TYPE* ������ -> ������ StatInfo ������
//	// auto -> C++11 ���� ����
//	// ���� monsters�� int��� auto�� int�� ��ȯ
//	auto WhoAmI = monsters;
//	// �� ��� -> WhoAmI �� �����ͷ� ��Ÿ����.
//
//	// StatInfo[ ] StatInfo[ ] StatInfo[ ] StatInfo[ ] StatInfo[ ] ...
//	StatInfo* monster_0 = monsters;
//	monster_0->hp = 100;
//	monster_0->attack = 10;
//	monster_0->defence = 1;
//
//	(monster_0 + sizeof(StatInfo))->hp =200;
//	cout << (monster_0 + sizeof(StatInfo))->hp << endl;
//
//	// Ȥ�� +1�� �ص� ��, �̷��� �׳� ������� �ڵ������� �������� �ö�
//	
//	StatInfo& monster_2 = *(monsters+2);
//	monster_2.hp = 300;
//	
//	cout << monster_2.hp << endl;
//
//	// �Ʒ��� ���� �ٸ� �ǹ�
//	// �迭 �ȿ� �ִ� ���� �����͸� �����ϴ� �ǹ̰��ƴϾ�!
//	// StatInfo temp = *(monsters + 2);
//	StatInfo temp;
//	temp = *(monsters + 3);
//
//	cout << temp.hp << endl;
//
//	
//	
//	// �ڵ�ȭ�� �غ���
//	for (int i = 0; i < 10 ;i++)
//	{
//		StatInfo& monster = *(monsters + i);
//		monster.hp = 100 * (i + 1);
//		monster.attack = 10 * (i + 1);
//		monster.defence =  (i + 1);
//
//
//	}
//
//	// �ٵ� *(monsters + i ) �ʹ� �����ϰ� �������� ��������
//	// index�� �������
//
//	// �迭�� 0�� ���� ����
//	// *(monsters + i) = monsters[i]
//	for (int i = 0; i < 10; i++)
//	{
//		monsters[i].hp = 100 * (i + 1);
//		monsters[i].attack = 10 * (i + 1);
//		monsters[i].defence = (i + 1);
//	}
//
//	// Ȥ��
//
//	for (int i = 0; i < 10; i++)
//	{
//		StatInfo& monster = monsters[i];
//		monster.hp = 100 * (i + 1);
//		monster.attack = 10 * (i + 1);
//		monster.defence = (i + 1);
//
//	}
//
//
//	// �迭 �ʱ�ȭ ����
//
//	int numbers[5] = {}; // 0���� �ʱ�ȭ
//	int numbers1[10] = { 1,2,3,4,5 }; // �ڴ� 0
//	int numbers2[] = { 1,2,3 };
//	
//	char helloStr[] = {'H','e','l','l','o','\0'};
//
//
//
//	for (int i = 0; i < 5; i++)
//	{
//
//	}
//
//
//
//
//	return 0;
//}
#include <iostream>
using namespace std;

// ������ ���� : ���� ����

// 1) ������ ��ȿ����

// ���� ����
// int hp = 10;

// ����
// { } �߰�ȣ�� ������ ���� ����
// ���� �̸� �ι� ����� �� ����
// ������ �ʱ�ȭ �Ͽ����ϴ�...���� ���� �߻�

int hp = 10;
int G_hp = 30; // convention


// 2) ���� �켱����


int main()
{


	{
		int hp = 10;
		cout << hp << endl;

	}

	// int hp = 20; // 4byte

	cout << hp << endl;
	// �̶� 20�� ����

	// ¦�� ���θ� �Ǵ�
	bool isEven = (hp % 2 == 0);

	// �ٱ��� ��ü
	
	short hp2 = (short)hp; // �Ƚᵵ ������ �Ǿ��ִ°� 4->2����Ʈ .. ���� ��Ʈ ������ ©��
	float hp3 = (float)hp; // 4����Ʈ 4����Ʈ?����.. �÷��̶�.. �Ǽ���ȯ ���е����� ������ �ս�
	unsigned int hp4 = (unsigned int)hp; // 4����Ʈ 4����Ʈ����..  �м��ϴ� ����� �޶���
	

	// ����
	// - �����÷ο�
	// int* int = int
	// 99999999*9999999 =.... �����÷ο�

	// ����� (__int64)..
	
	// ������
	// - �����°� ����
	int hp = 123;
	int maxHp = 0;

	float ratio = hp / maxHp;

	int maxHp = 1000;

	// int / int = int<<< 0 �ۿ� �ȳ��°�
	// �׷��� �����ϳ��� �Ǽ��� ����������
	float ratio = hp / (float)maxHp; // 0.123??


	


}

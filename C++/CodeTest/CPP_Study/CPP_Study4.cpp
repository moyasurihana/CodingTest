//#include <iostream>
//using namespace std;
//
//// ������ ���� : ������ ����
//// �����͸� �����ϴ� ����� ���ؼ� �˾ƺ���.
//
//
//
//
//int a = 1;
//int b = 2;
//
//bool isSame;
//bool isDifferent;
//bool isGreater;
//bool isSamller;
//
//bool test;
//
//int hp = 100;
//bool isInvincible = true;
//
//int main()
//{
//#pragma region ��� ����
//
//	
//
//	// ��� ������
//	
//	// ���� ������ a = b
//
//	a = b;
//	a = (b = 3);
//	a = b = 3;
//	
//	// ��Ģ ����
//	// ex) ������ ���
//	// ex) ü���� ��´ٴ���
//	// ex) ���������� ī���͸� 1 ���� ��Ų�ٴ���
//
//	a = b + 3; // ���� add
//	a = b - 3; // ���� sub
//	a = b * 3; // ���� mul
//	a = b / 3; // ������ div
//	a = b % 3; // ������ div
//
//	a = a + 3;
//	a += 3; // a = a + 3;
//
//	// ���� ������
//	a = a + 1;
//	a++;
//	++a;
//	a--;
//	--a;
//
//	b = a + 1 * 3; // ���� ���� �켱
//
//	
//#pragma endregion
//
//#pragma region �� ����
//
//	// ���� �ʿ��Ѱ�?
//	// ex) ü���� 0 �� �Ǹ� ���
//	// ex) ü���� 30% �����̸� �ñر⸦ �ߵ� (100 * hp / maxHp)
//	// ex) ����ġ�� 100 �̻��̸� ������
//	
//	// a == b : a�� b�� ���� ������?
//	// ������ 1, �ٸ��� 0
//
//	isSame = (a == b);
//	
//	// a != b : a dhk ��dml rkqtdl ekfmsrk?
//	// �ٸ��� 1, ������ 0
//	isDifferent = (a != b);
//	
//	// a > b : a�� b���� ū��?
//	// a >= b : a�� b���� ũ�ų� ������?
//	// 1 �ƴϸ� 0
//	isGreater = (a > b);
//	
//#pragma endregion
//
//#pragma region ������
//	// ���� �ʿ��Ѱ�? ���ǿ� ���� ���� ��� �ʿ��� ��
//	// ex) �α��� �� �� ���̵� ���� AND ��й�ȣ�� ���ƾ� �Ѵ�.
//	// ex) ��� �������̰ų� OR ��� �����̸� ��� �ػ� ����
//
//	// ! not
//	// 0�̸� 1, �� �� 0
//
//	test = !isSame; // ��ǻ� isDifferent�� �ǹ�
//	// && and
//	// a && b -> �Ѵ� 1�̸� 1, �׿� 0
//
//	
//	test = (hp <= 0 && isInvincible == false); // �׾���?
//
//	// || or
//	// �Ѵ� �ϳ��� 1 �̸� 1 �ƴϸ� 0
//	test = (hp > 0 || isInvincible == true);
//	test = !(hp <= 0 && isInvincible == false); // ����ִ�?
//
//		
//
//
//#pragma endregion
//
//	cout << test << endl;
//
//
//
//
// }

//#include<iostream>
//
//using namespace std;
//
//struct StatInfo
//{
//	int hp = 30;
//	int mp = 40;
//	int att = 40;
//
//};
//
//void CreateMonster(StatInfo* info);
//void PrintInfoByRef(const StatInfo& info);
//
//
////pointer const ���� ��ġ�� ���Ͽ�
////
////ex1) 
////int num = 1;
////const int* ptr = &num;
////
////*ptr = 2; // ����
////num = 2; //����
////
////ex2)
////int num1 = 1;
////int num2 = 2;
////int* const ptr* num1;
////ptr = *num2; //����
//
//
//
//
//int main(void)
//{
//
//	// ������ vs ����
//	// ���� : ����
//	// ���Ǽ� : ����
//
//	// 1) ���Ǽ� ����
//	// ���Ǽ��� ���ٴ°� �� �������� �ƴϴ�.
//	// �����ʹ� �ּҸ� �ѱ�� Ȯ���ϰ� ������ �ѱ�ٴ� ��Ʈ�� �� �� �ִµ�,
//	// ������ �ڿ������� �𸣰� ����ĥ ���� ����!
//
//	// ������� ��ġ�°� �����ϱ�����  const
//
//	// ������ * �������� �տ�, �ڿ� const�� ���̴��Ŀ� ���� �޶���
//
//	// 2) �ʱ�ȭ ����
//	// ���� Ÿ���� �ٱ����� 2���� �̸� (��Ī?)
//	// -> �����ϴ� ����� ������ �ȵ�
//	StatInfo info;
//	StatInfo* pointer;
//	pointer = &info;
//
//	// �����ʹ� �ʱ�ȭ ���ϰ� �� �� ������
//	// refer�� �װԾȵ�
//	// �����ʹ� �׳� �~ �ּҶ���ṉ̀⿡
//	// ����� �������� ���� ���� ����
//	// �׷��� �����Ϳ��� �ƹ��͵� ��Ű�� �ʴ� �ǹ̷� nullptr�� �����
//
//	//StatInfo* pointer = nullptr;
//	// int a = NULL; NULL�̳� 0�̳� �Ȱ���;
//
//
//	// StatInfo& reference;
//	// reference = info;
//
//	// StatInfo& x = info;
//	CreateMonster(&info);
//	// ->��ȿ���� �ʾƼ� ���� �� CreateMonster(pointer);
//	
//	
//	PrintInfoByRef(info);
//
//
//
//
//	// ref�� #define OUT ,, OUT�� ��������� �ٿ��� ����
//
//
//	// �����ͷ� ����ϴ��� ������ �Ѱ��ַ���?
//	// ref�ڸ��� ������*
//	
//	// ������ ����ϴ��� �����ͷ� �Ѱ��ַ���?
//	// �������ڸ��� &ref
//	pointer = &info;
//
//	// 
//
//
//
//}
//
//// ex1)
//// void CreateMonster(const StatInfo* info) �Ϲ���
//// void CreateMonster(StatInfo const* info)
//
//StatInfo globalInfo;
//
//
//// [�Ű�����][ret][��������(info)][�Ű�����(&info)][RET][��������]
//void CreateMonster( StatInfo*  info)
//{
//	if (info == nullptr)
//		return;
//	if (!info)
//		return;
//
//
//	cout << info->hp << endl;
//	cout << info->mp << endl;
//
//	// �� �ڿ� ���δٸ�?
//	// StatInfo* const info
//	// info = &globalInfo; error, 
//	// �ֳ�? info��� �ٱ����� ���빰 <<<<<<<�� ���ٲ� ���빰�� ����? �ּҰ� !!!
//	// 
//	// 
//	// �� ������ ���δٸ�?
//	// StatInfo const* info
//	// 1.const StatInfo 2. const* info 
//	// ���ڶ�� const�� ���� ����
//	// 
//	// info->hp = 1000; error
//	// info�� ����Ű�� �ִ� �ٱ����� ���빰�� �ٲܼ�������
//	// 
//	// �Ѵ� �������� �־�
//	// 
//	// const StatInfo* const info
//	// info[�ּҰ�] �ּҰ�[������]
//	
//
//
//
//	
//}
//
//// ���� �ȵǰ�
//
//void PrintInfoByRef(const StatInfo &  info)
//{
//	cout << info.hp << endl;
//	cout << info.mp << endl;
//}
//

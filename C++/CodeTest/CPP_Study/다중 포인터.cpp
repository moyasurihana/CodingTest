//#include <iostream>
//using namespace std;
//
//// ������ ���� : ���� ������
//
//void SetMessage(const char* a)
//
//{
//	//*(a + 1) = 'b';
//	//a[1] = 'b'
//
//	a = "Bye";
//
//	
//
//
//}
//
//void SetMessage(const char** a)
//{
//	*a = "Bye";
//}
//
//void SetMessage2(const char*& a)
//{
//	a = "Bye2";
//}
//
//int main()
//{
//	
//
//	const char* msg = "hello";
//	// ���������� hello��� �����ʹ� readonly���ְ�, �����ּҸ� �޼����� �־��� ����
//
//	SetMessage(msg); // ��ȭ ����
//	SetMessage(&msg);
//	SetMessage2(msg);
//	cout << msg << endl;
//
//
//	// �ּ�2 [] << 1 ����Ʈ
//	// �ּ�1[ �ּ�2 ] << 8����Ʈ
//	// pp[ �ּ� 1] << 8 ����Ʈ
//	// msg[ Hellow �ּ�]
//	// pp[&msg]
//
//	
//	const char** pp = &msg;
//
//	*pp = "Bye";
//	
//	// const char Ÿ���� ���ƾߵ�, Ÿ���� ���������� ���� �����͵� ������
//	int a = 4;
//	int* b = &a;
//	int** c = &b;
//
//	**c = 5;
//
//	
//	return 0;
//}
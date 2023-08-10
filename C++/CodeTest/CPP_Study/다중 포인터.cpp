//#include <iostream>
//using namespace std;
//
//// 오늘의 주제 : 다중 포인터
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
//	// 실질적으로 hello라는 데이터는 readonly에있고, 시작주소를 메세지에 넣어준 상태
//
//	SetMessage(msg); // 변화 없음
//	SetMessage(&msg);
//	SetMessage2(msg);
//	cout << msg << endl;
//
//
//	// 주소2 [] << 1 바이트
//	// 주소1[ 주소2 ] << 8바이트
//	// pp[ 주소 1] << 8 바이트
//	// msg[ Hellow 주소]
//	// pp[&msg]
//
//	
//	const char** pp = &msg;
//
//	*pp = "Bye";
//	
//	// const char 타입은 같아야돼, 타입이 같지않으면 다중 포인터도 못쓰지
//	int a = 4;
//	int* b = &a;
//	int** c = &b;
//
//	**c = 5;
//
//	
//	return 0;
//}
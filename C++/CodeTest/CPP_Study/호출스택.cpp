//#include <iostream>
//using namespace std;
//
//// 오늘의 주제 : 호출 스택
//
//// 함수 선언
//
//void Func1();
//void Func2(int a, int b);
//void Func3(float a);
//
//
//
//
//void Func1()
//{
//	cout << "Func1" << endl;
//
//	// 어셈블리 언어에서의 작동
//	// push2, push1 
//	// call Func2
//
//	// 그렇기에 함수 선언을 하는것이다 ******
//	Func2(1, 2);
//
//
//}
//
//void Func2(int a, int b)
//{
//	cout << "Func2" << endl;
//	Func3(10);
//
//}
//
//void Func3(float a)
//{
//	cout << "func3" << endl;
//
//}
//
//// 식별자를 찾을수 없습니다??
//// ->  C++같은 경우는, 컴파일을 할 때에 순차적으로 하나식 하나식 분석을 해.
//// -> Func1()을만들어줄려고하는데 func2가뭐야? 아래에 있기 때문에 모른다는거네.
//// -> 위치를 위에서부터 하면 빌드가 되는데.. 그럼 매번 맞춰줘야돼? -> 그럴수없어
//// 참고로 C#은 그냥 해도 됨
//
//
//int main()
//{
//	cout << "main" << endl;
//	Func1();
//
//	return 0;
//
//}
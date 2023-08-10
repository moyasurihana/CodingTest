//#include <iostream>
//using namespace std;
//
//// 오늘의 주제 : 동적 할당
//
//// 메모리 구조 복습
//// - 실행할 코드가 저장되는 영역 -> 코드 영역
//// - 전역 정적 변수 -> 데이터 영역
//// - 지역 변수/ 매개 변수 -> 스택영역
//// - 동적 할당 -> 힙 영역
//
//
//// 지금까지 데이터 영역 스택영역을 이용해서
//// 프로그램이 가능했는데
//// 새로운 영역이 필요한가?
//// 응 메모리를 효율적으로 쓰기 위해서
//
//
//
//// 실제 상황
//// - mmorpg 동접 1명 ~ 5만명, 몬스터 100마리 ~ 500만 마리
//
//// 스택 영역
//// 함수가 끝나면 같이 정리되는 불안정한 메모리
//// 잠시 함수에 매개변수 넘긴다거나, 하는 용도로는 ok
//// - 메모리 영역
//// 프로그램이 실행되는 도중에는'무조건' 사용된다.
//
//// 희망사항)
//// - 필요할때만 사용하고, 필요없으면 반납할 수 있는!
//// - 그러면서도(스택과는 다르게) 우리가 생성/소멸 시점을 관리할 수 있는
//// - HEAP 영역
//// 동적할당과 연관된 함수/ 연산자 : malloc, free, new, delete, new[], delete[]
//
//// malloc
//// - 할당할 메모리 크기를 건내준다
//// - 메모리 할당 후 시작 주소를 가리키는 포인터를 반환해준다. (메모리 부족 NULL)
//// free
//// - malloc(혹은 기타 calloc, realloc 등의 사촌) 을 통해 할당된 영역을 해제
//// - 힙관리자가 핟랑/미할당 여부를 구분해서 관리
//
//// new / delete
//// - C++에 추가됨
//// - malloc/free 함수! new / delete는 연산자(operator)
//// 차이점은 new delete는 생성자와 소멸자가 생김
//
//
//class Monster
//{
//
//public:
//	Monster()
//	{
//		cout << "Monster()" << endl;
//	}
//	~Monster()
//	{
//		cout << "~Monster()" << endl;
//	}
//
//
//
//public:
//	int _hp;
//	int _x;
//	int _y;
//
//};
//
//
//int main()
//{
//	// 유저 영역 [메모장] [lol]... 등 일반적인 프로그램
//	// --------------------------------------------------
//	// 커널 영역(Windows 등의 핵심 코드)
//	
//	
//	// 유저 영역) 운영체제에서 제공하는 API 호출 (api 함수라고 생각)
//	// 커널 영역) 메모리 할당해서 건내줌
//
//	// 매번 요청하는건 힘드니, 한번 줄때 많이 줌
//	// C++에서는 기본적으로 CRT(C런타임 라이브러리)의 [힙 관리자]를 통해 힙영역 사용
//	// 단 정말 원한다면 우리가 직업 api를 통해 힘을 생성하고 관리할 수도 있음(mmorpg 서버 메모리 풀링)
//	
//	
//	// Definitions of common types
//#ifdef _WIN64
//	typedef unsigned __int64 size_t;
//	typedef __int64          ptrdiff_t;
//	typedef __int64          intptr_t;
//#else
//	typedef unsigned int     size_t;
//	typedef int              ptrdiff_t;
//	typedef int              intptr_t;
//#endif
//
//
//	void* pointer = malloc(sizeof(Monster));
//	// void* pointer = malloc(12);
//
//	Monster* m1 = (Monster*)pointer;
//	m1->_hp = 100;
//	m1->_x = 1;
//	m1->_y = 2;
//
//	// Healp Overflow
//	// - 유효한 힙 범위를 초과해서 사용하는 문제
//	// 만약에 free하지 않으면 메모리 누수
//	free(pointer);
//	pointer = nullptr;
//	m1 = nullptr;
//
//	// Double Free
//	// 크래쉬
//	
//	// User-After-Free
//	// m1->_hp = 100; // 매우매우 좋지않은상황 그래서 nullptr을 넣어줌
//
//
//
//	Monster* m2 = new Monster;
//
//	m2->_hp = 100;
//	m2->_x = 1;
//	m2->_y = 2;
//
//	delete m2;
//
//	Monster* m3 = new Monster[5];
//
//	m3->_hp = 50;
//	m3->_x = 11;
//	m3->_y = 21;
//
//	Monster* m4 = (m3 + 1);
//	m4->_hp = 300;
//	m4->_x = 4;
//	m4->_y = 5;
//
//	delete[] m3;
//
//	
//
//
//	return 0;
//}
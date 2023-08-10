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
////pointer const 사용과 위치에 대하여
////
////ex1) 
////int num = 1;
////const int* ptr = &num;
////
////*ptr = 2; // 에러
////num = 2; //가능
////
////ex2)
////int num1 = 1;
////int num2 = 2;
////int* const ptr* num1;
////ptr = *num2; //에러
//
//
//
//
//int main(void)
//{
//
//	// 포인터 vs 참조
//	// 성능 : 같음
//	// 편의성 : 참조
//
//	// 1) 편의성 관련
//	// 편의성이 좋다는게 꼭 장점만은 아니다.
//	// 포인터는 주소를 넘기니 확실하게 원본을 넘긴다는 힌트를 줄 수 있는데,
//	// 참조는 자연스럽게 모르고 지나칠 수도 있음!
//
//	// 마음대로 고치는걸 방지하기위한  const
//
//	// 포인터 * 기준으로 앞에, 뒤에 const를 붙이느냐에 따라 달라짐
//
//	// 2) 초기화 여부
//	// 참조 타입은 바구니의 2번재 이름 (별칭?)
//	// -> 참조하는 대상이 없으면 안됨
//	StatInfo info;
//	StatInfo* pointer;
//	pointer = &info;
//
//	// 포인터는 초기화 안하고도 쓸 수 있지만
//	// refer는 그게안돼
//	// 포인터는 그냥 어떤~ 주소라는의미기에
//	// 대상이 실존하지 않을 수도 있음
//	// 그러면 포인터에서 아무것도 가키지 않는 의미로 nullptr을 사용해
//
//	//StatInfo* pointer = nullptr;
//	// int a = NULL; NULL이나 0이나 똑같음;
//
//
//	// StatInfo& reference;
//	// reference = info;
//
//	// StatInfo& x = info;
//	CreateMonster(&info);
//	// ->유효하지 않아서 에러 뜸 CreateMonster(pointer);
//	
//	
//	PrintInfoByRef(info);
//
//
//
//
//	// ref는 #define OUT ,, OUT을 명시적으로 붙여줌 보통
//
//
//	// 포인터로 사용하던걸 참조로 넘겨주려면?
//	// ref자리에 포인터*
//	
//	// 참조로 사용하던걸 포인터로 넘겨주려면?
//	// 포인터자리에 &ref
//	pointer = &info;
//
//	// 
//
//
//
//}
//
//// ex1)
//// void CreateMonster(const StatInfo* info) 일반적
//// void CreateMonster(StatInfo const* info)
//
//StatInfo globalInfo;
//
//
//// [매개변수][ret][지역변수(info)][매개변수(&info)][RET][지역변수]
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
//	// 별 뒤에 붙인다면?
//	// StatInfo* const info
//	// info = &globalInfo; error, 
//	// 왜냐? info라는 바구니의 내용물 <<<<<<<을 못바꿈 내용물이 뭔데? 주소값 !!!
//	// 
//	// 
//	// 별 이전에 붙인다면?
//	// StatInfo const* info
//	// 1.const StatInfo 2. const* info 
//	// 별뒤라면 const가 어디든 같음
//	// 
//	// info->hp = 1000; error
//	// info가 가리키고 있는 바구니의 내용물을 바꿀수가없음
//	// 
//	// 둘다 막을수도 있어
//	// 
//	// const StatInfo* const info
//	// info[주소값] 주소값[데이터]
//	
//
//
//
//	
//}
//
//// 수정 안되게
//
//void PrintInfoByRef(const StatInfo &  info)
//{
//	cout << info.hp << endl;
//	cout << info.mp << endl;
//}
//

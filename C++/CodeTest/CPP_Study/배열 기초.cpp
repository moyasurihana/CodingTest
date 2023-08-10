//#include <iostream>
//using namespace std;
//
//// 오늘의 주제 : 배열
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
//	// TYPE 이름[개수]
//	// 배열의 크기는 상수여야 함 (VC 컴파일러 기준) - > GCC는 가능한거같다
//	const int monsterCount = 10;
//
//	// StatInfo monsters[monsterCount];
//	StatInfo monsters[monsterCount];
//
//	// 여태껏 변수들의 [이름]은 바구니의 이름이였음
//
//	int a = 10;
//	int b = a;
//
//	// 그런데 배열은 [이름] 조금 다르게 동작한다.
//	StatInfo players[10];
//
//	// players = monsters; 이건 안된다!
//	
//	// 그럼 배열의 이름은 뭐지?
//	// 배열 이름은 곧 배열의 시작 주소
//	// 정확히는 시작 위치를 가리키는 TYPE* 포인터 -> 지금은 StatInfo 포인터
//	// auto -> C++11 부터 등장
//	// 만약 monsters가 int라면 auto가 int로 변환
//	auto WhoAmI = monsters;
//	// 이 경우 -> WhoAmI 는 포인터로 나타난다.
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
//	// 혹은 +1을 해도 돼, 이러면 그냥 사이즈값이 자동적으로 더해져서 올라감
//	
//	StatInfo& monster_2 = *(monsters+2);
//	monster_2.hp = 300;
//	
//	cout << monster_2.hp << endl;
//
//	// 아래는 완전 다른 의미
//	// 배열 안에 있는 실제 데이터를 조작하는 의미가아니야!
//	// StatInfo temp = *(monsters + 2);
//	StatInfo temp;
//	temp = *(monsters + 3);
//
//	cout << temp.hp << endl;
//
//	
//	
//	// 자동화를 해보자
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
//	// 근데 *(monsters + i ) 너무 불편하고 가독성이 떨어진다
//	// index를 사용하자
//
//	// 배열은 0번 부터 시작
//	// *(monsters + i) = monsters[i]
//	for (int i = 0; i < 10; i++)
//	{
//		monsters[i].hp = 100 * (i + 1);
//		monsters[i].attack = 10 * (i + 1);
//		monsters[i].defence = (i + 1);
//	}
//
//	// 혹은
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
//	// 배열 초기화 문법
//
//	int numbers[5] = {}; // 0으로 초기화
//	int numbers1[10] = { 1,2,3,4,5 }; // 뒤는 0
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
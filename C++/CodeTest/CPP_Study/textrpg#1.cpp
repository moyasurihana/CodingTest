//#include <iostream>
//using namespace std;
//
//// 오늘의 주제 : TextRPG
//enum PlayerType
//{
//	PT_Knight = 1,
//	PT_Archer = 2,
//	PT_Mage = 3,
//
//};
//
//enum MonsterType
//{
//	MT_Slime = 1,
//	MT_Orc = 2,
//	MT_Skeleton = 3,
//
//};
//
//struct Objectinfo
//{
//	int type;
//	int hp;
//	int attack;
//	int defence;
//};
//
//Objectinfo playerinfo;
//
//Objectinfo monsterinfo;
//
//
//
//
//void EnterLobby();
//void SelectPlayer();
//void EnterField();
//void CreateRandomMonster();
//void EnterBattle();
//
//
//int main() 
//{
//	srand(time(0));
//	EnterLobby();
//
//	return 0;
//}
//
//void EnterLobby() {
//
//	while (true)
//	{
//		cout << "------------------" << endl;
//		cout << "로비에 입장했습니다." << endl;
//		cout << "------------------" << endl;
//		
//		// 플레이어 직업 선택
//		SelectPlayer();
//
//		cout << "----------------------------" << endl;
//		cout << "(1) 필드 입장 (2) 게임 종료" << endl;
//		cout << "----------------------------" << endl;
//
//		int input;
//		cin >> input;
//
//		if (input == 1)
//		{
//			EnterField();
//
//		}
//		else
//		{
//			return;
//		}
//
//
//
//	}
//
//
//}
//
//void SelectPlayer()
//{
//	while (true)
//	{
//
//	
//		cout << "------------------" << endl;
//		cout << "직업을 골라주세요." << endl;
//		cout << "(1) 기사 (2) 궁수 (3) 법사" << endl;
//		cout << " >";
//		cin >> playerinfo.type;
//	
//		if (playerinfo.type == PT_Knight)
//		{
//			cout << "기사 생성중... !" << endl;
//			playerinfo.hp = 150;
//			playerinfo.attack = 10;
//			playerinfo.defence = 5;
//			break;
//		}
//		else if (playerinfo.type == PT_Archer)
//		{
//			cout << "궁수 생성중... !" << endl;
//			playerinfo.hp = 100;
//			playerinfo.attack = 15;
//			playerinfo.defence = 3;
//			break;
//		}
//		else if (playerinfo.type == PT_Mage)
//		{
//			cout << "법사 생성중... !" << endl;
//			playerinfo.hp = 80;
//			playerinfo.attack = 25;
//			playerinfo.defence = 0;
//			break;
//		}
//	}
//
//
//
//}
//
//void EnterField()
//{
//	while (true)
//	{
//
//		cout << "------------------" << endl;
//		cout << "필드에 입장했습니다." << endl;
//		cout << "------------------" << endl;
//
//
//		cout << "[PLAYER] HP :" << playerinfo.hp << " / ATT : " << playerinfo.attack << " / DEF : " << playerinfo.defence << endl;
//
//	
//		CreateRandomMonster();
//
//		cout << "------------------" << endl;
//		cout << "(1) 전투 (2) 도주" << endl;
//		cout << "> ";
//
//		int input;
//		cin >> input;
//
//		if (input == 1)
//		{
//			
//			EnterBattle();
//
//			if (playerinfo.hp == 0)
//				return;
//		}
//		else
//		{
//			return;
//		}
//
//
//		
//	
//	}
//
//}
//
//void CreateRandomMonster()
//{
//	
//
//	int monsterType = 1 + rand() % 3; // 1 2 3 
//
//
//	switch(monsterType)
//	{
//	case MT_Slime:
//		cout << "슬라임 생성중... !(HP:15 / ATT : 5 / DEF : 0)" << endl;
//		monsterinfo.hp = 15;
//		monsterinfo.attack = 5;
//		monsterinfo.defence = 0;
//
//		break;
//	case MT_Orc:
//		cout << "오크 생성중... !(HP:40 / ATT : 10 / DEF : 3)" << endl;
//		monsterinfo.hp = 40;
//		monsterinfo.attack = 10;
//		monsterinfo.defence = 3;
//		break;
//	case MT_Skeleton:
//		cout << "스켈레톤 생성중... !(HP : 80 / ATT : 15 / DEF : 5)" << endl;
//		monsterinfo.hp = 80;
//		monsterinfo.attack = 15;
//		monsterinfo.defence = 5;
//		break;
//
//	
//
//		}
//
//}
//
//void EnterBattle()
//{
//	while (true)
//	{
//		int damage = playerinfo.attack - monsterinfo.defence;
//
//		if (damage < 0)
//			damage = 0;
//
//		monsterinfo.hp -= damage;
//		if (monsterinfo.hp < 0)
//			monsterinfo.hp = 0;
//
//		cout << "몬스터 남은 체력 : " << monsterinfo.hp << endl;
//		if (monsterinfo.hp == 0)
//		{
//			cout << "몬스터를 처치했습니다" << endl;
//			return;
//		}
//
//		damage = monsterinfo.attack - playerinfo.defence;
//		if (damage < 0)
//			damage = 0;
//
//		// 반격
//		playerinfo.hp -= damage;
//		if (playerinfo.hp < 0)
//			playerinfo.hp = 0;
//
//		cout << "플레이어 남은 체력 :" << playerinfo.hp << endl;
//
//		cout << endl;
//		
//
//		if (playerinfo.hp == 0)
//		{
//			cout << "당신은 사망했습니다.. GAME OVER" << endl;
//			return;
//		}
//
//	}
//}
//

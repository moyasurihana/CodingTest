//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	int a[10] = { 1, 2, 3 };
//
//	// È£¼öÁ¶»ç
//
//	// [1] [1] [5] [2] [2] << 1 Ãþ
//
//	// [4] [2] [3] [4] [1] << 0 Ãþ
//	
//	int first[5] = { 4, 2, 3, 4, 1 };
//	int second[5] = { 1, 1, 5, 2, 2 };	
//
//	// [2Â÷][1Â÷]
//	int apartment2D[2][5] = { {4, 2, 3, 4, 1 },{1, 1, 5, 2, 2 } };
//
//	for (int floor = 0; floor < 2; floor++)
//	{
//		for (int room = 0; room < 5; room++)
//		{
//			//  ¾î¼Àºí¸® apartmetn2D + (floor * 20) + 4 * room ÁÖ¼Ò
//			cout << apartment2D[floor][room] << " ";
//
//		}
//		cout << endl;
//	}
//
//	int apartment1D[10] = { 4, 2, 3, 4, 1, 1, 1, 5, 2, 2 };
//
//	for (int floor = 0; floor < 2; floor++)
//	{
//		for (int room = 0; room < 5; room++)
//		{
//			int index = (floor * 5) + room;
//			int num = apartment1D[index];
//			cout << num << " ";
//		}
//		cout << endl;
//	}
//
//
//	
//
//	return 0;
//
//}

//#include <iostream>
//using namespace std;
//
//// 오늘의 주제 : 로또 번호 생성기
//
//void Swap(int& a, int& b)
//{
//
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//
//}
//
//void Sort(int numbers[], int count)
//{
//
//	for (int i = 0; i < count-1; i++)
//	{
//		for (int j=i+1 ; j<count; j++)
//		{
//			if (numbers[i] > numbers[j])
//			{
//				Swap(numbers[i], numbers[j]);
//				Swap(numbers[i + 1], numbers[j]);
//				
//				
//			}
//		
//
//		}
//			
//
//	}
//	
//
//}
//void ChooseLotto(int numbers[])
//{
//	// todo : 랜덤으로 1~45 사이의 숫자 6개를 골라주세요!
//	srand((unsigned)time(0));
//
//	
//	int count = 0;
//	while (count != 6)
//	{
//		int randValue = 1 + rand() % 45;
//
//
//		// 이미 찾은 값인지?
//		bool found = false;
//		for (int i = 0; i < count; i++)
//		{
//			if (numbers[i] == randValue)
//			{
//				// 이미 찾은 값>?
//				found = true;
//				break;
//			}
//		}
//
//		if (found == false)
//		{
//			numbers[count] = randValue;
//			count++;
//		}
//
//
//	}
//	Sort(numbers, 6);
//	
//		
//}
//
//
//
//int main()
//{
//	//// 1)스왑 함수
//	//int a = 3;
//	//int b = 4;
//
//	//Swap(a, b);
//	//cout << a << " " << b << endl;
//
//	// 2) 정렬 함수 만들기 (작은 숫자가 먼저 오도록 정렬)
//
//
//	int numbers[6] = { 1 ,42, 3 ,15 ,5, 6 };
//	Sort(numbers, sizeof(numbers) / sizeof(int)); // sizeof(numbers) / sizeof(int)
//	// 1, 3, 5, 6, 15, 42
//
//	ChooseLotto(numbers);
//
//
//
//
//
//}
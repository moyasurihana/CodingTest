//#include <iostream>
//using namespace std;
//
//// ������ ���� : �ζ� ��ȣ ������
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
//	// todo : �������� 1~45 ������ ���� 6���� ����ּ���!
//	srand((unsigned)time(0));
//
//	
//	int count = 0;
//	while (count != 6)
//	{
//		int randValue = 1 + rand() % 45;
//
//
//		// �̹� ã�� ������?
//		bool found = false;
//		for (int i = 0; i < count; i++)
//		{
//			if (numbers[i] == randValue)
//			{
//				// �̹� ã�� ��>?
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
//	//// 1)���� �Լ�
//	//int a = 3;
//	//int b = 4;
//
//	//Swap(a, b);
//	//cout << a << " " << b << endl;
//
//	// 2) ���� �Լ� ����� (���� ���ڰ� ���� ������ ����)
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
#include<iostream>
		
using namespace std;

class Knight
{

public:

	int _hp = 30;


};


class Dog
{

public:
	// Ÿ�� ��ȯ ������
	Dog(Knight knight)
	{
		_cuteness = knight._hp * 3;
		_age = knight._hp * 5;
		
	}

	// Ÿ�� ��ȯ ������
	operator Knight()
	{
		Knight knight;
		
		return knight;
		

	}

public:
	int _cuteness=2;
	int _age=1;


};


int main()
{

	Knight k;
	Dog dog = (Dog)k;
	Knight k2 = dog;





	// [2] �������� Ŭ���� ������ ���� Ÿ�� ��ȯ
	{




	}

}
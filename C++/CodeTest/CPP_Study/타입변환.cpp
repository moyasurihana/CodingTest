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
	// 타입 변환 생성자
	Dog(Knight knight)
	{
		_cuteness = knight._hp * 3;
		_age = knight._hp * 5;
		
	}

	// 타입 변환 연산자
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





	// [2] 연관없는 클래스 사이의 참조 타입 변환
	{




	}

}
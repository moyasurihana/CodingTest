#include <iostream>
using namespace std;



int hp = 100;

//signed 최상의 비트는 1 음으로 사용하겠다.
// 초기값이 0 이거나, 초기값이 없는 변수라면 .bss 영역


char a; // 1바이트  (-128 ~ 127)
short b; // 2바이트 ( -32768 ~ 32767)
int c; // 4바이트 (-21.4억 ~ 21.4억)
__int64 d; // 8바이트 (long long)  무지무지 큼

unsigned char ua; // 1바이트  (127 + 128)
unsigned short ub; // 2바이트 ( 32767 + 32768 = 65536)
unsigned int uc; // 4바이트 ( 21.4억 + 21.4억 )
unsigned __int64 ud; // 8바이트 (long long)  무지무지 큼


// 귀찮은데 그냥 대충 4바이트로 가면 안될까?
// -> 콘솔/모바일 게임 -> 메모리가 늘 부족하다.
// -> 온라인 게임 -> 4바이트 * 1만명..



int main()
{
	std::cout << "체력이" << hp << " 남았습니다" << endl;


}

#include <iostream>




int main()
{
    std::cout << "Hello World!\n";
    int n = 1260;
    int cnt = 0;

    int coinTypes[4] = { 500, 100, 50, 10 };
    
        for (int i = 0; i < 4; i++) {
            cnt += n / coinTypes[i];
            n %= coinTypes[i];
            


        }
    std::cout << cnt << '\n';
    
}



// using namespace std; 프린터 구조는  cout <<  cnt 인가보다
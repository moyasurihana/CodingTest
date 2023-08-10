//#include<iostream>
//
//using namespace std;
//
//
//// 연습문제
//
//
//// 문자열 길이를 출력하는 함수
//int StrLen(const char* str)
//{
//	// str이라는 문자열의 길이를 반환
//	int count = 0;
//	
//	while (str[count] != '\0')
//		count++;
//
//	return count;
//
//}
//
//// 문자열 복사 함수
//// src[주소 
//char* StrCpy(char* dest, char* src)
//{
//	/*int i = 0;
//	
//	while (src[i])  // src[i]!='\0'
//	{
//			dest[i] = src[i];
//			i++;
//	}
//	dest[i] = '\0';
//
//	return dest;*/
//
//	char* ret = dest;
//	
//	while (*src != '\0')
//	{
//		*dest = *src;
//		// -> *dest++ = *src++;  한번에 처리도 가능
//		dest++;
//		src++;
//
//	}
//
//	*dest = '\0';
//
//	return ret;
//}
//
//
//
//// 문자열을 덧붙이는함수
//
//char* StrCat(char* dest, char* src)
//{
//	/*int i = 0;
//
//
//	while (src[i] !='\0')
//	{
//		i++;
//	}
//
//	int j = 0;
//	while (dest[j] != '\0')
//	{
//		src[i] = dest[j];
//		i++;
//		j++;
//
//	}
//	
//	src[i] = '\0';
//
//	return src;*/
//	int len = StrLen(dest);
//
//	int i = 0;
//	while (src[i] != '\0')
//	{
//		dest[len+i] = src[i];
//
//		i++;
//	}
//
//	return dest;
//}
//
//
//
//#pragma warning(disable: 4996)
//
//int main()
//{
//	const int BUF_SIZE = 100;
//	// 보통 충분히 큰 크기로 잡아준다
//
//	// [h][e][l][l][o]['\0'][][][][][]....
//	
//	char a[BUF_SIZE] = "hello";
//	char b[BUF_SIZE];
//
//	// c스타일 문자열
//
//	int len = sizeof(a);
//	cout << len << endl;
//
//	int len2 = strlen(a);
//	int len3 = StrLen(a);
//	cout << len3; 
//
//	// buffer는 6이지만.. 실제 사용한 문자들은 5개다.
//
//
//	// strcpy(b, a);
//	// error -> 버퍼 크기가 일치하지 않고, b가 매우 작다면 hello를 못넣어
//	// strcpy_s(b, a); 이런 방법이 있어
//	StrCpy(b, a);
//
//	char c[BUF_SIZE] = "Hello";
//	char d[BUF_SIZE] = "World";
//
//	strcat(a, b);
//	StrCat(d, c);
//
//
//	
//	return 0;
//
//}

//#include<iostream>
//
//using namespace std;
//
//
//// ��������
//
//
//// ���ڿ� ���̸� ����ϴ� �Լ�
//int StrLen(const char* str)
//{
//	// str�̶�� ���ڿ��� ���̸� ��ȯ
//	int count = 0;
//	
//	while (str[count] != '\0')
//		count++;
//
//	return count;
//
//}
//
//// ���ڿ� ���� �Լ�
//// src[�ּ� 
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
//		// -> *dest++ = *src++;  �ѹ��� ó���� ����
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
//// ���ڿ��� �����̴��Լ�
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
//	// ���� ����� ū ũ��� ����ش�
//
//	// [h][e][l][l][o]['\0'][][][][][]....
//	
//	char a[BUF_SIZE] = "hello";
//	char b[BUF_SIZE];
//
//	// c��Ÿ�� ���ڿ�
//
//	int len = sizeof(a);
//	cout << len << endl;
//
//	int len2 = strlen(a);
//	int len3 = StrLen(a);
//	cout << len3; 
//
//	// buffer�� 6������.. ���� ����� ���ڵ��� 5����.
//
//
//	// strcpy(b, a);
//	// error -> ���� ũ�Ⱑ ��ġ���� �ʰ�, b�� �ſ� �۴ٸ� hello�� ���־�
//	// strcpy_s(b, a); �̷� ����� �־�
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

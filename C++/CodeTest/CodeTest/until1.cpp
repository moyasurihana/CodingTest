#include <bits/stdc++.h>

using namespace std;

int n, k;
int result;

//int until1() {
//    // N, K�� ������ �������� �����Ͽ� �Է� �ޱ�
//    cin >> n >> k;
//
//    while (true) {
//        // N�� K�� ������ �������� ���� �� �������� 1�� ����
//        int target = (n / k) * k;
//        result += (n - target);
//        n = target;
//        // N�� K���� ���� �� (�� �̻� ���� �� ���� ��) �ݺ��� Ż��
//        if (n < k) break;
//        // K�� ������
//        result += 1;
//        n /= k;
//    }
//
//    // ���������� ���� ���� ���Ͽ� 1�� ����
//    result += (n - 1);
//    cout << result << '\n';
//}
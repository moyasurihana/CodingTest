# N, K�� ������ �������� �����Ͽ� �Է� �ޱ�
n, k = map(int, input(),split())

result = 0

while True:
    # N�� K�� ������ �������� ���� �� ������ ����
    target = (n // k) * k
    result += (n - target)
    n = target
    # N �� K���� ���� �� (�� �̻� ���� �� ���� ��) �ݺ��� Ż��
    if n < k :
        break
    # K�� ������
    result += 1
    n //=k

    # ���������� ���� ���� ���Ͽ� 1�� ����

result += (n - 1)
print(result)


    
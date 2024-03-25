#define _CRT_SECURE_WARNINGS

#include <stdio.h>

#if 1

#define MAX_SIZE 100

int fibo(int n) {

	static int arr[MAX_SIZE] = { 0 };  //static�� �����Ƿ� �ڵ����� 0���� �ʱ�ȭ �ȴ�, 

	if (n < 2) {
		return n;

	}

	if (arr[n] > 0) {
		return arr[n];
	}

	else {
		return arr[n] = fibo(n - 1) + fibo(n - 2); //arr �迭�� �̹� ���� ����Ǿ� �ִ� ���

	}

}

int main() {

	int num = 0;
	scanf("%d" , &num);

	int result = 0;
	result = fibo(num);

	printf("%d��° fibo ���� �� : %d", num, result);

	return 0;
}

#endif 


#if 0

// �ϳ���ž ���� ��Ģ�� ���Ѽ� ��ǥ������� �ű�� ��.
// ���, ��ǥ , �������
void hanoi(int n, char from, char to, char tmp) {

	if (n == 1) {
		printf("���� 1�� %c���� %c�� �ű�ϴ�. \n" , from , to);
		return;
	}

	hanoi(n - 1, from, tmp, to);
	printf("���� %d�� %c���� %c�� �ű�ϴ�. \n", n, from, to);
	hanoi(n - 1, tmp, to, from);


}

int main() {

	int num_disks = 3;
	hanoi(num_disks, 'A' , 'C', 'B');
	return 0;
}

#endif 
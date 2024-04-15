#define _CRT_SECURE_WARNINGS

#include <stdio.h>

#if 1

#define MAX_SIZE 100

int fibo(int n) {

	static int arr[MAX_SIZE] = { 0 };  //static이 있으므로 자동으로 0으로 초기화 된다, 

	if (n < 2) {
		return n;

	}

	if (arr[n] > 0) {
		return arr[n];
	}

	else {
		return arr[n] = fibo(n - 1) + fibo(n - 2); //arr 배열에 이미 값이 저장되어 있는 경우

	}

}

int main() {

	int num = 0;
	scanf("%d" , &num);

	int result = 0;
	result = fibo(num);

	printf("%d번째 fibo 수열 값 : %d", num, result);

	return 0;
}

#endif 


#if 0

// 하노이탑 문제 규칙을 지켜서 목표기둥으로 옮기는 것.
// 출발, 목표 , 보조기둥
void hanoi(int n, char from, char to, char tmp) {

	if (n == 1) {
		printf("원판 1을 %c에서 %c로 옮깁니다. \n" , from , to);
		return;
	}

	hanoi(n - 1, from, tmp, to);
	printf("원판 %d를 %c에서 %c로 옮깁니다. \n", n, from, to);
	hanoi(n - 1, tmp, to, from);


}

int main() {

	int num_disks = 3;
	hanoi(num_disks, 'A' , 'C', 'B');
	return 0;
}

#endif 


// 1674번


#define _CRT_SECURE_NO_WARNINGS   /// #define 쓰고 한 칸 띄움 

#include <stdio.h>     // standarf input output

#if 0					// if 0  이랑 end if를 함께 쓰면 코드 실행을 안함.  if 1로 쓰면 실행 된다. 

int main() 

	int a = 0;
	scanf(" %d", &a);	

		if (a % 2 == 0 )  // a를 2로 나눈 나머지
							//if문을 쓸 때 2줄 이상이면 대괄호[] 쓴다
			printf("even");		//2로 나눴을 때 0이면 even을 출력한다.
		
		else 
			printf("odd");		// 그외에는 odd 출력.
		 
	return 0;

}

#endif



//2번



/*
크기가 10인 배열 two[]를 선언하고 여기에 2의 제곱 값들을 저장하라.

즉, 배열의 첫번째 요소에는 2^0을 저장하고 두 번째 요소에는 2^1 값을 저장하며, 마지막 요소에는 2^9 값을 저장한다.

for 루프를 이용하여 two[] 배열의 전체 요소의 값을 출력하는 프로그램을 작성하시오.

입력
출력
two[0] = 1
two[1] = 2
two[2] = 4
two[3] = 8
two[4] = 16
two[5] = 32
two[6] = 64
two[7] = 128
two[8] = 256
two[9] = 512

*/
 

int main() {

	int two[10]; //  크기가 10인 배열 문제에서 주어진 변수가 two 이기 때문에 two 씀.

	 int power = 1; // 2의 거듭제곱을 저장할 변수 power도 변수로 씀.

	// 배열에 2이 제곱 값들을 저장

	for (int i = 0; i < 10; i++) { //수 i가 0에서 9까지

		two[i] = power; //power 는 거듭제곱 저장하는 변수

		power *= 2; // power에 2를 제곱함

	}

	for (int i = 0; i < 10; i++) {
		printf("two [% d\n],  = %d\n", i, two[i]);

	}


	return 0;


}


//3번 person 구조체 만들기
#if 0

int main() {

	struct person {

		char name[50]; //문자 배열로 된 이름
		int age; //나이
		float salary; // 월급
	};


	int main()

		int a = 1;
		struct person person1;
	


		//정보입력
		printf("이름: ");
		scanf("%s", &person1.name);

		printf("나이: ");
		scanf("%d", &person1.age);

		printf("월급: ");
		scanf("%f", &person1.salary);

		///정보출력

		printf("이름 : %s\n".person1.name);
		printf("나이 : %d\n".person1.age);
		printf("월급 : %f\n".person1.ssalary);

	}

	return 0;

}

#endif 

// #if 0 이랑 #endif를 쓰면 실행이 안돼. endif붙여쓰기 . 0으로 써라.  


//4번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct points
{
	int x; // x 좌표
	int y; // y 좌표

};

int main()
{
	int a = 1;
	struct points points1;

	scanf("%d", &points1.x);
	scanf("%d", &points1.y);

	if (points1.x > 0 && points1.y > 0)
	{
		printf("1");

	}
	else if (points1.x < 0 && points1.y > 0)
	{
		printf("2");

	}
	else if (points1.x < 0 && points1.y < 0)
	{
		printf("3");

	}
	else if (points1.x > 0 && points1.y < 0)
	{
		printf("4");
	}
	else
		printf("0");

	return 0;
}


//5번 1767번 재귀함수를 이용해~

int sumFromNtoOne(int n) {
	/// --- 여기에 작성하시오

	/* 재귀함수를 이용해 n ~ ` 계산하는 함수
	
	순환을 사용하는 경우.  함수는 base case에 도달할 때까지 자기자신을 호출한다.
	base camp란 함수가 더이상 호출되지 않고 종료되어야 하는 경우를 의미함.
	
	*/


	int sumFromNtoOne(int n)
	{
		if (n <= 1) {
			return n;
		}

		else {
			return n + sumFromNtoOne(n - 1);
		}
	}

		//
}

// --- 이하 수정 금지 ---
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", sumFromNtoOne(n));

	return 0;
}




// 1674��


#define _CRT_SECURE_NO_WARNINGS   /// #define ���� �� ĭ ��� 

#include <stdio.h>     // standarf input output

#if 0					// if 0  �̶� end if�� �Բ� ���� �ڵ� ������ ����.  if 1�� ���� ���� �ȴ�. 

int main() 

	int a = 0;
	scanf(" %d", &a);	

		if (a % 2 == 0 )  // a�� 2�� ���� ������
							//if���� �� �� 2�� �̻��̸� ���ȣ[] ����
			printf("even");		//2�� ������ �� 0�̸� even�� ����Ѵ�.
		
		else 
			printf("odd");		// �׿ܿ��� odd ���.
		 
	return 0;

}

#endif



//2��



/*
ũ�Ⱑ 10�� �迭 two[]�� �����ϰ� ���⿡ 2�� ���� ������ �����϶�.

��, �迭�� ù��° ��ҿ��� 2^0�� �����ϰ� �� ��° ��ҿ��� 2^1 ���� �����ϸ�, ������ ��ҿ��� 2^9 ���� �����Ѵ�.

for ������ �̿��Ͽ� two[] �迭�� ��ü ����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
���
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

	int two[10]; //  ũ�Ⱑ 10�� �迭 �������� �־��� ������ two �̱� ������ two ��.

	 int power = 1; // 2�� �ŵ������� ������ ���� power�� ������ ��.

	// �迭�� 2�� ���� ������ ����

	for (int i = 0; i < 10; i++) { //�� i�� 0���� 9����

		two[i] = power; //power �� �ŵ����� �����ϴ� ����

		power *= 2; // power�� 2�� ������

	}

	for (int i = 0; i < 10; i++) {
		printf("two [% d\n],  = %d\n", i, two[i]);

	}


	return 0;


}


//3�� person ����ü �����
#if 0

int main() {

	struct person {

		char name[50]; //���� �迭�� �� �̸�
		int age; //����
		float salary; // ����
	};


	int main()

		int a = 1;
		struct person person1;
	


		//�����Է�
		printf("�̸�: ");
		scanf("%s", &person1.name);

		printf("����: ");
		scanf("%d", &person1.age);

		printf("����: ");
		scanf("%f", &person1.salary);

		///�������

		printf("�̸� : %s\n".person1.name);
		printf("���� : %d\n".person1.age);
		printf("���� : %f\n".person1.ssalary);

	}

	return 0;

}

#endif 

// #if 0 �̶� #endif�� ���� ������ �ȵ�. endif�ٿ����� . 0���� ���.  


//4��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct points
{
	int x; // x ��ǥ
	int y; // y ��ǥ

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


//5�� 1767�� ����Լ��� �̿���~

int sumFromNtoOne(int n) {
	/// --- ���⿡ �ۼ��Ͻÿ�

	/* ����Լ��� �̿��� n ~ ` ����ϴ� �Լ�
	
	��ȯ�� ����ϴ� ���.  �Լ��� base case�� ������ ������ �ڱ��ڽ��� ȣ���Ѵ�.
	base camp�� �Լ��� ���̻� ȣ����� �ʰ� ����Ǿ�� �ϴ� ��츦 �ǹ���.
	
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

// --- ���� ���� ���� ---
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", sumFromNtoOne(n));

	return 0;
}



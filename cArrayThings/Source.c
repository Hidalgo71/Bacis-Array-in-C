#include<stdio.h>
#include<stdlib.h>
#define N 5

int main()
{

	int i, j, sumArr = 0, temp;
	int numArr[N];


	//SMALLEST
	printf("Enter your array members:");
	for ( i = 0; i < 5; i++)
	{
		scanf_s("%d", &numArr[i]);
	}
	temp = numArr[0];
	for (j = 1; j < N; j++)
	{
		if (temp>numArr[j])
		{
			temp = numArr[j];
		}
	}
	printf("Smallest: %d\n", temp);


	//TOPLAMI
	printf("enter your array members:");
	for ( i = 0; i < 5; i++)
	{
		scanf_s("%d", &numArr[i]);
		sumArr += numArr[i];
	}
	printf("Sum is:%d\n", sumArr);

	//RANDOM GELIYOR
	printf("Your Array Members Generating...\n");
	srand(time(NULL));
	for ( i = 0; i < 5; i++)
	{
		printf("Your Array Members:%d\n", rand() % 100);		
	}

	//KULLANICI GIRIYOR
	printf("Enter your array members:");
	for ( i = 0; i < 5; i++)
	{
		scanf_s("%d", &numArr[i]);
	}

	//SONDAN BASA
	int numArr[N] = { -71,5,9,87,4 }, i;
	for (i = 4;i >= 0;i--)
	{
		printf("Members: %d\n", numArr[i]);
	}


	system("PAUSE");
	return 0;
}
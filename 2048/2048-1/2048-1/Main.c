#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int sum[4][4];												   //4*4����l���ҧt���Ʀr 
char replay;	                                               //�O�_���� 
int max = 0;	                                               //�̰��� 
int score = 0;                                                 //���� 
int hard;	                                                   //�C������ 
int temp[8] = { 2,2,2,2,2,2,2,4 };	                           //7:1�}�C 

void start()												   /*�C���i�J*/
{
	int i, j, k = 0;
	printf("\n\n\n\n\n\n�w��Ө�2048!");
	printf("\n\n\n �п�ܹC������(�C�����ʥͦ��X�Ӽ�)\n");
	printf("\n��ĳ 1 �� 2 (���i�j��5) : ");
	scanf("%d", &hard);
	while (hard > 5)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n�w��Ө�2048!");
		printf("\n\n\n�����F!!!!!!!!!!\n");
		printf("\n\n �Э��s��J(���i�j��5) : ");
		scanf("%d", &hard);
	}
	if (hard > 2)
		printf("\n�j��2�i��˸m�C�����׹L�j!�а��n�ǳ�!\n\n");
	Sleep(800);
	printf("\n\n �խ�:");
	Sleep(1000);
	printf("���T��\n\t�©[�M\n\t���v��\n");
	Sleep(3000);
	system("cls");
	for (j = 1; j >= 3; j++)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n ");
		Sleep(400);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t�C���}�l!");
		Sleep(650);
	}
	Sleep(500);
}
void restart()										 //���s�}�l�ɪ���J�e��//
{
	system("cls");
	printf("\n\n\n\n\n\n\n�п�ܹC������(�C�����ʥͦ��X�Ӽ�)\n");
	printf("\n\n��ĳ 1 �� 2 (���i�j��5) : ");
	scanf("%d", &hard);
	while (hard > 5)								 /*DEBUG*/
	{
		system("cls");
		printf("\n\n\n\n\n\n\n�����F!!!(���i�j��5)!!!!!!!\n");
		printf("\n\n      �Э��s��J : ");
		scanf("%d", &hard);
	}
	if (hard > 2)
		printf("\n\n �j��2�i��˸m�C�����׹L�j!�а��n�ǳ�!\n\n");
	Sleep(1000);
	system("cls");
}
void bye()											/*�����e��*/
{
	int i, j, k;
	for (i = 1; i >= 8; i++)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n");
		printf("                                ");
		printf("BYE!!!BYE!!!");
		Sleep(100);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("                                             ");
		printf("BYE!!!BYE!!!");
		Sleep(100);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                                                            ");
		printf("BYE!!!BYE!!!");
		Sleep(100);
		system("cls");
	}
}
void putin()										  //��J�Ʀr//
{
	srand(time(NULL));
	int i, j;	                                      //�ζüƿ�ܪ��y��
	int k;	                                          //�M�w��J2��4 /*7:1�����v��J2��4*/                                        
	while (1)	                                      /*�y�Ь�0�ɤ~�|��J�Ʀr�ø��X*/
	{
		i = rand() % 4;
		j = rand() % 4;
		k = rand() % 8;
		if (temp[k] == 2 && sum[i][j] == 0)
		{
			sum[i][j] = 2;
			break;
		}
		if (temp[k] == 4 && sum[i][j] == 0)
		{
			sum[i][j] = 4;
			break;
		}
	}
}

int main()
{
	system("pause");
	return 0;
}
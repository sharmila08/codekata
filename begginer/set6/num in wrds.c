#include<stdio.h>
int main()
{
	int ch;
	printf("enter the number");
	scanf("%d",&ch);
	if(ch<=10)
	{
		switch(ch)
		{
			case 1:
			printf("\nOne");
			break;
			case 2:
			printf("\nTwo");
			break;
			case 3:
			printf("\nThree");
			break;
			case 4:
			printf("\nFour");
			break;
			case 5:
			printf("\nFive");
			break;
			case 6:
			printf("\nSix");
			break;
			case 7:
			printf("\nSeven");
			break;
			case 8:
			printf("\nEight");
			break;
			case 9:
			printf("\nNine");
			break;
			case 10:
			printf("\nTen");
			break;
			default:
			break;
		}
	}
	return 0;
}

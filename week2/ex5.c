#include <stdio.h>

void both_side_up(int n);
void right_side_up(int n);
void left_side_up(int n);
void both_side_down(int n);
void right_side_down(int n);
void left_side_down(int n);
void both_side_center(int n);
void right_side_center(int n);
void left_side_center(int n);
void straight(int n);

int main()
{
	int n;
	int fgr;
	printf("chose figure number: 1 - bsu | 2 - rsu | 3 - lsu | 4 - bsd | 5 - rsd | 6 - lsd | 7 - bsc | 8 - rsc | 9 - lsc | 10 - s \n");
	scanf(" %d", &fgr);
	printf("print n: ");
	scanf(" %d",&n);
	
	switch (fgr)
	{
		case 1: both_side_up(n);
			break;
		case 2: right_side_up(n);
			break;
		case 3: left_side_up(n);
			break;
		case 4: both_side_down(n);
			break;
		case 5: right_side_down(n);
			break;
		case 6: left_side_down(n);
			break;
		case 7: both_side_center(n);
			break;
		case 8: right_side_center(n);
			break;
		case 9: left_side_center(n);
			break;
		case 10: straight(n); 
			 break;
		default: printf("wrong figure number");
	}
	
	return 0;
}

void both_side_up(int n)
{
	for (int i=1; i<=n; i++)
	{
		for (int j=0; j<n-i; j++)
		{
			printf(" ");	
		}
		for (int j=1; j<=2*i-1; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
void right_side_up(int n)
{
	for (int i=1; i<=n; i++)
	{
		
		for (int j=1; j<=i; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
void left_side_up(int n)
{
	for (int i=1; i<=n; i++)
	{
		for (int j=0; j<n-i; j++)
		{
			printf(" ");	
		}
		for (int j=1; j<=i; j++)
		{
			printf("*");	
		}
		printf("\n");
	}	
}
void both_side_down(int n)
{
	for (int i=n; i>=1; i--)
	{
		for (int j=0; j<n-i; j++)
		{
			printf(" ");	
		}
		for (int j=1; j<=2*i-1; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	

}
void right_side_down(int n)
{
	for (int i=n; i>=1; i--)
	{
		
		for (int j=1; j<=i; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
void left_side_down(int n)
{
	for (int i=n; i>=1; i--)
	{
		for (int j=0; j<n-i; j++)
		{
			printf(" ");	
		}
		for (int j=1; j<=i; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
void both_side_center(int n)
{
	for (int i=1; i<=(n+1)/2; i++)
	{
		for (int j=0; j<((n+1)/2)-i; j++)
		{
			printf(" ");	
		}
		for (int j=1; j<=2*i-1; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	for (int i=((n+1)/2)-1; i>=1; i--)
	{
		for (int j=0; j<((n+1)/2)-i; j++)
		{
			printf(" ");	
		}
		for (int j=1; j<=2*i-1; j++)
		{
			printf("*");	
		}
		printf("\n");
	}	
}
void right_side_center(int n)
{
	for (int i=1; i<=(n+1)/2; i++)
	{
		
		for (int j=1; j<=i; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	for (int i=((n+1)/2)-1; i>=1; i--)
	{
		
		for (int j=1; j<=i; j++)
		{
			printf("*");	
		}
		printf("\n");
	}	
}
void left_side_center(int n)
{
	for (int i=1; i<=(n+1)/2; i++)
	{
		for (int j=0; j<((n+1)/2)-i; j++)
		{
			printf(" ");	
		}
		for (int j=1; j<=i; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	for (int i=((n+1)/2)-1; i>=1; i--)
	{
		for (int j=0; j<((n+1)/2)-i; j++)
		{
			printf(" ");	
		}
		for (int j=1; j<=i; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
void straight(int n)
{
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
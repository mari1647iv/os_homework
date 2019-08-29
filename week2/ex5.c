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
	char fgr[1000];
	printf("chose figure: bsu | rsu | lsu | bsd | rsd | lsd | bsc | rsc | lsc | s \n");
	scanf(" %[^\t\n]s", &fgr);
	printf("print n: ");
	scanf(" %d",&n);
	
	switch (fgr)
	{
		case bsu: both_side_up(n);
		case rsu: right_side_up(n);
		case lsu: left_side_up(n);
		case bsd: both_side_down(n);
		case rsd: right_side_down(n);
		case lsd: left_side_down(n);
		case bsc: both_side_center(n);
		case rsc: right_side_center(n);
		case lsc: left_side_center(n);
		case s: straight(n); 
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
	for (int i=((n+1)/2)-1; i>=1; i--)
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
	for (int i=((n+1)/2)-1; i>=1; i--)
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
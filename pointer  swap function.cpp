// wrp to print a 2d array using pointer and function.

#include<stdio.h>
void input(int n,int m,int a[m][n])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}
}
void output(int m,int n,int **a)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%d",a[i][j])
	}
}
int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	int a[n][m];
	input(n,m,a);
	output(n,m,a);
	
}























// wrp to find largest among three usng poinnter.

// wrp to take a number of chances from user and store scure of both player and calculate lead of each chances the player who has maximum lead in any chance will win the game.you have to print who won and what is lead by which he won


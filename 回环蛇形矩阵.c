#include<stdio.h>
#define N 101
int main()
{
	int i,j,l,n;
	int a[N][N];
	int k;
	while(scanf("%d",&n)!=EOF){
	  for(i=0;i<N;i++)
		  for(j=0;j<N;j++)
			  a[i][j]=0;

	  k=1;
	  for(i=0;i<n;i++)
		  a[i][n-1]=k++;
	   for(i=0;i<n-1;i++)
		   a[n-1][n-i-2]=k++;
	   for(i=0;i<n-1;i++)
		   a[n-i-2][0]=k++;

       for(i=0,l=i;i<n;i++){
		   for(j=l;a[l][j+1]==0;j++)//j在哪一列
				   a[l][j+1]=k++;
                
           for(;a[l+1][j]==0;l++)//l在哪一行
				   a[l+1][j]=k++;
		  
		   for(;a[l][j-1]==0;j--)
                 a[l][j-1]=k++;
		   for(;a[l-1][j]==0;l--)
			   a[l-1][j]=k++;

	   }

	   
	   for(i=0;i<n;i++){
		   printf("\n");
		   for(j=0;j<n;j++)
			   printf("%d   ",a[i][j]);
	   }

	}
	return 0;
}
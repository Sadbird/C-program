#include<stdio.h>
int main(){
  int a[100],n,i,m;
   scanf("%d",&n);
	  while(n!=0){
		  a[0]=0;
		  a[1]=1;
		  a[2]=2;
		  a[3]=3;
		  scanf("%d",&m);
		  for(i=3;i<=m;i++)
			  a[i+1]=a[i]+a[i-1];
          printf("%d\n",a[m]);
		  
       n--;

	  }

}
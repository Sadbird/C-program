#include<stdio.h>
#define n 100
int main(){
int M,N,i;
int a[n][2];
int S=0,tmp=0;
for(i=0;i<n;i++){
a[i][0]=0;
a[i][1]=0;
}
while(scanf("%d %d",&M,&N)!=EOF){

	for(i=0;i<N;i++){
	  scanf("%d %d",&a[i][0],&a[i][1]);
	}

	S=M+1;
	//最好在有个a[i][0]从小到大排序

	for(i=0;i<N;i++){
		if((a[i][1]>=a[i+1][0])&&(a[i+1][0]!=0)){
		 if(a[i][1]>=a[i+1][1])
		 { 
			tmp=a[i][1]-a[i][0]+1;
			S=S-tmp;
		 }
		else{
		   tmp=a[i+1][1]-a[i][0]+1;
		   S=S-tmp;
		}
		   i=i+1;
		
		}
		else{

		    tmp=a[i][1]-a[i][0]+1;
			S=S-tmp;
		
		}

	}
  printf("%d",S);
}
return 0;
}

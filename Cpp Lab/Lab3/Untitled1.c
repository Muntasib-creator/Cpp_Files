#include<stdio.h>
int main()
{
	int sum=0,s,i,n,k;
	scanf("%d%d",&n,&k);
	for(i=1;i<=k;i=i+1){
		if(n%10==0){
		n=n/10;         //printf("%d\n",n);
//        sum=sum+1;
	    }
	    else{
		n=n-1;          //printf("%d\n",n);
//        sum=sum+1;
	    }
//	    printf("%d\n",sum);
	}
	printf("%d\n",n);
	return 0;
}

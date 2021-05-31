#include <stdlib.h>
#include<stdio.h>
int main(){
	int a,r,n,i,sum;
	printf("%s"," Enter first term \n");
	scanf("%d",&a);
	printf("%s"," Common Ratio\n");
	scanf("%d",&r);
	printf("%s"," Number of terms\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=a*(pow(r,i));
		sum+=sum;
	}
	sum=sum-a;
	printf("%d\n",sum );
	return 0;
}

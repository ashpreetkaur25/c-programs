#include <stdio.h>
#include <stdlib.h>

int main()
{
	char val;
	int choice;
do{
   	system("cls");
	printf("Press 1 for Divisor or Press 2 for Factorial : ");
	scanf("%d",&choice);

   if(choice==1){
   	int i,n;
	printf("\nEnter the number to find its Divisors: ");
	scanf("%d",&n);
   	for(i=1;i<=n;i++){
       		if(n%i==0){
		   printf("\n");
		   printf("%i",i);
		   printf("\n");
   		}
   	}
   	printf("\nAre it's divisors\n");
   }

   else if(choice==2){
   	int n;
	printf("Enter the number to find its Factorial : ");
	scanf("%d",&n);

	int i,factorial=1;
	for(i=1;i<=n;i++){
		factorial*=i;
	}
	printf("%d\n",factorial );
	printf("Is the Factorial ");
   }

   else{
   	printf("\n");
   	printf("Enter a valid option (1/2)");
   }

printf("\nDo you want to continue	(y/n)");
scanf("%s",&val);

}while(val=='y'||val=='Y');

return 0;
}

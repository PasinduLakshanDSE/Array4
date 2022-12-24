#include<stdio.h>
void main(){
	int my_array[8];
	int count;
	int num;
	int total=0;
	int positive=0;
	int negative=0;
	int zero=0;
	
	for(count=0;count<8;count++){
		printf("Enter the num;");
		scanf("%d",&num);
		my_array[count]=num;
	}
	for(count=0;count<8;count++){
		if(my_array[count]>0){
			positive=positive+1;
			
		}else if(my_array[count]<0){
			negative=negative+1;
			
		}else{
			zero=zero+1;
			
		}
		total=total+my_array[count];
		
	}
	printf("positive count is:%d\n",positive);
	printf("Negative count is:%d\n",negative);
	printf("Zero count is:%d\n",zero);
	printf("Total is:%d\n",total);

	
}
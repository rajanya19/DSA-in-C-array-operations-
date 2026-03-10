#include<stdio.h>
int main(){
	int a[10],size,i,num,pos;
	printf("enter the size of an array:");
	scanf("%d",&size);
	printf("the array elements are:");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the data that you want to insert:");
	scanf("%d",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	if(pos<=0||pos>size+1){
		printf("invalid position\n");
	}else{
		for(i=size-1;i>=pos-1;i--){
			a[i+1]=a[i];
		}
		a[pos-1]=num;
		size++;
	}
	printf("displaying the element:\n");
	for(i=0;i<size;i++)
	printf("%d\n",a[i]);
	
	
	
	printf("enter the data that you want to insert at beginning :\n");
	scanf("%d",&num);
	for(i=size-1;i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]=num;
	size++;
	printf("enter the data that you want to insert at end:\n");
	scanf("%d",&num);
	a[size]=num;
	size++;
	printf("after these displaying the elements:\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

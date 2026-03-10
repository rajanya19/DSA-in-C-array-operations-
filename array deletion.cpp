#include<stdio.h>
int main(){
	int i,size,num,pos,a[10];
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("the array elements are:");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("displaying the elements:");
	for(i=0;i<size;i++){
		printf("%d\n ",a[i]);
	}
	//deletion from a specified position
	printf("enter the position you want to delete:\n");
	scanf("%d",&pos);
	if(pos<=0||pos>size){
		printf("invalid position\n");
	}else {
		for(i=pos-1;i<size-1;i++){
			a[i]=a[i+1];
		}
		size--;
	}
	printf("array after deletion:\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	//delete from end
	size--;
	printf("the array is now after deleting at end :\n");
	for(i=0;i<size;i++){
		printf("%d\n",a[i]);
	}
	//delete from beginning
	for(i=0;i<size-1;i++){
		a[i]=a[i+1];
	}
	size--;
	printf("finally the array is:\n");
	for(i=0;i<size;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

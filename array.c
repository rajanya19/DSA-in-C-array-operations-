#include<stdio.h>
int main(){
	int a[50],size,i;
	printf("enter the size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("the array elements are:");
		scanf("%d",&a[i]);
	}
		printf("displaying the elements:");
		for(i=0;i<size;i++)
		printf("%d ",a[i]);
	return 0;
}

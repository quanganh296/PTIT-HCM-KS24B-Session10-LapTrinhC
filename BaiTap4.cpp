#include<stdio.h>
using namespace std;
int main(){
	int arr[]={3,5,2,7,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<n-1;i++){
		int min_idx=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_idx]){
				min_idx=j;
			}
	
	int temp=arr[min_idx];
	arr[min_idx]=arr[i];
	arr[i]=temp;	}
}
for(int i=0;i<n;i++){
	printf("%d",arr[i]);
}
printf("\n");
	return 0;
}

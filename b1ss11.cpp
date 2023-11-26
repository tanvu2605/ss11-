#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so gia tri cua 1 mang: ");
	scanf("%d",&n);
	int number[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao gia tri number[%d] = ",i);
		scanf("%d",&number[i]);
	}
	printf("\t\tMENU\t\t\n");
	printf("1. In cac gia tri phan tu cua mang\n");
	printf("2. Sap xep mang giam dan va in ra theo phuong phap sap xep chen\n");
	printf("3. Sap xep mang tang dan va in ra theo phuong phap sap xep chon\n");
	printf("4. Sap xep mang giam dan va in ra theo phuong phap sap xep noi bot\n");
	int choice;
	printf("Lua chon cua ban la: ");
	scanf("%d",&choice);
	switch(choice){
		case 1: 
			for(int i=0;i<n;i++){
				printf("%d\n",number[i]);
			}
			break;
		case 2:
			for(int i=0;i<n;i++){
				int key=number[i],j=i-1;
				while(j>=0&&number[j]<key){
					number[i]=number[j];
					j=j-1;
				}
				number[j+1]=key;
			}
			for(int i=0;i<n;i++){
				printf("number[%d]=%d\n",i,number[i]);
			}
			break;
		case 3:
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(number[i]>number[j]){
						int temp=number[i];
						number[i]=number[j];
						number[j]=temp;
					}
				}
			}
			for(int i=0;i<n;i++){
				printf("number[%d]=%d\n",i,number[i]);
			}
			break;
			case 4:
			for(int i=0;i<n;i++){
				for(int j=0;j<n-i-1;j++){
					if(number[i]<number[j]){
						int temp=number[i];
						number[i]=number[j];
						number[j]=temp;
					}
				}
			}
			for(int i=0;i<n;i++){
				printf("number[%d]=%d\n",i,number[i]);
			}
			break;
	}
}

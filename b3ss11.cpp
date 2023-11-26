#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&n);
	int number[n];
	int end=n,start=0,mid;
	for(int i=0;i<n;i++){
		printf("Nhap gia tri number[%d]= ",i);
		scanf("%d",&number[i]);
	}
	printf("\t\tMENU\t\n");
	printf("1. In gia tri cac phan tu\n");
	printf("2. Nhap gia tri tim kiem va tim bang thuat toan tim tuyen tinh\n");
	printf("3. Nhap gia tri tim kiem va tim bang thuat toan tim nhi phan\n");
	printf("4. Thoat\n");
	int choice;
	printf("Lua chon cua ban la: ");
	scanf("%d",&choice);
	int searchValue,i;
	switch (choice){
		case 1:
			for(i=0;i<n;i++){
				printf("number[%d]=%d\n",i,number[i]);
			}
		break;
		case 2:
			printf("Nhap gia tri tim kiem: ");
			scanf("%d",&searchValue);
			for(i=0;i<n;i++){
				if(number[i]==searchValue){
					break;
				}
			}
			printf("Gia tri o vi tri so %d cua mang",i);
			break;
		case 3:
			printf("Nhap gia tri tim kiem: ");
			scanf("%d",&searchValue);
			for(i=start;i<end;i++){
				mid=(end+start)/2;
				if(number[i]==mid){
					break;
				}else if(number[i]>mid){
					start=mid+1;
				}else{
					end=mid-1;
				}
			}
			printf("Gia tri o vi tri so %d cua mang",mid);
			break;
			}

	}


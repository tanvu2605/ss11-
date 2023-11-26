#include<stdio.h>
	int main(){
		int row,col;
		printf("Nhap so dong va cot cua mang: ");
		scanf("%d %d",&row,&col);
		int number[row][col];
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				printf("number[%d][%d] = ",i,j);
				scanf("%d",&number[i][j]);
			}
		}
		printf("\t\tMENU\t\t\n");
		printf("1. In gia tri mang theo ma tran\n");
		printf("2. Sap xep mang theo gia tri tang dan\n");
		printf("3. Sap xep mang theo gia tri giam dan\n");
		printf("4. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					printf("%d\t",number[i][j]);
				}
				printf("\n");
			}
			break;
			case 2:
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						for(int n=i;n<row;n++){
							for(int m=j;m<col;m++){
								if(number[i][j]>number[n][m]){
									int temp=number[i][j];
									number[i][j]=number[n][m];
									number[n][m]=temp;
								}
							}
						}
					}
				}
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						printf("%d\n",number[i][j]);
					}
				}
				break;
				case 3:
				for(int i=0;i<row-1;i++){
					for(int j=0;j<col-1;j++){
						for(int n=i+1;n<row;n++){
							for(int m=j+1;m<col;m++){
								if(number[i][j]<number[n][m]){
									int temp=number[i][j];
									number[i][j]=number[n][m];
									number[n][m]=temp;
								}
							}
						}
					}
				}
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						printf("%d\n",number[i][j]);
					}
				}
				break;
		}
	}

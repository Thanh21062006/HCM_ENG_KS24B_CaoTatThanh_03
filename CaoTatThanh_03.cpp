#include <stdio.h>
#define MAX_SIZE 100

int main(){
	int choice = 0, size = 0;
	int arr[MAX_SIZE];
	
	while(1){
		printf("\n=============MENU=============\n");
		printf("1. Nhap gia tri cho mang\n");
		printf("2. In mang\n");
		printf("3. Dem so nguyen to\n");
		printf("4. Tim gia tri nho thu 2\n");
		printf("5. Them phan tu\n");
		printf("6. Xoa phan tu\n");
		printf("7. Sap xep giam dan\n");
		printf("8. Tim kiem phan tu\n");	
		printf("9. Xoa phan tu trung lap\n");
		printf("10. Dao nguoc mang\n");
		printf("0. Thoat!\n");
		
		printf("Moi ban nhap chuc nang tuong ung: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 0:
				printf("Thoat!\n"); 
				break;	
			case 1:
				 printf("Moi ban nhap so luong phan tu: ");
				 scanf("%d", &size);
				 
				 for(int i = 0; i < size; i++){
				 	printf("arr[%d] = ", i);
				 	scanf("%d", &arr[i]);
				 }
				break;
			case 2:
				if(size == 0){
					printf("Mang trong!");
				}else{
					for(int i = 0; i < size;i++){
						printf("arr[%d] = %d,", i, arr[i]);
					}
				}
				break;
			case 3:{
				int cout = 0;
				for(int i = 0; i < size;i++){
					int check = 1;
					if(arr[i] < 2){
						check = 0;
					}
					for(int j = 2;j * j <= arr[i]; j++){
						if(arr[i] % 2 == 0){
							check = 0;
							break;
						}
					}
					if(check){
						cout++;
					}
				}
				printf("So nguyen to co trong mang la: %d\n", cout); 
				break;
			}

			case 4:
				break;
			case 5:
				int index, value;
				int index, value;
				printf("Moi ban nhap vi tri muon them: ");
				scanf("%d", &index);
				
				if(index < 0){
					printf("Vi tri khong hop le!\n");
					break;
				}
				
				if(index > size){
					index = size;
				}
				printf("Moi ban nhap gia tri: ");
				scanf("%d", &value);
				
				
				for(int i = size;i > index; i--){
					arr[i] = arr[i-1];
				}
				arr[index] = value;
				size++;				
				break;
			case 6:
				int indexDelete;
				printf("Moi ban nhap vi tri muon xoa: ");
				scanf("%d", &indexDelete);
				for(int i = indexDelete; i < size; i++){
					arr[i] = arr[i+1];
				}
				size--;
				
				break;
			case 7:
				if(size == 0){
					printf("Mang trong!");
					break;
				} 
				for(int i = 1; i < size; i++){
					int temp = arr[i];
					int j = i-1;
					while(j >= 0 && arr[j] > temp){
						arr[j+1] = arr[j];
						j = j - 1;
					}
					arr[j + 1] = temp;
				}
				break;
			case 8:{
				int l = 0,r = size - 1, value2;
				printf("Moi ban nhap gia tri muon tin kiem: ");
				scanf("%d", &value2);
				while(l <= r){
					int m = (l+r)/2;
					if(arr[m] == value2){
						printf("Phan trong mang tai vi tri arr[%d]\n", m);
						break;
					}else if(arr[m] < value2){
						l = m + 1;
					}
					else{
						r = m - 1;
					}
				}			
			}	 
				break;
			case 9: 
				break;
			case 10:
				for(int i = 0;i < size/2; i++){
					int temp = arr[i];
					arr[i] = arr[size - i - 1];
					arr[size - i - 1] = temp;
				} 
				break;
			default: 
				printf("Moi ban nhap dung chuc nang!\n");	
		}
		if(choice == 0){
			break;
		}
	}
	return 0;
}

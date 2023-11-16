#include<stdio.h> 
#include<stdlib.h> 
int main(){
	int numbers[100]; 
	int m,j,i,n,choice,currentIndex=0;
	do{
		printf("**********menu**********\n"); 
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.In ra gia tri cac phan tu chan v� tinh tong\n");
		printf("4.In ra gia tri lon nhat v� nho nhat trong mang\n");
		printf("5.In ra cac phan to la so nguyen to trong mang va tinh tong\n");
		printf("6.Nhap vao mot so va thong ke trong mang co bao nhieu phan tu co gia tri nhu vay\n");
		printf("7.Them mot phan tu vao vi tri chi dinh\n");
		printf("8.Thoat\n");
		printf("Vui long chon lua chon:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu can nhap:");
				scanf("%d",&n);
				for(i=0;i<n&&i<100;i++){
					printf("numbers[%d]",currentIndex);
					scanf("%d",&numbers[currentIndex]);
					currentIndex++;
				} 
				break;
			case 2: 
				if(currentIndex==0){
					printf("khong co gia tri nao"); 
				}else{
					printf("%d",n);
				}
				break;
			case 3:
				if(currentIndex>0){
   					for(j = 1; j <=currentIndex; j++){
      					if(j%2 == 0){
         					printf(" %d\n",numbers[j]);
         				}
         			}
				}else{
					printf("khong co gia tri nao");   
				}
				break;
			case 4:
				max = numbers[0];
            min = numbers[0];
            for (int i = 0; i < currentIndex; i++)
            {
                max = (max > arr[i]) ? max : numbers[i];
                min = (min < arr[i]) ? min : numbers[i];
            }
            printf("Max=%d\tMin=%d\n", max, min);
            break; 
            case 5:
			printf("c�c ph?n t? l� s? nguy�n t? trong m?ng la \n");
            sum = 0;
            for (int i = 0; i < currentIndex; i++)
            {
                count = 0;
                for (int j = 1; j <= sqrt(numbers[i]); j++)
                {
                    if (numbers[i] % j == 0 && j != 1)
                    {
                        count++;
                    }
                }
                if (count == 0 && numbers[i] >= 2)
                {
                    printf("%d\n", numbers[i]);
                    sum += numbers[i];
                }
            }
            printf("Tong la:� %d", sum);
            break;
 			case 6:
			 	printf("Nh?p v�o m?t s?");
            scanf("%d", &findNumber);
            count = 0;
            for (int i = 0; i < currentIndex; i++)
            {
                if (findNumber == numbers[i])
                {
                    count++;
                }
            }
            printf("trong m?ng c� %d ph?n t? c� gi� tr? nh� v?y", count);
            break;
			case 7:
				int addvalue, index;
            printf("Nhập phần tử cần thêm vào");
            scanf("%d", &addvalue);
            printf("Nhập vị trí chỉ định của phần tử đó");
            scanf("%d", &index);
            if (currentIndex > index)
            {
                for (int i = currentIndex; i > index; i--)
                {       
                    numbers[i] = numbers[i - 1];                
                }
            }
            else currentIndex=index+1;
            numbers[index] = addvalue;
            printf("arr[%d]= %d", index, numbers[index]);
            break; 
			case 8:
				exit(0); 
			default:
            	printf("Bạn phải nhập các số từ 1-8\n");
            	break;				 
		} 
	}while(1==1);
	for (i=0;i<n;i++) printf("%d",numbers[i]); 
}

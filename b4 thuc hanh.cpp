#include <stdio.h>
int main(){
	int n,i;
	//nhap so n
	printf("nhap vao mot so nguyen: ");
	scanf("%d",&n);
	if (n <=0) {
		printf("so nhap vao khong phai so nguyen duong .\n");
		return 1;
	}
    // tim va hien thi cac so n 
    printf("cac so uoc %d la: ",n);
    for(i=1;i<=n;i++){
    	if (n%i==0){
    		printf("%d",i);
		}
	}
	printf("\n");
	return 0;
	}
	

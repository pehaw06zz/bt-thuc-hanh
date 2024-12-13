#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	int isprime =1;
	//nhap so nd
	printf("nhap vao mot so nguyen: ");
	scanf("%d",&n);
	if (n <=1) {
		printf("%d so nhap vao khong phai so nguyen to .\n",n);
		return 0;
	}
	for (i=2;i<=sqrt(n);i++){
		if (n%i==0){
			isprime =0;
			break;
		}
	}
	//in ket qua
	if (isprime){
		printf("%d la so nguyen to ",n);
		
	} else {
	printf("%d  khong phai la so nguyen to",n);
	}
	return 0;
	}
	

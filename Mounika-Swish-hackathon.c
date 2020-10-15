include<stdio.h>
int main(){
	int discount,price;
	int total=0;
	printf("enter price and discount\n");
	scanf("%d %d",&price,&discount);

	while(price>0){

		total+=price;
		price = (100-discount)*price/100;

	}
	printf("%d",total);
	return 0;
}

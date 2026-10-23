#include <stdio.h>
int main()
{
	int a[]={5,7,6,9,10,12,-3,4,1,8,9};
	
	//Cau 1: Xuat mang ra man hinh
	int i;
	i = 0;
	while(i<=10)
	{
		printf("%d\t", a[i]);
		i++;
	}
	
	//Cau 2: Tinh tong mang 
	i = 0;
	int tong = 0;
	while(i<=10)
	{
		tong = tong + a[i];
		i++;
	}
	printf("\nTong mang la: %d", tong);
	return 0;
}

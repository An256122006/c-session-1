#include <stdio.h>
int main()
{
	float a, b, tong, hieu, thuong, tich;
	printf ("moi nhap so a:");
	scanf ("%f" , &a);
	printf ("moi nhap so b:");
	scanf ("%f" , &b);
	tong =a + b;
	hieu =a - b;
	thuong =a / b;
	tich =a * b;
	printf ("tong %f va %f là:", a,b);
	printf ("%.f\n" , tong);
	printf ("hieu %f va %f là:", a,b);
	printf ("%.f\n" , hieu); 
	printf ("thuong %f va %f là:", a,b);
	printf ("%.2f\n" , thuong);
	printf ("tich %f va %f là:", a,b);
	printf ("%.f\n" , tich);
	return 0;  
 } 

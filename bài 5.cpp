#include <stdio.h>
int main()
{
	int a; 
	printf ("moi nhap gia tri a:");
	scanf ("%d" , &a);
	if (a<4)
	{
		printf ("%d khong dat",a); 
	 } 
	 else
	 if (a>5 && a<6)
	{
		printf ("%d dat",a); 
	 } 
	  {
	  	if (a>6 && a<=8) 
	 printf ("%d kha ",a); 	
	 }
	  {
	  	if (a>8 && a<=9) 
	 printf ("%d gioi ",a); 	
	 }
	  {
	  	if (a>9 && a<=10) 
	 printf ("%d xuat xac ",a); 	
	 }
	 return 0; 
 } 

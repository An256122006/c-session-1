#include <stdio.h>
int main()
{
	float a, b, x;
	printf ("moi nhap so a:");
	scanf ("%f" , &a);
	printf ("moi nhap so b:");
	scanf ("%f" , &b);
	if (a!=0)
	{
	 x=-b / a;
	 printf ("phuong trinh co nghiem là : x = %.f", x);	
	 } else {
		if (b == 0)
		{
		 printf ("phuong trinh co vo so nghiem");	
    }
    else {
    	 printf ("phuong trinh co vo nghiem");
    }
	 } 
return 0; 
}

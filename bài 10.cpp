#include <stdio.h>
int main()
{
	int a, tram, chuc, don_vi, b; 
	printf ("moi nhap ba so bat ky :"); 
	scanf ("%d", &a);
	if (a>100 && a<999) 
	{
		tram = a / 100;
		chuc = (a/10) % 10;
		don_vi=a % 10;
		b = don_vi*100+chuc*10+tram; 
		printf ("so dao nguoc là :%d", b); 
	} else
	{
		printf ("so khong hop le"); 
	 } 
	return 0;	
	}
	

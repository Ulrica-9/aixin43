#include <stdio.h>
int main()
{
	int year,a;
	scanf ("%d",&year);
   if(year%4!=0)
	   a=0;
   else
       if (year%100!=0)
		   a=1;
	   else
		   if(year%400!=0)
              a=0;
		   else
			   a=1;
	  printf("����Ƿ�Ϊ����:\n");
		  if (a)
			  printf("year=%dΪ����",year);
			  else 
			  printf("year=%d��������",year);
	   return 0;

}

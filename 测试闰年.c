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
	  printf("输出是否为闰年:\n");
		  if (a)
			  printf("year=%d为闰年",year);
			  else 
			  printf("year=%d不是闰年",year);
	   return 0;

}

#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char label[5][20]={"name","age","sex","qualification"},a[5][10];
	for(i=0;i<4;i++);
	{
		printf("\n enter your string %s",label[i]);
		fgets(a[i]);
		
	}
	for(i=0;i<4;i++)
	printf("%s is your %s\n",a[i],label[i]);
	getch();
}


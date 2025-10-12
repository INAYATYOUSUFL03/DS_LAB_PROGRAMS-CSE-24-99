#include<stdio.h>
int main()
{
	char str1[]="HELLO";
	char str2[]="HELLO ALIENS";
	int i=0,isEqual=1;
	for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
	{
		if (str1[i]!=str2[i]){
			isEqual=0;
			break;
		}
	}
	if(isEqual)
	printf("the strings are equal");
	else
	printf("the strings are NOT equal");
	return 0;
}

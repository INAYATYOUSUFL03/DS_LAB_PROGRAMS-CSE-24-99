#include<stdio.h>
int main(){
	char str1[100]="CHOCOLATE";
	char str2[]="CAKE";
	int i=0,j=0;
	while(str1[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	printf("CONCATENATED STRING is %s\n",str1);
	return 0;
}

#include<stdio.h>
int max(int*);
int main()
{
    int a[4]={ 23,45,1,85};
    int m;
    m=max(a);
    printf(" greatest no. is =%d",m);
	   	
}
int max(int *p[])
{
	int i,maxi;
	
	maxi =*p[0];
	for(i=0;i<4;i++)
	{
     	if(*p[i]>maxi)
     	   maxi=*p[i];
	}
	return(maxi);
}

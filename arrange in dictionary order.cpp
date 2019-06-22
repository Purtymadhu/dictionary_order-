#include<stdio.h>
#include<string.h>
int main()
{
	int n,size,round,i,r;
	
	printf("Enter the number of string you want:\n");
	scanf("%d",&n);
	printf("Enter the length of the string:\n");
	scanf("%d",&size);
	char str[n][size];
	char  s[size];
	printf("\n Enter string :\n");
	for(i=0;i<=n;i++)
	{
		gets(str[i]);
	}
	for(round=0;round<n;round++)
	{
		for(i=0;i<n-round;i++)
		{
			r=strcmp(str[i],str[i+1]);
			if(r>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],s);		
			}
		}
	}
	printf("\nString in dictionary order:\n");
	for(i=0;i<=n;i++)
	{
		puts(str[i]);
	}
}

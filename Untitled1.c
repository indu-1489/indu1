#include<stdio.h>
#include<string.h>
int main()
{
	char pt[100];
	int key,len;
	printf("\n enter the plain text:");
	scanf("%[^\n]s",pt);
	len=strlen(pt);
	printf("\n enter the key");
	scanf("%d",&key);
	int i,j=0,k=0,l;
	char arr[key][len];
	for(i=0;i<key;i++)
	{
		for(j=0;j<len;j++)
		{
			arr[i][j]='0';
		}
	}
	j=0;
	while(j<len)
	{
		i=0;
		if(i==0)
		{
			for(i=0;(i<key)&&(pt[k]!='\0');i++)
			{
				//printf("\n the i is:%d",i);
				arr[i][j]=pt[k];
				printf("\n the character at index %d in plain text is:%c",k,pt[k]);
				printf("\n The character at %d and %d is %c ",i,j,arr[i][j]);
				k++;
				j++;
			}
		}
		printf("\n");
		//printf("\n Now is i :%d",i);
		if(i==key)
		{
			l=i-2;
			for(i=l;(i>0)&&(pt[k]!='\0');i--)
			{
				arr[i][j]=pt[k];
				printf("\n the character at index %d in plain text is:%c",k,pt[k]);
				printf("\n The character at %d and %d is %c ",i,j,arr[i][j]);
				//printf("\n The character at %d and %d is %c ",i,j,arr[i][j]);
				k++;
				j++;
			}
		}
	}
	printf("\n");
	for(i=0;i<key;i++)
	{
		for(j=0;j<len;j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n The cipher text is:");
	for(i=0;i<key;i++)
	{
		for(j=0;j<len;j++)
		{
			if(arr[i][j]!='0')
			{
				printf("%c",arr[i][j]);
			}
		}
	}
	printf("\n Now decryption:");
	printf("\n the plain text after decryption is:");
	j=0;
	i=0;
	int count=0;
	while(j<len)
	{
		i=0;
		if(i==0)
		{
			for(i=0;(i<key)&&(count!=len);i++)
			{
				printf("%c",arr[i][j]);
				j++;
				count++;
			}
		}
		if(i==key)
		{
			l=i-2;
			for(i=l;(i>0)&&(count!=len);i--)
			{
				printf("%c",arr[i][j]);
				j++;
				count++;
			}
		}
	}
	return 0;
}

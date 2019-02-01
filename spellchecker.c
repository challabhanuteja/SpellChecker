#include<stdio.h>
#include<string.h>
int strcompare(char a[],char b[])
{
	int x=strlen(a)-1,i;
	int y=strlen(b),k=0;
	//printf("%d %d\n",x,y);
	if(x!=y)
	return 0;
	else
	{
		for(i=0;i<x;i++)
		{
			//k++;
			//printf("%d ",k);
			if(a[i]!=b[i])
			return 0;
			
		}
		
		return 1;
	}
	//return 0;
}
void suggestions(char a[])
{
	FILE *d;int n=strlen(a);char ch[10];
	d=fopen("C:/Users/BHANU/Desktop/DS project/dictionary1000.txt","r");
	while(!feof(d))
	{
		fgets(ch,10,d);
		//printf("%d %d\n",strlen(a),strlen(ch));
		//printf("%c ",ch[0]);
		if(strlen(a)+1==strlen(ch))
		{
			//printf("xxxxxxxxxxxxxxxxx%d ",strcmp(a,ch));
			//printf("xxxxxxxxxxxxxxxx");
			//printf("%d %d",strlen(a),strlen(ch));
				if(a[0]==ch[0])
				printf("%s",ch);
				
		}
//		else if(a[0]<ch[0])
//		{
//			break;	
//		}	
	}
}

int main()
{
	char ch[10],sentence[1000];int temp=0,i=0,n,k=0,s=0,l=0;
	FILE *d;
	d=fopen("C:/Users/BHANU/Desktop/DS project/dictionary1000.txt","r");
	printf("Enter any sentence:");
	scanf("%[^\n\t]s",sentence);
	n=strlen(sentence);
	//printf("%d",n);
//	for(i=0;i<n;i++)
//	{
//		if(sentence[i]==' ')
//		s++;
//	}
	i=0;
printf("Suggestion:\n");
while(i<n)
	{
	
	
		char t[10];int j=0;
		for(;sentence[i]!=' ';i++,j++)
		{
			temp++;
			if(sentence[i]==' ')
			{l++;
			break;
			}
			else
			t[j]=sentence[i];
			
		}t[j]='\0';
		i++;
		//printf("%s\n",t);
		
		
		k=0;
		d=fopen("C:/Users/BHANU/Desktop/DS project/dictionary1000.txt","r");
	while(!feof(d))
	{
		fgets(ch,10,d);
		
		if(strcompare(ch,t)==0)
		{
		 k++;
		 continue;
		}
		else
		{
			k=0;
			break;
			
		}
		
	}
	

	/*//	if(k==0)
//	printf("correct ");
//	else
//	printf("error ");
	NEXT MODULE STARTS FROM HERE*/
	
	if(k!=0)
	{
		printf("for %s\n",t);
		suggestions(t);
		s++;
	}
	
	
	
}
 if(s==0)
 printf("No Suggestions");
//while(!feof(d))
//	{
//		printf("%s",fgets(ch,10,d));
//		k++;
//		printf("%d ",k);
//		
//	}
return 0;	
}

#include<stdio.h>
#include<string.h>
int strcompare(char a[],char b[])
{
	int x=strlen(a)-1,i;
	int y=strlen(b),k=0;
	if(x!=y)
	return 0;
	else
	{
		for(i=0;i<x;i++)
		{
			if(a[i]!=b[i])
			return 0;	
		}
		
		return 1;
	}
}
void suggestions(char a[])
{
	FILE *d;int n=strlen(a);char ch[10];
	//dictionary1000.txt is the text file in which 1000 word with correct spelling are stored. 
	//dictionary1000.txt is also uploaded along with this source code.
	//this project not only works with 1000 words you can add any number of words in that text file, it will work just fine.
	d=fopen("C:/Users/BHANU/Desktop/DS project/dictionary1000.txt","r");//here paste the location of dictionary1000.txt in ur computer.
	while(!feof(d))
	{
		fgets(ch,10,d);
		if(strlen(a)+1==strlen(ch))
		{
				if(a[0]==ch[0])
				printf("%s",ch);
		}	
	}
}

int main()
{
	char ch[10],sentence[1000];int temp=0,i=0,n,k=0,s=0,l=0;
	FILE *d;
	d=fopen("C:/Users/BHANU/Desktop/DS project/dictionary1000.txt","r");//here paste the location of dictionary1000.txt in ur computer.
	printf("Enter any sentence:");
	scanf("%[^\n\t]s",sentence);
	n=strlen(sentence);
	i=0;
printf("Suggestion:\n");
while(i<n)
	{
		char t[10];int j=0;
		for(;sentence[i]!=' ';i++,j++)//breaking the string into words. word is being stored in t.
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
		k=0;
		d=fopen("C:/Users/BHANU/Desktop/DS project/dictionary1000.txt","r");//here paste the location of dictionary1000.txt in ur computer.
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
	if(k!=0)
	{
		printf("for %s\n",t);
		suggestions(t);
		s++;
	}
	
	
	
}
if(s==0)
 printf("No Suggestions");
return 0;	
}

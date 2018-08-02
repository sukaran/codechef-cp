#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
	int i;
	
	
	char s[100];
	for(i=0;i<strlen(s);i++)
	{
		if(s=" ")
		
		
	}
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
		s0[0]=toupper(s0[0]);
		s1[0]=toupper(s1[0]);
		s2[0]=toupper(s2[0]);
	
	
	
		cout<<s2[0]<<"."<<s1[0]<<"."<<s0;
	
	
	}

	}
	}#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{   char str[1000];
    int temp,i,ns;
    //ns is no.of strings;
    scanf("%d\n",&ns);
    while(ns-- ){
        gets(str);
        temp=0;
        for(i=0;i<strlen(str);i++){
            if(str[i]==' '){
                printf("%c. ",toupper(str[temp]));
                temp=i+1;
            }
        }
        printf("%c",toupper(str[temp]));
        for(i=temp+1;i<strlen(str);i++)
            printf("%c",tolower(str[i]));
    printf("\n");
    }
    return 0;
} 

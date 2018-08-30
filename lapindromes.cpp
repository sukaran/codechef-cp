#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);

	while(t--){
		char S[1002];
		scanf("%s",S);

		int A[26],B[26];

		for(int i=0; i<26; i++){
			A[i]=0;
			B[i]=0;
		}

		int len=strlen(S);

		if(len%2==0){
			for(int i=0; i<len/2; i++){
				A[S[i]-'a']++;
			}
			for(int i=len/2; i<len; i++){
				B[S[i]-'a']++;
			}
		}
		else if (len%2==1){
			for(int i=0; i<len/2; i++){
				A[S[i]-'a']++;
			}
			for(int i=len/2+1; i<len; i++){
				B[S[i]-'a']++;
			}
		}

		int temp=0;

		for(int i=0; i<26; i++){
			if(A[i]!=B[i]){
				printf("NO\n");
				temp=1;
				break;
			}
		}

		if(temp!=1){
			printf("YES\n");
		}
	}
	return 0;
}

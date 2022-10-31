//reverse a string tc : O(n), sc: O(n)

#include <stdio.h>
int reverse(char *s,char *r){
	int l = 0,i;
	while(s[l] != '\0')
		l++;

	for( i = 0;i < l;i++){
		r[i] = s[l-i-1];
	}
	r[i] = '\0';
	return 0;
}
int main(){
      char s[100],r[100];
      printf("enter the string: ");
      scanf("%[^\n]s",s);
      reverse(s,r);
      printf("%s\n",r);
}

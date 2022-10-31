//reverse a string using recursion

#include <stdio.h>
#include <string.h>
void reverse(char *s,int begin,int end){
	char c;
	if(begin >= end) return ;
	c = s[begin];
	s[begin] = s[end];
	s[end] = c;
	reverse(s,++begin,--end);
}
int main(){
	char s[100];
	printf("enter the string: ");
	scanf("%[^\n]s",s);
	reverse(s,0,strlen(s)-1);
	printf("%s\n",s);     
}

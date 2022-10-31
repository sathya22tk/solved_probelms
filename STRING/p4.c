//reverse a string using pointer

#include <stdio.h>
#include <string.h>
int FindLenth(char *s){
	int i,count = 0;
	for(i = 0;i != '\0';i++)
		count++;
	return count;
}
void reverse(char *s){
	int i,len;
	char begin
	len = FindLenth(s);

}
int main(){
	char s[100];
	printf("enter the string: ");
	scanf("%[^\n]s",s);
	reverse(s);
	printf("%s\n",s);
}

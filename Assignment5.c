#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   printf("Enter a string: ");
   scanf("%[^\n]", str);  // read string with spaces
   printf("The length of the string is %d\n", strlen(str));
   return 0;
}

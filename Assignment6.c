#include <stdio.h>

int main() {
   char name[100];
   printf("Enter your name: ");
   scanf("%[^\n]", name);  // read name with spaces
   printf("Your name in double quotes is \"%s\"\n", name);
   return 0;
}

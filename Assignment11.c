#include <stdio.h>

int main() {
   int hour, minute;
   printf("Enter the time in the format HH:MM: ");
   scanf("%d:%d", &hour, &minute);

   printf("%d Hour and %d Minute\n", hour, minute);

   return 0;
}

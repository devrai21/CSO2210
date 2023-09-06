#include <stdio.h>
#include <stdlib.h>

   int main( int argc, char * argv[] )
   {
      printf( "Enter your name: ");
      char userName[15];
      gets(userName);
      printf("Hello, %s", userName);
   }

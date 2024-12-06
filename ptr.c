#include <stdio.h>

int main()
{
   char str[100],*pstr;
   int chars=1,words=1;
   printf("\nEnter the string");
   gets(str);
   pstr=str;
   while(*pstr!='\0')
   {
       
       if(*pstr==' ' && *(pstr+1)!=' ')
       words++;
       chars++;
       pstr++;
   }
printf("\nThe string is:");
puts(str);
printf("\nNumber of character=%d",chars-1);
//printf("\nNumber of lines=%d",lines);
printf("\nNumber of words=%d",words);


    return 0;
}

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

isNumber(char number[]);

int main(int argc, string argv[])
{
 if (argc != 2)
  {
   printf("Usage: ./ceasar key\n");
   return 1 ;
  }
 else
  {
    if (is_number(argv[1]))
    {
     printf("Usage: ./ceasar key\n");
     return 1 ;
    }
    else
     {
      int k = atoi(argv[1]);
     
      string s = get_string("plaintext: ");
     
      for (int i = 0, n = strlen(s); i < n; i++)
        {
         if (islower(s[i]))
          {
           printf("%c", ((s[i]-97 + k) % 26)+97) ;
          }
         else
         {
          if (isupper(s[i]))
          {
           printf("%c", ((s[i]-65 + k) % 26)+65) ;
          }
          else
          {
           printf("%c", s[i]);
          }
         }
        }
      }
    }
 
 printf("\n");
 printf("The secret key is %s\n",argv[1]);
 return 0;

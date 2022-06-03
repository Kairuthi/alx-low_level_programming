#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * Description: to print out the alphabet
 *Return: 0
 */
 int main(void)
 {
         char alphabet;
         
         for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
         {       
                 putchar(alphabet);
         }
         putchar('/n');
         return (0);
}         

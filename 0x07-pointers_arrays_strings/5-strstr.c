#include <stdio.h>

/**
 * _strstr - search a string for bytes
 * @haystack:string to be searched
 * @needle:char to be located
 * Return:first occurence of accept
 */


char *_strstr(char *haystack, char *needle)
{

unsigned int hystck_indx = 0, needle_indx = 0;

while (haystack[hystck_indx])
{
while (needle[needle_indx] && (haystack[hystck_indx] == needle[0]))
{
if (haystack[hystck_indx + needle_indx] == needle[needle_indx])
needle_indx++;
else
break;
}
if (needle[needle_indx])
{
hystck_indx++;
needle_indx = 0;
}
else

return (haystack + hystck_indx);

}

return (0);

}

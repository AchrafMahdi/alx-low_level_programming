#include <stdio.h>

/**
 * rev_string - function that reverse a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
int start = 0;
int end = 0;
char temp;
while (s[end] != '\0')
{
end++;
}
end--;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}

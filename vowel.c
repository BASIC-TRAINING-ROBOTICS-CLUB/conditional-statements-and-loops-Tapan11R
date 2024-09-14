#include <stdio.h>

void main()
{
  char CH;
  printf("enter character\n");
  scanf("%c",&CH);
  if(CH=='a'||CH=='A'||CH=='e'||CH=='E'||CH=='i'||CH=='I'||CH=='o'||CH=='O'||CH=='u'||CH=='U')
  {
      printf("it is vowel");
  }
  else
  {
      printf("it is not vowel");
  }
  
}

#include<stdio.h>
#include<string.h>
int main()
{
  char str[100],hf;
  int i=0,j=0,max=0,c=0;
  scanf("%s",str);
  hf = str[0];
  while(str[i]!='\0')
  {
    while(str[j]!='\0')
     {
       if(str[i]==str[j])  
             c++;
        j++;
     }
   if(c>max)
  {	   
     max = c;
    hf =  str[i];
  }
   c=0;
   i++;
  }
  printf("%c =  %d",hf,max);
  return 0;
 }

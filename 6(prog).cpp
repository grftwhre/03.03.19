#include <iostream>

using namespace std;
int find_char(string s, char x)
{
    for (int i=s[x]+1;i<s.length();i++)
    {
        if (x==s[i])
        {
         return 1;
         break;
        }
    }
    else return -1;
}
int func_string()
{
    char s[100]={'/0'};
    char x1='(';
    char x2='[';
    char x3='{';
    char y1=')';
    char y2=']';
    char y3='}';
    char a;
    printf("enter string");
    while(a)
    {
        scanf("%s",&a);
        strcpy(a,s);
    }
    int k1,k2,k3,m1,m2,m3;
    for (int i=0;i<s.length;i++)
    {
        if ((s[i]=x1)
            {
             k1[i]=1;
              if(find_char(s,y1)!=0)
               m1[i]=1;
              else m1[i]=0;
            }
        else
        {
                k1[i]=0;
                m1[i]=1;
        }
        if ((s[i]=x2)
            {
             k2[i]=1;
              if(find_char(s,y2)!=0)
               m2[i]=1;
              else m2[i]=0;
            }
        else
        {
                k2[i]=0;
                m2[i]=1;
        }
        if ((s[i]=x3)
          {
            k3[i]=1;
             if(find_char(s,y3)!=0)
              m3[i]=1;
             else m3[i]=0;
          }
        else
        {
                k3[i]=0;
                m3[i]=1;
        }
    }
 int res=0;
  for (int k=0;k<s.length;k++)
  {
      if((k1[k]==m[k])&&(k2[k]==m2[k]))
      {
          if(k3[k]==m3[k])
            res++;
      }
      else break;
  }
  if (res==s.length)
    return 1;
  else return -1;
}

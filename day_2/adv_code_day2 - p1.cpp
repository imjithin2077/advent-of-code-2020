#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i=0,j,k=0,l,m,typenum,countl = 0,minimum,maximum, valid=0 ;
    char sent[100],num[100],num1[100],letter;
    for(l=0;l<1000;l++)
        {
            gets(sent);
            //for(j=0;sent[j]!='\0';j++)
              //  {
                    while(sent[i]!='-')
                {
                  num[i] = sent[i];
                  i++;
                }
                typenum = std::atoi(num);
                minimum = typenum;
                i=i+1;
            while(sent[i]!=' ')
                {

                  num1[k] = sent[i];
                  i++;k++;
                }
                typenum = std::atoi(num1);
                maximum = typenum;

             i=i+1;
             letter = sent[i];
             i=i+3;
             while(sent[i]!='\0')
                {
                  if(letter == sent[i])
                  {
                      countl++;
                  }
                  i++;
                }

            if(countl<=maximum&&countl>=minimum)
               {
                   valid++;
               }
              //  }
             // cout<<endl<<maximum<<endl<<minimum<<letter;
i=0,j=0,countl=0,k=0;
for(m=0;m<10;m++)
{
    num[m] = 0;
    num1[m] = 0;
}
        }
        cout<<"Valid statements are = "<<valid;
    return 0;
}

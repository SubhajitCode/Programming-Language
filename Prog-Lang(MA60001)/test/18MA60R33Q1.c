#include<stdio.h>
#include<string.h>
void INPUT(char string[])
{
    gets(string);
}
void UPPER(char string[],char string2[],int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(string[i]>'a' && string[i]<'z')
        {
            string2[i]=string[i]-32;
        }
        else
        {
            string2[i]=string[i];
        }
    }

}
void TOOGLE(char string[],char string2[],int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(string[i]>'a' && string[i]<'z')
        {
            string2[i]=string[i]-32;
        }
        if(string[i]>'A' && string[i]<'Z')
        {
            string2[i]=string[i]+32;
        }
        else
        {
            string2[i]=string[i];
        }
    }


}
void REVERSE(char string[],char string2[],int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        string2[i]=string[length-i-1];
    }
    string2[i]='\0';

}
void main()
{
    char string[2000],string2[2000];
    INPUT(string);
    int length=strlen(string);
    REVERSE(string,string2,length); 
    puts(string2);
    UPPER(string,string2,length);
    puts(string2);
    TOOGLE(string,string2,length);
    puts(string2);
}
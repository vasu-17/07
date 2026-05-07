#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int write_to_file(char *str)
{
    char buffer[307];

    strcpy(buffer,str);
    fwrite(buffer, sizeof(char), strlen(buffer), fopen("index.cgi", "w"));
    
    return 1;
}

int main(int argc,char **argv)
{
    char str[800];
    FILE *source;
    source = fopen("source.txt","r");
    fread(str,sizeof(char),800,source);
    write_to_file(str);
    printf("returned properly\n");
    return 1;
}

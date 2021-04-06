#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "head.h"
info* arr;
int read(char *file_name)
{
   arr=calloc(5,sizeof(info));
   FILE *ft=fopen(file_name,"r");
    if(!ft)
    {
        printf("error");
        return 0;
    } 
    char buff[1024];
    int row_count=0;
    int field_count=0;
    int i=0;
    while(fgets(buff,1024,ft))
    {
        field_count=0;
        row_count++;
        if(row_count==1)
        {
            continue;
        }
        char * token = strtok(buff, ",");
        int j=0;
        while( token != NULL ) {
        if(j==0)
        {
            strcpy((arr+i)->name,token);
        }
        if(j==1)
        {
           strcpy((arr+i)->mail,token);
           
        }
        if(j==2)
        {   strcpy((arr+i)->gitlink,token);
          
        }
        j++;
        //printf("%s",token);
        token = strtok(NULL, ",");
        }        
        i=i+1;
        
      }
    fclose(ft);
   return 1;  
}

int disp(info *temp)
{
    if(temp==NULL)
    {
        return 0;
    }

 
    for(int i=0;i<5;i++)
    {
        printf("%s\n",(temp+i)->name);
        printf("%s\n",(temp+i)->mail);
        printf("%s\n",(temp+i)->gitlink);
    }
    return 1;
}

int compare(const void* p, const void* q)
{
    return strcmp(((info*)p)->name,
                  ((info*)q)->name);
}
int sort(info *temp)
{
    if(temp==NULL)
    {
        return 0;
    }
    qsort(temp, 5, sizeof(info), compare);
    for (int i = 0; i < 5; i++) {
        printf("%s\n",(temp+i)->name);
        printf("%s\n",(temp+i)->mail);
        printf("%s\n",(temp+i)->gitlink);

    }
    return 1;

}

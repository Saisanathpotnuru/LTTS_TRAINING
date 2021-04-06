#ifndef __head__
#define __head__
typedef struct info
{
   char name[100];
   char mail[100];
   char gitlink[100];
} info;
extern info *arr;
int read(char* filename);
int disp(info *temp);
int sort(info *temp);
#endif

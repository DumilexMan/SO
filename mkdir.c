#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <errno.h>

char* pwd_()
{

    char *abs_path;

    abs_path = realpath("./",NULL);

    return abs_path;
}

void mkdir_(char *nume_fisier)
{
    char *abs_path = pwd_();
    char *new_path;
    char *sl="/";
    new_path = (char *) malloc(2 + strlen(abs_path) + strlen(nume_fisier) );
    strcpy(new_path,abs_path);
    strcat(new_path,"/");
    strcat(new_path,nume_fisier);
    //printf("%s\n",new_path);
    mkdir(new_path,0777);
}

int main()
{
    
    //printf("%s\n",pwd_());

    //char* c="ana";

    mkdir_("ana");

    return 0;
}

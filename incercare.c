#include <stdio.h>
#include <conio.h>


void create_folder() {
   int check;
   char dirname[128];
   clrscr();
   printf("Enter a directory path and name to create a folder (C:/name):");
   fgets(dirname, sizeof(dirname), stdin);
   check = mkdir(dirname);

   if (!check)
     printf("Folder created\n");

   else {
     printf("Unable to create folder\n");
     exit(1);
   }
   getch();
   system("dir/p");
   getch();
 }

int main()
{

create_folder();
}

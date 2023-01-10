#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>



int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Numar incorect de argumente\n");
        return 1;
    }

   int f1 = open(argv[1], O_RDONLY);
   if (f1 <  0)
   {
      perror("Nu exista fiserul\n");
       return 1;
   }
   rename(argv[1], argv[2]);

    return 0;
}

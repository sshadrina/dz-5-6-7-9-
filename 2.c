#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

int main(int argc,char** argv){
  if(argc == 1){
        printf("Print -a for menu\n");
        return 0;
    }

    char* opts = "ho:c";
    char* filename;
    int opt;
    while( (opt = getopt(argc, argv, opts)) != -1) {
        switch (opt){
            case 'h':{
               printf("-h Menu\n");
   		printf("-o Out file name\n");
   		printf("-c Special mode\n");
            }
            case 'o':{
               filename=optarg;
                printf("Output path: %s\n",filename);
                break;
            }
            case 'c': {
                printf("No output mode\n");
                break;
            }
        }
    }

}

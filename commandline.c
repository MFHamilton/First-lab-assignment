#include  <stdio.h>

int main(int argc, char *argv[]){
    int i;
    printf("There were %d command line arguments provided:\n", arg_count);
    for(i = 0; i < arg_count; i++){
        printf("argument #%d\t-\t%s\n", i, arg_list[i]);
    }
}
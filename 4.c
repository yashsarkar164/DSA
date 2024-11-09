#include<stdio.h>
int main(){
    FILE *file;
    char content[1000];
    file = fopen("shape.txt","w");
    if(file==NULL){
        printf("The file does not exist");
        return 1;
    }
    fprintf(file,"It is a text.");
    fclose(file);


    file = fopen("shape.txt", "r");
    if (file == NULL) {
        printf("The file does not exist\n");
        return 1;
    }

    printf("Reading from the file:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);
    
    return 0;
}
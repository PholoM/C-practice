#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* TO_LOWER (char sample[]) {
    char *lower_case;

    lower_case = (char*)malloc(200* sizeof(char));

    int i=0;

    do{
        lower_case[i] = tolower(sample[i]);
        i++;
    }while (sample[i] !='\0');
    lower_case[i] = '\0';
    
    return lower_case;
}



int main() {

    printf("Enter the keyword for the course to search for: \n");
    char word[50];
    gets(word);


    FILE *myFile;

    myFile = fopen("courses.txt", "r");
    
    if (myFile == NULL) {
        printf("Error opening file \a");
        return -1;
    }

    else {
        char readline [200];
        int counter=0;
        int matches = 0;

        while(fgets(readline, 200, myFile ) != NULL) {
            counter++;
            if ( strstr(TO_LOWER(readline), TO_LOWER(word))) {
                printf("Line %d: %s", counter, readline);
                matches++;
            }

            

        }

        printf("\nResults: %d out of %d found.", matches, counter);


        fclose(myFile);
    }



    return 0;
}
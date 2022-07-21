#include <stdio.h>
#include <string.h>



char* substring(char *destination, const char *source, int begin_index, int lenght_of_string)
{
    while (lenght_of_string > 0)
    {
        *destination = *(source + begin_index);

        destination++;
        source++;
        lenght_of_string--;
    }

    *destination = '\0';

    return destination;
}


int main(int arg_length, char **argv){
    char result[1025] = "";


    for (int i = 1; i < arg_length; ++i) {
        char destination[1025] = "";
        substring(destination, argv[i], 1,(int)strlen(argv[i]));
        strcat(result,destination);
    }
    int new_pos = (int)strlen(result)/2;
    char destination[1025] = "";
    substring(destination, result, new_pos,(int)strlen(result));
    strcat(result,destination);


    printf("%s", result);
    return 0;
}
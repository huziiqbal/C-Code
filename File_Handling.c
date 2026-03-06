// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr;
//     char ch;
//     char name[20] = "huzaifa";
//     char item[20] = "pencil";
//     char outlet[20] = "Gr.noida";
//     char placeholderr[50];
//     int i ;

//     ptr = fopen("letter.txt", "a+");
//     while ((ch = fgetc(ptr)) != EOF)
//     {
//         if (ch == '{')
//         {
//             i = 0;
//             while ((ch = fgetc(ptr)) != '}')
//             {
//                 placeholder[i] = ch;
//                 i++;
//             }
//             pointer[i]='\0';
//             if (strcmp(placeholder,"name") == 0)
//             {
//                 printf("%s", name);
//             }
//             else if (strcmp(placeholder,"item") == 0)
//             {
//                 printf("%s", item);
//             }
//             else if (strcmp(placeholder,"outlet") == 0)
//             {
//                 printf("%s", outlet);
//             }
//         }
//         else
//         {
//             printf("%c", ch);
//         }

//     }
//     fclose(ptr);
//     return 0;

// }

#include <stdio.h>
#include <string.h>
int main(){
    char placeholder[50];
    int i;
    char ch;
    char name [20] = "Huzaifa";
    char city[20] = "Muzaffarnagar";
    FILE* ptr;
    ptr = fopen("text2.txt","a+");
     while ((ch = fgetc(ptr)) != EOF){
        if (ch >= 'A' && ch <= 'Z') {
            i=0;
            while (ch>= 'A' && ch <= 'Z'){
                placeholder[i]=ch;
                      ch = fgetc(ptr);
                i++;
            }
            placeholder[i]='\0';
            if (strcmp(placeholder,"NAME") == 0)
            {
                printf("%s", name);
            }
            else if (strcmp(placeholder,"CITY") == 0)
            {
                printf("%s.", city);
            }
        }
        else
        {
        printf("%c",ch);
        }
}
fclose(ptr);
}

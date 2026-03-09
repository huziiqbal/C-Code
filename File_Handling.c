// //Q.Customized message for customer using file handling//
// //Date : 06/03/2026//
// /*File Content: Thanks {name} for purchasing {item} form our outlet {outlet}.
// please visit our outlet {outlet} for any kind of problems.
// we plan to serve you again soon. */
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr;
//     char ch;
//     char name[20] = "huzaifa";
//     char item[20] = "pencil";
//     char outlet[20] = "Gr.noida";
//     char placeholder[50];
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
//             placeholder[i]='\0';
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
// //Q.Replacement in File using file I/O functions//
// //Date: 07/03/2026//
// //File Content: Hello NAME welcome to CITY.//
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char placeholder[50];
//     int i;
//     char ch;
//     char name [20] = "Huzaifa";
//     char city[20] = "Muzaffarnagar";
//     FILE* ptr;
//     ptr = fopen("text2.txt","a+");
//      while ((ch = fgetc(ptr)) != EOF){
//         if (ch >= 'A' && ch <= 'Z') {
//             i=0;
//             while (ch>= 'A' && ch <= 'Z'){
//                 placeholder[i]=ch;
//                       ch = fgetc(ptr);
//                 i++;
//             }
//             placeholder[i]='\0';
//             if (strcmp(placeholder,"NAME") == 0)
//             {
//                 printf("%s", name);
//             }
//             else if (strcmp(placeholder,"CITY") == 0)
//             {
//                 printf("%s.", city);
//             }
//         }
//         else
//         {
//         printf("%c",ch);
//         }
// }
// fclose(ptr);
// }


// //Q. WORDS AND CHARACTERS COUNTING FROM A FILE//
// //Date : 07/03/2026//
// //File Content:"Hello NAME welcome to CITY."//

// #include <stdio.h>
// #include <string.h>
// int main() {
// 	int i;
// 	char ch;
// 	int words = 0;
// 	int characters=0;
// 	char str[50];
// 	FILE *ptr;

// 	ptr = fopen("text2.txt","r");
// 	while((ch=fgetc(ptr)) != EOF) {
// 		characters +=1;
// 	}
// 	printf("Total number of characters in the file is %d\n",characters);
// 	fclose(ptr);
// 	ptr = fopen("text2.txt","r");
// 	while (fscanf(ptr,"%s",str) != EOF)
// 	{
// 		words = words+1;
// 	}
// 	fclose(ptr);
// 	printf("Total number of words in the file is %d", words);

// }


// //REMOVE ALL DIGITS FROM A FILE THAT CONTAINS ALPHABETS AND DIGITS BOTH//
// //Date : 07/03/2026//
// //FIle Content:abc123def45//
// #include <stdio.h>
// #include <ctype.h>
// int main() {
// 	int i;
// 	char ch;
// 	char num[50];
// 	char alph[50];
// 	FILE *ptr;
//     ptr = fopen("text2.txt", "r");
//     i=0;
//     while((ch=fgetc(ptr)) != EOF){
//         if (isalpha(ch)){
//             alph[i]=ch;
//             i++;
//         }
//     }
//     alph[i] = '\0';
//     fclose(ptr);
//     printf("%s",alph);
// }

// // CHANGING FROM LOWER CASE TO UPPER CASE
// // DATE = 08/03/2026
// // File Content: abcdefghijklMNopqrstuvwxyz //
// #include <stdio.h>
// int main() {
//     int ch;
//     FILE *ptr;
//     ptr = fopen("text2.txt","r");
//     while ((ch=fgetc(ptr))!=EOF){
//         if (ch>='a'  && ch <= 'z' ){
//         ch = ch - 32;
//         printf("%c",ch);
//         }
//         else
//         printf("%c",ch);
//     }
//     fclose(ptr);
// }

//Count Frequency of Each Character
//Date:09/03/2026
// File Content:aabbccdddeffghijjj//
#include <stdio.h>
int main() {
    char ch;
    int count[123] = {0};
    FILE *ptr;
    ptr = fopen("text2.txt","r");
    while ((ch = fgetc(ptr))!= EOF){
        if ((ch>='a'  && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
            count[ch]++;
        }
    }
    fclose(ptr);

    for (int i =0 ; i < 123 ; i++){
        if (count[i] !=0){
            printf("%c : %d\n",i,count[i]);
        }
    }
}

// there is an array of 123 size , everytime any alphabet is detected iin  the file , the frequency as value of the index of number of the ascii value associated with that character stored , as if a is detected then on the index number 65 of the array the frequency is stored and frequency is increased till there is a , means the value of the index number [ascii od char] is the frequency of that ascii character , and when the charecter is called through %c , the ascii value is converted to characte of that ascii value , and returned with its value as frequency //

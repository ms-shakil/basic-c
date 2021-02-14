// take input and print out put
int main() {
    char str[25];
    scanf("%s",str);
    printf("%s",str);
    return 0;
}


// take input and print input 2nd ways
int main()
{
    char str[30];
    gets(str);
    puts(str);
    return 0;
}


// find string length
#include <stdio.h>
int main() {
    char str[30];
    int i , length;
    gets(str);
    length=0;
    for(i=0;str[i]!='\0';i++){
        length = length +1;
    }
    printf("length of %s is %d",str,length);
    return 0;
}


// string reverse
#include <stdio.h>
int main() {
    char str[30];
    int i , length;
    gets(str);
    length=0;
    for(i=0;str[i]!='\0';i++){
        length = length +1;
    }
    // printf("length of %s is %d",str,length);
    for(i=length; i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}


// string reverse in new string array
#include <stdio.h>
int main() {
    char str[30], str2[30];
    int i , j,length;
    gets(str);
    length=0;
    for(i=0;str[i]!='\0';i++){
        length = length +1;
    }
    for(i=length,j  = 0 ;i>=0;i--){
        str2[j]=str[i-1];
        j+=1;
    }
    str2[j]="\0";
    printf("%s\n",str2);
    return 0;
}


// addtion two string 
#include <stdio.h>
int main()
 {
    char str[30] ="bangla";
    char str2[30]="desh";
    int length =6,i,j;
    for(i =length, j=0;str2[j] !='\0';i++,j++){
        str[i]=str2[j];
    }
    str[i]="\0";
    printf("%s",str);
    
    return 0;
}

// ASCII Table code!
#include <stdio.h>
int main() {
  int i;
  for(i=0;i<256;i++){
   printf("ASCII -%d :%c\n",i,i)   ;
  }
    return 0;
}

// ascii addition
#include <stdio.h>

int main() {
char xx='a';
xx = xx+2;
printf("%c",xx);
    return 0;
}
#include <stdio.h>

int main() {
int xx='a';
xx = xx+2;
printf("%d",xx);
    return 0;
}
// ascii smaller to capitaliz 
#include <stdio.h>
int main() {
int xx='e',XX=xx-'a'+'A';
printf("Capital of %c is %c.",xx,XX);
    return 0;
}


// ***** String array !
#include <stdio.h>
int main() {
   char array[4][20];
   int i;
   for(i = 0; i < 4;i++){
       scanf(" %s",array[i]);
   }
   for(i = 0;i < 4;i++){
       printf("%s\n",array[i]);
   }
    return 0;
}

// 2nd ways
#include <stdio.h>
int main() {
   char array[4][20]={"shakil","payer","mainuddin","fahad"};
   int i;
   
   for(i = 0;i < 4;i++){
       printf("This is %s.\n",array[i]);
   }
    return 0;
}

// *** string library use!

// string length
#include <stdio.h>
#include<string.h>
int main() {
   char array[20]="bangladesh";
   int length = strlen(array);
   printf("Length of %s :%d",array,length);

    return 0;
}
// string addition and find length
#include <stdio.h>
#include<string.h>
int main() {
   char array[20]="bangladesh";
   char array2 [30]="pakistan";
   strcat(array,array2);
   printf("Length of %s :%d",array,strlen(array));

    return 0;
}

// string copy
#include <stdio.h>
#include<string.h>
int main() {
   char array[20]="bangladesh";
   char array2 [30];
   strcpy(array2,array);
   printf(" %s\n%s",array,array2);

    return 0;
}

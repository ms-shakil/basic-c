#include<stdio.h>
//One dimensional Array 
//example one
int main() {
    int arr[3],i;
    for(i =0; i<3;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
}

// example two
#include <stdio.h>

int main() {
    double arr[5]={67.5,74,84,33,90.1};
    int roll;
    
    for(roll=1;roll<=5;roll++){
        printf("roll:%d marks:%lf\n",roll,arr[roll-1]);
    }
}

// two dimensional array or 2D array
// exampl
#include <stdio.h>

int main() {
    double marks[2][5];
    int c,r;
    for(c=0;c<2;c++){
        for(r=0;r<5;r++){
            scanf("%lf",&marks[c][r]);
        }
    }
     for(c=0;c<2;c++){
        for(r=0;r<5;r++){
            printf("class:%d,roll:%d,marks:,%lf\n",c+6,r+1,marks[c][r]);
        }
    }
    
}





// int main()
// {
//     int area[]={1,2,3,4,5,6,7,8,9,10,};
//     int i,j ,temp;
//     for(i =0, j=9;i <5;i++,j--){
//         temp = area[j];
//         area[j] = area[i];
//         area[i] = temp;
//     }
//     for(i = 0; i<10;i++){
//         printf("%d\n",area[i]);
//     }
//     return 0;

// }
// int main()
// {
//     int area[]={1,2,3,4,5,6,7,8,9,10};
//     int i,j ,temp;
//     int area2[10];
//     for(i =0, j=9;i <10;i++,j--){
//         area2[j]= area[i];
//     }
//     for(i=0;i<10;i++){
//         area[i]= area2[i];
//     }
//     for(i = 0; i<10;i++){
//         printf("%d\n",area[i]);
//     }
//     return 0;

// }

#include <stdio.h>

#include <stdio.h>
struct data{
    char name[20];
    char phone[20];
    char gmail[20];
};
int main() {
    struct data a[2];
    int i;
    for(i=0;i<2;i++){
        printf("Enter The name:");
        scanf("%s",a[i].name);
        printf("Enter The phone:");
        scanf("%s",a[i].phone);
        printf("Enter The gmail:");
        scanf("%s",a[i].gmail);
    }
    for(i=0;i<2;i++){
        printf("Name:%s,Phone:%s,Gmail:%S",a[i].name,a[i].phone,a[i].gmail);
    }
    
    return 0;
}
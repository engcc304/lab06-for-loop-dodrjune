/*
    จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
    - หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
    - หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น

    Test case:
        Enter value:
            11
    Output:
        Series: 1 3 5 7 9 11

    Test case:
        Enter value:
            8
    Output:
        Series: 8 6 4 2 0
*/
#include <stdio.h>
int main() {
    int N, I;
    printf("Enter value: ");
    scanf("%d", &N);

    if (N %2 == 1) {
        printf("Series: " );
        for (I = 1; I <= N; I += 2) {
            printf("%d ", I);
        }
    } else {
        printf("Series: " );
        for (I = N; I >= 0; I -= 2) {
            printf("%d ", I);
        }
    }
    //--| YOUR CODE HERE
    return 0 ;
   
    }//end main function


/*Name:Mirza Sumaiya
Roll no:14
UIN: 241A014
Branch:AI&DS*/
#include<stdio.h>
int main(){
int n;
printf("\t\t *** Array Reverser *** \n\n");
// Input the size of the array
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
int *ptr = arr;
printf("Enter the elements of the array:\n");
for (int i=0; i<n; i++) {
printf("%d:", i);
scanf("%d", ptr + i);
}
printf("\nArray elements in reverse order:\n");
for (int i= n - 1; i >= 0; i--) {
printf("%d ", *(ptr + i));
}
printf("\n");
return 0;
}
/*        *** Array Reverser ***
Enter the size of the array: 3
Enter the elements of the array:
0:11
1:77
2:99
Array elements in reverse order:
99 77 11*/

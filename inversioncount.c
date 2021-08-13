//Prateek Pradhan
//This program uses insertion sort

#include<stdio.h>

//Function to count inversion count 
void inversioncount(int array[], int size){
    int curr_ele;
    int arr[size*10][2], k=0;

    //Loop to traverse through array
    for (int i = 1; i < size; i++){
        curr_ele = array[i];
        int j = i-1;

        // Loop to compare the elements
        while(j>=0 && array[j] > curr_ele){
            array[j+1] = array[j];
            arr[k][0] = array[j];
            arr[k][1] = curr_ele;
            k++;
            j--;
        }
        array[j+1] = curr_ele;
    }
    //Prints number of Inversions 
    printf("Number of Inversions: %d\n", k);

    //Prints all the inversionsthat takes place to sort
    for(int x = 0; x<k; x++){
        printf("(%d, ", arr[x][0]);
        printf("%d)\n", arr[x][1]);
    }
}

int main(){
    int size;
    printf("Enter Array Size: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++){
    scanf("%d", &array[i]);
    }
    inversioncount(array, size);
    return 0;
}
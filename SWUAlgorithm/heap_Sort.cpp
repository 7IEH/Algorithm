#include <iostream>


void heap(int* arr,int size) {
    int temp;
    int root;
    for (int i = 1; i < size; i++) {
        int child = i;
        do {
            root = (child - 1) / 2;
            if (arr[child] > arr[root]) {
                temp = arr[child];
                arr[child] = arr[root];
                arr[root] = temp;
            }
            child = root;
        } while (child != 0);
    }
}

int heap_sort(int* arr,int* size) {
    int temp = arr[0];
    arr[0] = arr[*size - 1];
    (*size)--;
    return temp;
}


int main()
{
    int size = 10;
    int arr[10] = { 7,8,10,4,6,5,2,1,3,9 };
    int h_arr[10];


    for (int i = 0; i < size; i++) {
        h_arr[i] = arr[i];
    }

    for (int i = 0; i < 10; i++) {
        heap(h_arr, size);
        arr[i] = heap_sort(h_arr, &size);
        for (int i = 0; i < size; i++) {
            std::cout << h_arr[i] << " ";
        }
        std::cout << std::endl;

    }

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
}


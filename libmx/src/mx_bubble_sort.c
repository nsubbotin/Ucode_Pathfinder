#include "libmx.h"

int mx_strcmp(const char*, const char*);
int mx_bubble_sort(char **arr, int size){
    int c = 0;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (mx_strcmp(arr[j], arr[j + 1]) > 0){
                char *wap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = wap;
                c++;
            }
        }
    }
    return c;
}

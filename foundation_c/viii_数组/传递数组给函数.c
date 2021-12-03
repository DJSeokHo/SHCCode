#include <stdio.h>

void test_function_1(int* param) {


}

void test_function_2(int param[10]) {


}

void test_function_3(int param[]) {


}

/* 函数声明 */
double getAverage(int arr[], int size);


int main() {

    /* 带有 5 个元素的整型数组 */
    int balance[5] = {1000, 2, 3, 17, 50};

    double avg;

    avg = getAverage(balance, 5);

    printf("avg is %f\n", avg);
   
    return 0;
}

double getAverage(int arr[], int size) {
    
    double avg;
    double sum=0;
    
    for(int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    
    avg = sum / size;
    
    return avg;
}
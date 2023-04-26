#include <iostream>
#include <array>

using namespace std;


void imprimirArray(int arr[], const int size) {
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }

}


void bubble_sort(int arr[], const int size) {

    int array[T];
    int tmp;

    for(int i = 0; i < T; i++){
        for(int j = i+1; j < T; j++){
            if(array[i] < array[j]) {
                tmp = array[j];
                array[i] = tmp;
            }
        }
    }
    return array;

}

int main() {

    cout << bubble_sort()
    
    return 0;
}
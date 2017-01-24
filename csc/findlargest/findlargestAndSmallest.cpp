#include <iostream>

using namespace std;

int FindLargest (int arr1[], int size) {
    int largest = arr1[0];
    for(int i = 0; i < size; i++) {
        if(arr1[i] > largest){
            largest = arr1[i];
        }
    }
    return largest;
}
int FindSmallest (int arr1[], int size) {
    int smallest = arr1[0];
    for(int i = 0; i < size; i++) {
        if(arr1[i] < smallest){
            smallest = arr1[i];
        }
    }
    return smallest;
}



int main()
{
    int arr1[] = {2,1,6,4,5};
    //FindLargest(arr1, 5);
    cout << "***************************" << endl;
    cout << "** The largest value is: " << FindLargest(arr1, 5) << endl;
    cout << "***************************" << endl;
    cout << "** while the smallest is: " << FindSmallest(arr1, 5) << endl;
    cout << "***************************" << endl;
    return 0;
}

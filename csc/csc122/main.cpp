#include <iostream>

#include <string>

using namespace std;

int findminidx(string scientist[], int length);
/*{
    int mininx = 0;
    for(int i = 0; i < length; i++) {
        if(scientist[i] < scientist[mininx]){
            mininx = i;
        }
    }
    return mininx;
}

void swap(string scientist[], int i, int indexOfSmallest){
    //int indexOfSmallest = 0;
    string temp = scientist[i];
    scientist[i] = scientist[indexOfSmallest];
    scientist[indexOfSmallest] = temp;
}

*/

void selectionSort(string scientist[], int length){
    int i , minIndex ;
    string indexOfSmallest ;
    for(int i = 0; i < (length-1); i++){
        minIndex = i;
        indexOfSmallest = scientist[i];
        for(int j = i+1; j <length; j++) {
            if (scientist[j] < indexOfSmallest){
                indexOfSmallest = scientist[j];
                minIndex = j;
            }
        }
        /*if( i != indexOfSmallest){
            void swap(string scientist[], int i, int indexOfSmallest);
        } */
        scientist[minIndex] = scientist[i];
        scientist[i] = minIndex;

    }

   // return scientist;
}

int main()

{

    string scientist[7] = { "Newton", "Pascal", "Euler", "Gauss", "Bayes", "Fibonacci", "Turing" };

    cout << scientist[0] << endl;

    cout << scientist[findminidx(scientist, 7)];

    cout<<endl;

    for (int i = 0; i < 7; i++)

    cout << scientist[i] << " ";

    cout << endl;

    for (string name : scientist)

    cout<< name << " ";

    return 0;

}

    int findminidx(string scientist[], int length)

    {

        int mininx = 0;

        for (int i = 1; i < length; i++)

    {

    if (scientist[i] < scientist[mininx])

    mininx = i;

    }

    return mininx;



    }


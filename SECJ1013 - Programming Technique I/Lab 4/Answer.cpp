/*
NAME: NG XUAN YEE 
MATRIC NUMBER: A25CS0291
DATE: 9 JANUARY 2026
*/

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of values:";
    cin>>num;

    // Dynamic memory allocation
    int *arr=new int[num];

    cout<<"Enter values in array:" << endl;
    for (int x=0;x<num;x++) {
        cin>>*(arr+x);  
    }

    // Pointer for total
    int *total = new int;
    *total = 0;

    for (int x=0;x<num;x++) {
        *total+=*(arr+x);
    }

    cout<<"Total of the values in the array is "<<*total<<endl;

    // Delete all the dynamic memory allocation
    delete[] arr;
    delete total;

    return 0;
}


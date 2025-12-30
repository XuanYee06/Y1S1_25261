//NG XUAN YEE
//A25CS0291
//30 DECEMBER 2025

#include <iostream>
using namespace std;
int main(){
    const int SIZE=5; //size of the arrray
    int row[SIZE]={6,2,6,2,6}; //Stor number of X for each row

    for(int i=0;i<SIZE;i++){    
        for(int j=0;j<row[i];j++){
            cout<<"X"; // produce an "E" pattern
        }
        cout<<endl;
    }
    return 0;
}
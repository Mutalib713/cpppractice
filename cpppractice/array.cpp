#include <iostream>
using namespace std;
int main(){
    int numbers[100];
    int count=0;
    int largest;

    while(count<100){
        cout<<"Enter number(-1 to stop): "<<endl;
        cin>>numbers[count];
        
        if (numbers[count]==-1){
            break;
        }
         count++;
    }

    largest = numbers[0];
    
    for (int i=1; i <count; i++){
        if (numbers[i] > largest){
            largest = numbers[i];
        }
    }

    cout<<"The largest number is: "<<largest<<endl;
    return 0;
}
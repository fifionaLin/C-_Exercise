#include<iostream>
#include<string>

using namespace std;

void F(int arr[], int size, int count){

    cout << "[" << count << "] ";    
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
    cout << endl;

    count++;

    for(int i = size-1; i > -1; i--){
        
        if(arr[i] != (i + (9-size) + 1)){
            arr[i]++;
            return F(arr, size, count);
        }else{
            if(i != 0){
                if(arr[i-1] < (i + (9-size))){
                    arr[i-1]++;
                    for(int j = 0; j < (size-i); j++){
                        arr[i+j] = arr[i-1] + j + 1;
                    }
                    return F(arr, size, count);
                }
            }
        }
    }    
}

int main(){
    int arr[10];
    int size = 0;
    int count = 1;
    
    cin >> size;    

    for(int i = 0; i < size; i++){
        arr[i] = i;
    }

    F(arr, size, count);

    return 0;
}

/*題意是要算兩個不超過10的10次方的正整數相加的進位次數*/

#include <iostream>
#include <algorithm>     //要用到max函數

using namespace std;

void divide(int n,int arr[],int &cnt){    //用viod宣告的自訂函數 可以不需要回傳值
    for(cnt = 0;n != 0;cnt++){
        arr[cnt]=n%10;
        n/=10;               // n = n/10
    }
}


int main(){
    int a,b;
    while(cin>>a>>b && (a!=0||b!=0)){
        int lenA, lenB;
        int arrA[11]={},arrB[11]={};
        int sum[12]= {};
        divide(a,arrA,lenA);
        divide(b,arrB,lenB);
        int lenM=max(lenA,lenB);  //比大小，取大的使用，減少運算次數
        int ans = 0;
        for(int i=0;i<lenM;++i){
            sum[i] = sum[i] + (arrA[i]+arrB[i]);    //可能讀到有被加1的sum[i]
            if(sum[i]>=10){
                sum[i] = sum[i] - 10;
                sum[i+1] = sum[i+1] + 1;  //進位後，幫下一個位數的數字+1
                ans = ans + 1;
            }
        }
        if(ans==0)
            cout<<"No carry operation.\n";
        else if(ans==1)
            cout<<"1 carry operation.\n";
        else
            cout<<ans<<" carry operations.\n";

    }
    return 0;
}

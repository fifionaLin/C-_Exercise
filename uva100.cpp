/*考拉茲臆測:指輸入一個正整數，如果是奇數將它乘3在加1，如果是偶數，將它除以2。如此循環最終能得到 1

  而其中經過的計算次數稱為考拉茲長度

  本題則要輸入一組測試資料，輸出裡面考拉茲長度最長的結果

  例如輸入測資為1~10，9的考拉茲長度為20，是裡面最長的，答案則為20*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        cout<<a<<" "<<b<<" ";
        if(a>b){
            int c=a;a=b;b=c;}
        int maxLen=0;
        for(int k=a;k<=b;k++){
            int n=k;int len=1;
            while(true){
                if(n==1)
                    break;
                if(n%2)      //如果n%2有餘數，則n=n*3+1
                    n=n*3+1;
                else n=n/2;  //如果沒餘數則執行else，n=n/2
                len++;
            }
            maxLen = max(maxLen,len);
        }
        cout<<maxLen<<endl;
    }
    return 0;
}

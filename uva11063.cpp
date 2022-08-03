/*題意：
所謂「B2數列」係指一正整數數列 1<= b1 < b2 < b3 ...，其中所有的 bi + bj （i <= j）皆不相等。
您的任務是判別某一數列是否為「B2數列」。*/

#include <iostream>
using namespace std;

int main(){
  int b[1005]={0},t=0,i,j;              //b陣列存放數列的每個數值，t為case的編號
  int n,bl=0;                           //n為數列有多少個數值，bl預設為0代表是B2，被改為1時代表不是B2
  while(cin>>n){                        //輸入數列數值的個數
    for (i=1;i<=n;i++){
      cin>>b[i];                        //迴圈將數值填入b陣列
      if (b[i]<=b[i-1])bl=1;            //若該陣列不是遞增，則不是B2，bl就改為1
    }
    int note[20005]={};                 //note陣列存入相加的b數列值
    if (bl==0){                         //若bl是零的時候開始檢查
      for (i=1;i<=n;i++){
        for (j=i;j<=n;j++){
          if (note[b[i]+b[j]]!=0)bl=1; //如果note陣列已經有該值，則不是B2，bl就改為1
          note[b[i]+b[j]]=1;           //將note陣列中的[b數列相加值]，改為1
        }
      }
    }
    cout<<"Case #"<<++t;
    if (!bl) cout<<": It is a B2-Sequence."<<endl<<endl;
    else cout<<": It is not a B2-Sequence."<<endl<<endl;
  }
  return 0;
}

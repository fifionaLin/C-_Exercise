/*input
輸入的第一列為一個用來表示有幾組測試資料的整數T。

每組測試資料的第一列為整數N ，用來表示所模擬議程的天數。下一列為另一個整數P 表示共有P個政黨，接下來的P列分別為各政黨的“罷會參數”(絕不會為7的倍數)。

output
輸出的每一列表示每一組測試資料所模擬出來的罷會天數(損失多少個工作天)。*/

#include <iostream>
using namespace std;

int main(){
  int h[100],a,b,c;                    //h[i]表示第i個政黨的週期，a為測資組數
  cin>>a;                                //b為總天數，c為政黨數量
  while (a--){
    int day[3651]={};                  //day陣列用來存放該天是否有政黨罷工，初始為0，有罷工就改為1
    cin>>b>>c;
    for (int i=0;i<c;i++){             //迴圈政黨的數量，放入h陣列中，賦值為罷工週期
      cin>>h[i];
      for (int j=h[i];j<=b;j=j+h[i])   //迴圈該政黨的罷工日期來累加，每次迴圈都將該日的day值改為1
        day[j]=1;
    }
    int count=0;                       //count用來計算罷工日數
    for (int j=1;j<=b;j++){            //從第一天算到總天數
      if (j%7==6 || j%7==0) continue ; //遇到假日，跳回迴圈的開頭執行下一項
      if (day[j]==1)                   //若該day值為1，則count+1
        count++;
    }
    cout<<count<<endl;
  }
  return 0;
}

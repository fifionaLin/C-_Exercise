/*Parity
題意：

給定一個十進位整數，並將其轉換為二進位表示法

求二進位表示法中出現1的次數*/

#include <iostream>
#include <stack>              //宣告 推疊 st
using namespace std;

stack <int> st;
int main(){
  int a;                  
  while(cin>>a && a!=0){     //輸入一組測試資料
    int pp=0;                //宣告 計算1數量的變數
    while(a!=0){
      pp = a%2 + pp;
      st.push(a%2);          //將a%2放在st的頂部
      a = a/2;
    }
  cout<<"The parity of ";
  while(st.size()){          //長度不等於0就執行
    cout<<st.top();          //輸出st最上層的內容
    st.pop();                //刪除st最上層的內容
  }
  cout<<" is "<<pp<<" (mod 2)."<<endl;
  }
  return 0;
}

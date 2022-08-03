/*題意是要算出Vito Deadstoney到各個親戚家的最短距離

  取陣列最中間的街號來計算會得出最佳值

  1.先輸入要測試的筆數

  2.輸入親戚的個數

  3.輸入親戚的街號

  4.將親戚街號照順序排列

  5.取得中位數

  6.迴圈加總 : 絕對值(親戚家街號-中位數街號)

  7.印出結果*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;              //將cout,cin,endl設為std
vector<int> num;                  //vector為容器陣列用的函式

int main(){
    int l,c,k;                      //三個變數分別為，測試資料的筆數、親戚個數、親戚街號
    cin >> l;
    while(l--){
        cin >> c;
        num.clear();                  //要記得清除num再開始迴圈
        for(int i = 0;i < c;i++){
            cin >> k;
            num.push_back(k);           //將新的街號加到num陣列
        }
        sort(num.begin(),num.end());  //將num陣列由小到大排序
        int mid = num[c/2];           //取中位數(陣列最中間的數值)
        int sum = 0;
        for(int i = 0;i < c;i++){
            sum+=abs(num[i]-mid);       //迴圈加總
        }
        cout << sum << endl;          //印出最佳值
    }
    return 0;
}

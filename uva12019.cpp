/*題意:給日期算出是星期幾

  1.根據題目測資推算，2011/01/06是星期四，所以2010/12/31是星期五，並以此為起點

  2.(迴圈算出月份總天數，再加上該月已過的天數)，除以7，若餘數為0，則該日為星期日

 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};  //從星期日開始
    int n;
    int Month[]={31,28,31,30,31,30,31,31,30,31,30,31};

    cin>>n;
    while(n--){
        int k=5;                     //起始值(由1/1日星期幾校正)
        int month,day;
        cin>>month>>day;
        for(int i=1;i<month;i++)
            k=k+Month[i-1];            //month個月的天數加總，再加上起始值
        k=(k+day)%7;                 //month個月的天數加總+起始值+此次輸入的day值)除以7取得餘數
        cout<<week[k]<<endl;
    }
    return 0;
}

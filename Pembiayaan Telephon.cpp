#include <iostream>
#include <string>

using namespace std;
int main(){
    string op, op2;
    int durasi;
    cout<<"-----BIAYA SAMBUNGAN TELEPHONE-----"<<endl;
    cout<<"masukkan operator kamu: ";
    cin>>op;
    cout<<"masukkan operator tujuan kamu : ";
    cin>>op2;
    cout<<"masukkan durasi kamu menelphone (menit):";
    cin>>durasi;
    if (op == op2)
    {
        if (durasi<=10)
        {
           cout<<"total biaya kamu: Rp."<<500*durasi;
        }
        else if (durasi>10)
        {
            cout<<"total biaya kamu: Rp."<<durasi*800-3000;
        }
    }
    else if (op != op2)
    {
        if (durasi<=10)
        {
            cout<<"total biaya kamu: Rp."<<800*durasi;
        }
        else if (durasi>10)
        {
            cout<<"total biaya kamu: Rp."<<durasi*1000- 2000;
        }
    }
    return 0;
}
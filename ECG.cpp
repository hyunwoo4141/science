#include <iostream>

using namespace std;

int main()
{
    int pulse;

    cout<<"분당 심박수를 입력하세요 : ";
    cin>>pulse;

    if(pulse < 60)
    {
        cout<<"서맥이 의심됩니다."<<endl;
    }
    else if(pulse >= 60 && pulse <= 100)
    {
        cout<<"정상입니다."<<endl;
    }
    else
    {
        cout<<"빈맥이 의심됩니다."<<endl;
    }
}

#include <iostream>

using namespace std;

int main()
{
    int pulse;

    cout<<"�д� �ɹڼ��� �Է��ϼ��� : ";
    cin>>pulse;

    if(pulse < 60)
    {
        cout<<"������ �ǽɵ˴ϴ�."<<endl;
    }
    else if(pulse >= 60 && pulse <= 100)
    {
        cout<<"�����Դϴ�."<<endl;
    }
    else
    {
        cout<<"����� �ǽɵ˴ϴ�."<<endl;
    }
}

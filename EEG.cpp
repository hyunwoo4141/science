#include <iostream>

using namespace std;

int main()
{
    double alpha, beta;

    cout << "평균 알파파 수치를 입력하세요 : ";
    cin >> alpha;

    cout << "평균 베타파 수치를 입력하세요 : ";
    cin >> beta;

    double alpha_limit = 7;
    double beta_limit = 2;

    if(alpha > alpha_limit && beta < beta_limit)
    {
        cout << "정신이 안정적인 것으로 추정됩니다.";
    }
    else
    {
        cout << "정신이 불안정한 것으로 추정됩니다.";
    }
}

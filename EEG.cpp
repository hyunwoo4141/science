#include <iostream>

using namespace std;

int main()
{
    double alpha, beta;

    cout << "��� ������ ��ġ�� �Է��ϼ��� : ";
    cin >> alpha;

    cout << "��� ��Ÿ�� ��ġ�� �Է��ϼ��� : ";
    cin >> beta;

    double alpha_limit = 7;
    double beta_limit = 2;

    if(alpha > alpha_limit && beta < beta_limit)
    {
        cout << "������ �������� ������ �����˴ϴ�.";
    }
    else
    {
        cout << "������ �Ҿ����� ������ �����˴ϴ�.";
    }
}

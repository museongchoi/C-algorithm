// 2007년
#include <iostream>
using namespace std;

int main()
{
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int cntlist[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int x, y;
    cin >> x >> y;
    int sumday = 0;
    for (int i = 0; i < (x-1); i++)
    {
        sumday += cntlist[i];
    }
    
    sumday = (sumday + y) % 7;
    cout << day[sumday];
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int length;
    cin >> length;
    vector<vector<int>> datas(length, vector<int> (2, 0));
    for (int i = 0; i < length; i++)
    {
        cin >> datas[i][1] >> datas[i][0];
    }
    sort(datas.begin(), datas.end());
    for (int i = 0; i < length; i++)
    {
        cout << datas[i][1] << " " << datas[i][0] << "\n";
    }
}

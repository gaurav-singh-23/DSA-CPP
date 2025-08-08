#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    int trapped = 0;

    // leftmax array
    vector<int> l(n, 0);
    int leftmax = height[0];
    for (int k = 0; k < n; k++)
    {
        if (height[k] >= leftmax)
            leftmax = height[k];
        l[k] = leftmax;
    }
    for (int i = 0; i < l.size(); i++)
    {
        cout << l[i] << " ";
    }
    cout << endl;

    // rightmax array
    vector<int> r(n, 0);
    int rightmax = height[n - 1];
    for (int j = n - 1; j >= 0; j--)
    {
        if (height[j] > rightmax)
            rightmax = height[j];
        r[j] = rightmax;
    }
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < n - 1; i++)
    {

        int res = 0;
        res = (min(l[i - 1], r[i + 1]) - height[i]);

        if (res >= 0)
            trapped = trapped + res;
    }

    return trapped;
}
int main()
{
    vector<int> height;
    // height.push_back(4);
    // height.push_back(2);
    // height.push_back(0);
    // height.push_back(3);
    // height.push_back(2);
    // height.push_back(5);
    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
    for (int i = 0; i < height.size(); i++)
    {
        cout << height[i] << " ";
    }
    cout << endl;

    int res = trap(height);

    cout << res;
}
#include <bits/stdc++.h>
using namespace std;

bool isTriangle(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    return arr[0] + arr[1] > arr[2];
}

bool isSegment(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    return arr[0] + arr[1] == arr[2];
}

int main()
{
    int s[4];
    for (int i = 0; i < 4; i++)
        cin >> s[i];

    bool triangle = false, segment = false;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            for (int k = j + 1; k < 4; k++)
            {
                if (isTriangle(s[i], s[j], s[k]))
                    triangle = true;
                else if (isSegment(s[i], s[j], s[k]))
                    segment = true;
            }
        }
    }

    if (triangle)
        cout << "TRIANGLE" << endl;
    else if (segment)
        cout << "SEGMENT" << endl;
    else
        cout << "IMPOSSIBLE" << endl;

    return 0;
}
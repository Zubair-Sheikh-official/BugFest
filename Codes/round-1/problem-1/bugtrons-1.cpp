// C++ code for Max Water Container

#include<iostream>
using namespace std;

int maxAreaofWaterContainer(int N[], int length)
{
    int len = 0;
    int radius = length - 1;
    int Area = 0;
     
    while (len < radius)
    {
        // write your code here
    }
    return Area;
}

// Driver code
int main()
{
    int a[] = {2, 6, 5, 4};
    int b[] = {4, 2, 3, 5, 6};
     
    int len1 = sizeof(a) / sizeof(a[0]);
    cout << maxAreaofWaterContainer(a, len1);
     
    int len2 = sizeof(b) / sizeof(b[0]);
    cout << endl << maxAreaofWaterContainer(b, len2);
}

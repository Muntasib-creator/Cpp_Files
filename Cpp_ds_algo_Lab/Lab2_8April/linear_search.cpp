#include <iostream>

using namespace std;

int main()
{
    int a[] = {2, 5, 6, 8, 10, 13};

    //Lenear Search
    int x = 10;

    int length = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < length; i++)
    {
        if(a[i] == x)
        {
            cout<<"Element is found"<<endl;
            break;
        }
        else if (i == length -1)
        {
            cout<<"Element is not found";
        }
    }

    return 0;
}

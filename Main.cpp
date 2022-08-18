#include <iostream>

using namespace std;

class MathematicsX
{
    public:
        int Difference(int*,int);
};

int MathematicsX::Difference(int* iArr, int iLength)
{
    int iCount = 0;

    for(int j = 0; j < iLength; j++)
    {
        if(iArr[j] % 2 == 0)
        {   
            iCount = iCount + iArr[j];
        }
        else
        {
            iCount = iCount - iArr[j];
        }
    }

    if(iCount < 0)
    {
        iCount = -iCount;
    }

    return iCount;
}

int main()
{
    int iSize = 0;
    int *p = NULL;

    cout<<"Enter Count of Elements"<<endl;
    cin>>iSize;

    p = new int[iSize];

    if(p == NULL)
    {
        cout<<"Unable to Allocate Memory"<<endl;
        return -1;
    }

    cout<<"Enter "<<iSize<<" Elements"<<endl;

    for(int i = 0; i < iSize; i++)
    {
        cin>>p[i];
    }

    MathematicsX mobj;

    int iResult = mobj.Difference(p,iSize);

    cout<<"Result is "<<iResult<<endl;

    delete(p);

    return 0;
}
#include <iostream>

using namespace std;
    
void minandmax(it *a, int *min, int *max)
{
    // *min=1;
    // *max=5;
    
    int i;
    // int small=10000000 , large=-99999;
    int small=a[0] , large=a[0];
    
    for(i=0 ; i<6;i++)
    {
        if(a[i]>large)
        {
            large = a[i];
        }
        if(a[i]<small)
        {
            small = a[i];
        }
    }
}
    
int main()
{
    int a[5];
    int min,max;
    
    int i ;
    for(i=0;i<6;i++)
    {
        a[i]=1;
    }
    
    minandmax(a,&min,&max);
    return 0;
}
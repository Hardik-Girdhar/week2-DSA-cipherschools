#include <iostream>

using namespace std;
    
int main()
{
    // char r,o,h,i,t
    // cin>>r>>o>>h>>i>>t;
    
    // char name[5];
    char name[1000];
    
    cout<<"enter yout name : (note : enter # after the end of your name: )";
        
    int i=0;
    
    // for(i=0 ; i<5 ; i++)
    // {
    //     cin>>name[i];
    // }
    
    // while(name[i]!='#')
    // {
    //     cin>>name[i];
    //     i++;
    // }
    
    while(1)
    {
        cin>>name[i];
        if(name[i]=='#') break;
        i++;
    }
    
    i=0;
    
    cout<<"the name you have just entered is "<<endl;
    
    // for(i=0 ; i<5 ; i++)
    // {
    //     cout<<name[i];
    // }
    
    while(name[i]!='#')
    {
        cout<<name[i];
        i++;
    }
    
    return 0;
}
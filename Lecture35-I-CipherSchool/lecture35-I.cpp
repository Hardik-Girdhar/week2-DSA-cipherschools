#include<iostream>
using namespace std;

int main()
{
    string text;
    text="hi guys how are you doing today, did you get time to watch the new spiderversa film and now i want to find the letter with the maximum frq in the sentence ";

    // cout<<text[0]<<endl;
    // cout<<text[1]<<endl;
    // cout<<text[2]<<endl;
    // cout<<text[3]<<endl;

    int freq[26];

    int i;

    for(i=0;i<26;i++) freq[i]=0;

    for(i=0;i<text.length();i++)
    {
        if(text[i]!=' ') 
        {
            freq[text[i]-'a']++;
        }
    }

    char temp;
    int max;

    for(i=0,temp='a',max=0;i<26;i++)
    {
        cout<<"the frequency of the character "<<temp<<" is "<<freq[i]<<endl;
        temp++;

        if(freq[i]>max) max= freq[i];
    }

    cout<<endl<<endl<<"the letter with maximum frequency is"<<max;

    return 0;
}
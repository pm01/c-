#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin.ignore();

    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxSt = 0;

    while (i < n)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            
                if (currLen > maxLen)
                {
                    maxSt = st;
                    maxLen = currLen;
                }
                //maxLen=max(currLen,maxLen);
                st = i + 1;
                currLen = 0;
            
        }

        else
        
            currLen++;
        
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
        
    }

    cout<< arr<<endl;
    cout<<maxLen<<endl;
    for(int i=0; i<maxLen; i++){
        cout<<arr[maxSt+i];
    }
    cout<<endl;
}
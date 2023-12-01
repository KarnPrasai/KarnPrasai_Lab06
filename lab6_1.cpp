#include<iostream>
using namespace std;

int main(){
    int x = 1;
    int odd_num = 0;
    int even_num = 0;
    while(x != 0)
    {  
        cout << "Enter an integer: ";
        cin >> x;
        if(x != 0)
        {
            if(x % 2 == 0)
            {
                even_num += 1;
            }
            else
            {
                odd_num += 1;
            }
        }
    }
    cout << "#Even numbers = " << even_num << "\n";
    cout << "#Odd numbers = " << odd_num;

    return 0;
}

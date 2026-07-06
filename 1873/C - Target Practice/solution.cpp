#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ar[10][10];
        for (int i = 0; i < 10; i++)
        {
            for(int j=0;j<10;j++){
                cin>>ar[i][j];
            }
        }
        int value;
        int c,sum=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char ch=ar[i][j];
                if(ch=='X'){
                    value=1;
                }
                else{
                    value=0;
                }
                if(i==0 || i==9){
                    c=1;
                }
                else if(i==1 || i==8){
                    if(j==0 || j==9){
                        c=1;
                    }
                    else{
                        c=2;
                    }
                }
                else if(i==2 || i==7){
                    if(j==0 || j==9){
                        c=1;
                    }
                    else if(j==1 || j==8){
                        c=2;
                    }
                    else{
                        c=3;
                    }
                }
                else if(i==3 || i==6){
                    if(j==0 || j==9){
                        c=1;
                    }
                    else if(j==1 || j==8){
                        c=2;
                    }
                    else if(j==2 || j==7){
                        c=3;
                    }
                    else{
                        c=4;
                    }
                }
                else if(i==4 || i==5){
                    if(j==0 || j==9){
                        c=1;
                    }
                    else if(j==1 || j==8){
                        c=2;
                    }
                    else if(j==2 || j==7){
                        c=3;
                    }
                    else if(j==3 || j==6){
                        c=4;
                    }
                    else{
                        c=5;
                    }
                }
                sum+=(value*c);
            }
        }
        cout<<sum<<endl;
    }
}
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    int mynum,usernum;
    srand(time(0));
    for(int i=0;i<9;i++)
    mynum=rand()%10+1;
    cout<<"Enter your guessing number(0-9):";
    while(1){
        cout<<"Enter your guess:"<<endl;
        cin>>usernum;
        if(mynum==usernum){
            cout<<"Your guess is right"<<endl;
        }
        else if(mynum<usernum){
            cout<<"Your guess is too high:Try Again!!"<<endl;
        }
        else{
            cout<<"Your guess is too low:Try Again!!"<<endl;
        }

    }

}

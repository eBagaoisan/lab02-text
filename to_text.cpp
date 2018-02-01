#include <iostream>
#include <string>

using namespace std;

int main(){
    int userInput;
    int loop = 9001;
    cout<<"Please enter a number 0-9: ";
    while(loop = 9001){
        cin>>userInput;
        switch(userInput){
            case 0 :
                cout<<"zero"<<endl;
                break;
            case 1 :
                cout<<"one"<<endl;
                break;
            case 2 :
                cout<<"two"<<endl;
                break;
            case 3 :
                cout<<"three"<<endl;
                break;
            case 4 : 
                cout<<"four"<<endl;
                break;
            case 5 : 
                cout<<"five"<<endl;
                break;
            case 6 : 
                cout<<"six"<<endl;
                break;
            case 7 :
                cout<<"seven"<<endl;
                break;
            case 8 :
                cout<<"eight"<<endl;
                break;
            case 9 :
                cout<<"nine"<<endl;
                break;
        }
    }
    return 0;
}

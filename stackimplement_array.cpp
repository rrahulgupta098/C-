#include<iostream>
using namespace std;
int n=10;
class stack{
    int *arr;
    int top;
    public :
    stack(){
        arr=new int[n];
        top=-1;
    }

void push(int x){
if(top==n-1){
cout<<"overflow";
}else{
    top++;
    arr[top]=x;
}
}

void pop(){
    if(top==-1){
        cout<<"underflow";
    }else{
        top--;
    }
}
int Top(){
    if(top==-1){
        return -1;
    }else{
        return arr[top];
    }
}

bool isempty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

};
int main(){
    stack st;
     cout<<st.isempty();
    st.push(10);
    cout<<st.Top();
    return 0;
}

// int n=10;
// class stack{

//    int *arr;
//     int top;
// public : 

// stack(){
//     arr=new int[n];
//     top=-1;
// }


// void push(int x){
//     if(top==n-1){
//         cout<<"overflow stack";
//     }else{
//         top++;
//         arr[top]=x;
//     }
// }

// void pop(int x){
//     if(top==-1){
//         cout<<"underflow stack";
//     }
//     top--;
// }

// int Top(){
//     if(top==-1){
//         return -1;
//     }
//      return arr[top];
    
// }

// bool empty(){
//     if(top==-1){
//         return true;
//     }
// }

// };
// int main(){
// stack st;
// st.push(10);
// st.push(20);
// st.push(30);
// cout<<st.Top();
//     return 0;
// }
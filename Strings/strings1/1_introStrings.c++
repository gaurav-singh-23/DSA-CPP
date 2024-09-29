#include<iostream>
using namespace std;
int main(){
    
    // Character array ko bolne ka tarika hai string
    char str[5] = {'a','b','c','d','e'}; 
    for(int i=0;i<5;i++)
    {
        cout<<str[i]<<" ";
    }

    cout<<endl<<endl<<"My name is Gaurav Kumar Singh"<<endl<<endl; // string
    
    // char ch_1 = 'aa'; //--> error{warning: multi-character character constant [-Wmultichar]} , sirf ek hi character ho sakta hai single Quote ke andar
    // char ch_2 = '\';  ----> error --> because backslash ek special character --> eg. --> '\n' , '\t' , '\0' etc ------> BAKI KOI BHI CHARACTER(!,@,#,$,%,^,&,*,1,2,3,A,B,a,b) SINGLE QUOTE ME ho sakta hai
    char ch = '\0'; // ek special character hai bhale hi 2 character aa rhe ho // terminate krne ke liye hota hai ye
    cout<<(int)ch<<endl<<endl; // output --> 0 --> because character '\0' have ASSCCI value 0

    char strr[10] = {'a','b','c','d','e'}; // --> {'a','b','c','d','e','\0'}
    cout<<strr[0]<<endl; // output --> a
    cout<<(int)strr[0]<<endl; // output --> 97
    cout<<strr[5]; // ---> kuch bhi print nhi hoga but typecast ....
    cout<<(int)(str[5])<<endl<<endl;  // output --> 0 // index out of bound error ana chahiye but aya nhi due to special character

    char strrr[] = {'a','b','c','d','e'}; 
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i]<<" ";  // output --> a b c d e
    }
    cout<<endl<<endl;

    cout<<str; // output --> abcde --> string (character array ki khas batt --> jabtk \0 nhi ata tb tk print krte zao) // but agar (int arr) or (float arr) ..... --> ko direct print karaye to arr ka address print hoga 
    cout<<endl<<endl;

    char strrrr[] = {'a','b','\0','c','d','e'};
    cout<<strrrr; // output --> ab (check krta hai \0 aagya agar aa gya to printing chod deta hai)


    // '\0' ---> null character --> represented by the backslash zero



}
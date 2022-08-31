#include<iostream>
 using namespace std;
 int main () 
 {
    int food,rating;
    cout<<"plese order the food ";
    cin>>food;
    cout<<"\n enter the number";
    switch (food)
    {
    case 1:
    cout<<"\n pizza ";
        break;
    case 2:
    cout<<"\n burger ";
        break;
        case 3:
    cout<<"\n role";
        break;
        case 4:
    cout<<"\n jjsdjkl ";
        break;
    default:
        break;
    }
    cout<<"\n Feedback Please";
    if (rating>=3)
    {
     cout<<"\n service is very good";
    }else if (rating <3 && rating>2)
    {
        cout<<"\nservice is good ";
    }
    else{
        cout<<"\n We can improve it ....Thanks for Feedback";
    }
    
    return 0;
 }

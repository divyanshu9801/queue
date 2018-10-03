#include<iostream>
#include<stdlib.h>
using namespace std;

struct list
{
    int info;
    struct list *next;
};
struct list *front=NULL;
struct list *rear=NULL;

void insertion(int num)
{
    struct list *ptr;
    ptr=new list;
    ptr->info=num;
    ptr->next=NULL;
    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
    }
    else
    {
        front->next=ptr;
        front=ptr;
    }

}

int main()
{
    cout<<"Press 1 for Insertion"<<endl;
    cout<<"Press 2 for Deletion"<<endl;
    cout<<"Press 3 for Traverse"<<endl;
    cout<<"Press any other number to exit"<<endl;
    int ch;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    while(1)
    switch (ch)
    {
    case 1:
        cout<<"Enter the number you want to insert"<<endl;
        int num;
        cin>>num;
        insertion(num);
        break;
    case 2:
        Deletion();
        break;
    case 3:
        Traverse();
        break;
    default:
        cout<<"Exit the Program"<<endl;
        exit(0);

    }
}

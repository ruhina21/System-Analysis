#include<bits/stdc++.h>
using namespace std;

//Defining Structure
struct node
{
    char data;
    struct node *nextadd;
};

void printlist(struct node *head)
{
    struct node *prn=head;
    while(prn!=NULL)
    {

        cout<<prn->data<<endl;
        prn=prn->nextadd;
    }

}

//Function for Deletion

struct node *insertion(struct node *head,int ins,int l)
{
    struct node *tmp,*current;
    char ch;
    tmp=(struct node*)malloc(sizeof(struct node));

    int c;
    if(ins==1)
    {
        cin>>tmp->data;
// tmp->data=getchar();
        tmp->nextadd=head;
        head=tmp;
    }
    else if(ins==l+1)
    {

        current=head;
        while(current->nextadd!=NULL)
        {
            current=current->nextadd;

        }
        cin>>tmp->data;
        current->nextadd=tmp;
        tmp->nextadd=NULL;
    }
    else if(ins>l+1)
    {
        cout<<"insertion not possible"<<endl;
    }
    else
    {
        current=head;
        struct node *random;
        random=NULL;
        cin>>tmp->data;
        for(c=0; c<ins-2; c++)
        {
            current=current->nextadd;
            random=current->nextadd;
        }

        current->nextadd=tmp;
        tmp->nextadd=random;
    }
    return head;
};
int main()
{
    cout<<"Put the characters without space"<<endl;
    int t,j,x,y;
    struct node *head,*tnb,*cb;
    tnb=(struct node*)malloc(sizeof(struct node));
    tnb->data=getchar();
    head=tnb;
    while(1)
    {

        cb=tnb;
        tnb=(struct node*)malloc(sizeof(struct node));
        tnb->data=getchar();

        if(tnb->data=='\n')
        {
            cb->nextadd=NULL;
            break;
        }
        cb->nextadd=tnb;
    }
    int len=0;
    struct node *temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->nextadd;
    }

    cout<<"count="<<len<<endl;
    printlist(head);
    cin>>t;
    for(j=0; j<t; j++)
    {
        cout<<"Which operation? 1 for insertion & 2 for deletion"<<endl;
        cin>>y;
        cout<<"Which element?"<<endl;
        cin>>x;
        if(y==2)
        {
            cout<<"AFTER OPERATION"<<endl;
            head=deletor(head,x,len);
            printlist(head);
        }
        else if(y==1)
        {
            head=insertion(head,x,len);
            cout<<"AFTER OPERATION"<<endl;
            printlist(head);
        }
        else
        {
            cout<<"INVALID INPUT"<<endl;
        }
    }

    return 0;
}

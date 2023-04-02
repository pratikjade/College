#include <iostream>
#include <string>
using namespace std;
class list;
class node
{
    int MIS;
    string name;
    node *next;

public:
    node(int x, string nm)
    {
        MIS = x;
        next = NULL;
        name = nm;
    }
    friend class list;
};
class list
{
    node *start;

public:
    list()
    {
        start = NULL;
    }
    void create();
    void display();
    void insertAtBeginning();
    void insertAtEnd();
    void insertAfter();
    void deleteAtFirst();
    void deleteByValue();
    void deleteAtEnd();
    int computeTotal();
    void sortList();
    void concatList(list &q1);
    void displayRev(node *t);
    bool reverseDisplay() //function is only for passing start as argument to recursive function
    {
        if (start == NULL)
            return false;
        node *temp = start;
        displayRev(temp);
        //cout<<"(President)";
        return true;
    }
};
void list::displayRev(node *t)
{
    if (t == NULL)
        return;
    else
    {
        displayRev(t->next);
        cout << "\nMIS NO:" << t->MIS << " Name: " << t->name;
    }
}
void list::create()
{
    int no;
    string nam;
    if (start == NULL)
    {
        cout << "Enter MIS number: ";
        cin >> no;
        cout << "Enter name: ";
        cin >> nam;
        cout << nam;
        start = new node(no, nam);
        cout << "\n====== List Created =====";
    }
    else
    {
        cout << "\nList is already created.";
    }
}
void list::display()
{
    node *t;
    t = start;
    if (start == NULL)
        cout << "\nList is Empty";
    else
    {
        cout << "\n====== List: ======\n";
        while (t != NULL)
        {
            cout << t->MIS << " " << t->name << " \n";
            t = t->next;
        }
        //cout<<t->MIS<<" "<<t->name<<" \n";
    }
}
void list::insertAtBeginning()
{
    int no;
    string nam;
    node *temp;
    if (start == NULL)
    {
        create();
    }
    else
    {
        cout << "\nEnter MIS number: ";
        cin >> no;
        cout << "Enter name: ";
        cin >> nam;
        //cout<<nam;
        temp = new node(no, nam);
        temp->next = start;
        start = temp;
        ;
        cout << "Inserted " << temp->name << " at the beginning.";
    }
}
void list::insertAtEnd()
{
    int no;
    string nam;
    node *t;
    if (start == NULL)
        create();
    else
    {
        cout << "\nEnter MIS number: ";
        cin >> no;
        cout << "Enter name: ";
        cin >> nam;
        t = start;
        while (t->next != NULL)
            t = t->next;
        node *p = new node(no, nam);
        t->next = p;
    }
}
void list::insertAfter()
{
    int prev_no;
    cout << "\nENter MIS No. after do you want insert:";
    cin >> prev_no;
    node *t;
    t = start;
    string nam;
    int flag = 0, no;
    while (t != NULL)
    {
        if (t->MIS == prev_no)
        {
            flag = 1;
            break;
        }
        t = t->next;
    }
    if (flag == 1)
    {
        node *p;
        cout << "\nEnter MIS number: ";
        cin >> no;
        cout << "Enter name: ";
        cin >> nam;
        p = new node(no, nam);
        p->next = t->next;
        t->next = p;
    }
    else
    {
        cout << "\n"
             << prev_no << " is not in list.";
    }
}
void list::deleteAtFirst()
{
    node *t;
    if (start == NULL)
        cout << "\nClub is Empty..";
    else
    {
        t = start;
        start = start->next;
        t->next = NULL; //Not necessary
        delete t;
        cout << "\nPresident deleted..";
    }
}
void list::deleteByValue()
{
    int no, flag = 0;
    node *t, *prev;
    if (start == NULL)
        cout << "\nList/Club is empty;";
    else
    {
        cout << "\nEnter MIS no. of member to be deleted: ";
        cin >> no;
        t = start->next; //t=start if we have to delete precident also.. start->next is first member
        while (t->next != NULL)
        {
            if (t->MIS == no)
            {
                flag = 1;
                break;
            }
            prev = t;
            t = t->next;
        }
        if (flag == 1)
        {
            prev->next = t->next;
            t->next = NULL;
            delete t;
            cout << "\nMember with MIS no: " << no << " is deleted.";
        }
        else
            cout << "\nMember not found in List./president or secretary cannot be deleted.";
    }
}
void list::deleteAtEnd()
{
    node *t, *prev;
    t = start;
    if (start == NULL)
        cout << "\nClub is Empty..";
    else
    {
        while (t->next != NULL)
        {
            prev = t;
            t = t->next;
        }
        prev->next = NULL;
        delete t;
        cout << "\nSecretary Deleted.";
    }
}
int list::computeTotal()
{
    node *t;
    int count = 0;
    t = start;
    if (start == NULL)
    {
        cout << "\nList is empty.";
        return 0;
    }
    while (t != NULL)
    {
        count++;
        t = t->next;
    }
    return count;
}
void list::sortList()
{
    node *i, *j, *last = NULL;
    int tMIS;
    string tname;
    if (start == NULL)
    {
        cout << "\nList is empty.";
        return;
    }
    for (i = start; i->next != NULL; i = i->next)
    {
        for (j = start; j->next != last; j = j->next)
        {
            if ((j->MIS) > (j->next->MIS))
            {
                tMIS = j->MIS;
                tname = j->name;
                j->MIS = j->next->MIS;
                j->name = j->next->name;
                j->next->MIS = tMIS;
                j->next->name = tname;
            }
        }
    }
    cout << "\n List is sorted.";
    display();
}
void list::concatList(list &q1)
{
    node *t, *p;
    t = q1.start;
    if (t == NULL)
    {
        cout << "\nList 2 is empty";
        return;
    }
    p = start; //first list
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = t;
    q1.start = NULL; //second list is set to null
    cout << "\nAfter concatenationlist";
    display();
}
int main()
{
    list *l;
    int choice, selectList;
    list l1, l2;
    l = &l1;
X:
    cout << "Welcome to COMET GHRCEM!" << endl;
    cout << "SCOB86_Rudraskh Karpe" << endl;
    cout << "\nSelect List\n1.List 1(Div-1)\n2.List 2(Div-2)\nEnter choice: ";
    cin >> selectList;
    if (selectList == 1)
    {
        l = &l1;
    }
    else if (selectList == 2)
    {
        l = &l2;
    }
    else
    {
        cout << "\nWrong list Number.";
        goto X;
    }
    do
    {
        cout << "\n1. create\n2.Insert President\n3.Insert secretary\n4.insert after position(member)\n5.Display list"
             << "\n6.Delete President\n7.Delete Secretary\n8.Delete Member\n9.Find total No. of members\n10.Sort list\n11. Reselect List ++--##"
             << "\n12.Combine lists\n13.Reverse Display\n0. Exit\nENter your choice:\t";
        cin >> choice;
        switch (choice)
        {
        case 1:
            l->create();
            break;
        case 2:
            l->insertAtBeginning();
            break;
        case 3:
            l->insertAtEnd();
            break;
        case 4:
            l->insertAfter();
            break;
        case 5:
            l->display();
            break;
        case 6:
            l->deleteAtFirst();
            break;
        case 7:
            l->deleteAtEnd();
            break;
        case 8:
            l->deleteByValue();
            break;
        case 9:
            cout << "\nTotal members(including President & Secretary): " << l->computeTotal();
            break;
        case 10:
            l->sortList();
            break;
        case 11:
            goto X;
            break;
        case 12:
            l1.concatList(l2);
            break;
        case 13:
            l->reverseDisplay();
            break;
        deafult:
            cout << "Wrong choice";
        }
    } while (choice != 0);
    cout << "\n========== GOOD BYE ====================\n";
    return 0;
}

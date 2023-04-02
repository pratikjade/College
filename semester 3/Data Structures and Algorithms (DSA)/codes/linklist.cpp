#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
void insert(int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void insertAtEnd(int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    if (head == NULL)
    {
        insert(new_data);
    }
    else
    {
        struct Node *ptr;
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->next = NULL;
    }
}
void getdata()
{
     int n1, n2, n3, n4, n5;
    cout << "Enter input 1\n";
    cin >> n1;
    cout << "Enter input 2\n";
    cin >> n2;
    cout << "Enter input 3\n";
    cin >> n3;
    cout << "Enter input 4\n";
    cin >> n4;
    cout << "Enter input 5\n";
    cin >> n5;
    insert(n5);
    insert(n4);
    insert(n3);
    insert(n2);
    insert(n1);
}
void display()
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    getdata();
    cout << "\n***************************************\n";
    cout << "The linked list is: ";
    display();
    cout << "\n***************************************\n";
    return 0;
}
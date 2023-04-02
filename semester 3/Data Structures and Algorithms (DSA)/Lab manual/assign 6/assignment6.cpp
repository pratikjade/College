#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
//Node Declaration
struct node
{
    char label[10];
    int ch_count;
    struct node *child[10];
} * root;
// Class Declaration

class BookT
{
public:
    void create_tree();
    void display(node *r1);
    BookT()
    {
        root = NULL;
    } 
};
void BookT::create_tree()
{
    int tbooks, tchapters, i, j, k;
    root = new node();
    cout << "\nEnter name of book: ";
    cin >> root->label;
    cout << "\nEnter number of chapters in book: ";
    cin >> tchapters;
    root->ch_count = tchapters;
    for (i = 0; i < tchapters; i++)
    {
        root->child[i] = new node;
        cout << "\nEnter Chapter name: ";
        cin >> root->child[i]->label;
        cout << "\nEnter number of sections in Chapter: " << root->child[i]->label << ": ";
        cin >> root->child[i]->ch_count;
        for (j = 0; j < root->child[i]->ch_count; j++)
        {
            root->child[i]->child[j] = new node;
            cout << "\nEnter Section: " << j + 1 << " name: ";
            cin >> root->child[i]->child[j]->label;
        }
    }
}
void BookT::display(node *r1)
{
    int i, j, k, tchapters;
    if (r1 != NULL)
    {
        cout << "\n****Book Hierarchy****";
        cout << "\n Book Title : " << r1->label;
        tchapters = r1->ch_count;
        for (i = 0; i < tchapters; i++)
        {
            cout << "\n Chapter: " << i + 1;
            cout << " " << r1->child[i]->label;
            cout << "\n Sections: ";
            for (j = 0; j < r1->child[i]->ch_count; j++)
            {
                cout << " \n " << r1->child[i]->child[j]->label;
            }
        }
    }
}
//Main Contains Menu
int main()
{
    int choice;
    BookT BookT;
    while (1)
    {
        cout << "\n******************\n";
        cout << "Book Tree Creation";
        cout << "\n******************\n";
        cout << "1.Create" << endl;
        cout << "2.Display" << endl;
        cout << "3.Quit" << endl;
        cout << "Enter your choice : \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            BookT.create_tree();
        case 2:
            BookT.display(root);
            break;
        case 3:
            exit(1);
        default:
            cout << "Wrong choice" << endl;
        }
    }
}
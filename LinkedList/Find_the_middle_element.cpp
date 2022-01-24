#include <iostream>

using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node *head;
void insert(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head!=NULL){
        temp->next = head;
    }
    head = temp;
}
void mid(){
    Node *slow = head;
    Node *fast = head;
    while((fast != NULL)&&(fast->next != NULL)){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<< slow->data;
}
int main()
{
    insert(5);
    insert(3);
    insert(2);
    insert(6);
    insert(10);
    insert(23);
    insert(34);
    mid();
    return 0;
}

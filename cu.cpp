#include <iostream>
using namespace std;

struct Node{
int data;
Node* next;
}; 

class Stack{
private:
Node* top; // kullanilan dugum
int count;
public:
Stack(){
top = NULL; // bos stack olusturma
count = 0;
}
bool isEmpty(); // bos mu
void push(int); // eleman ekle
void pop(); // sil/cikar islemi
void peek(); // son elemani goster
void display(); // butun elemanlari goster
void displayCount(); // kac eleman var
};

bool Stack::isEmpty(){
return top == NULL;
}


 // değeri val olan yeni Node ekle
void Stack::push(int val){
if (isEmpty()){
top = new Node;
top->data = val;
top->next = NULL;
count++;
}
else{
Node* newNode = new Node;
newNode->data = val;
newNode->next = top;
top = newNode;
count++;
}
}



//---------------------------------------------------------


void Stack::pop(){
if (top == NULL){
cout << "\nyigin bos.\n";
}

else{
cout << "Elleman silindi "<< top->data << endl;
Node* temp = top;
top = top->next;
delete(temp);
count--;
}
}

//--------------------------------------------------------

void Stack::display(){
if (!isEmpty()){
Node* temp = top;
while (temp != NULL){
cout << temp->data << endl;
temp = temp->next;
}
}
else{
cout << "\nStack bombos\n";
}
}

//--------------------------------------------------------

void Stack::displayCount(){
cout << "\nStack elemanlari: " << count << endl;}



void Stack::peek(){
if (!isEmpty()){
cout << "\nilk eleman: " << top->data << endl;
}
}

int main(){


Stack s;
s.push(10);
s.push(27);
s.pop();
s.push(45);
s.push(16);
s.pop();
s.displayCount();
s.display();
s.peek();
s.push(118);
s.pop();
s.pop();
s.pop();
s.pop();

return 0;
}








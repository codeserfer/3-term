#include <iostream>
#include <vector>

using namespace std;


struct children {
    int gifts;
    int n;
    children* next;
    children* next2;
};


int main () {
    children* first=NULL;
    children* last=NULL;
    int n=0; //number of gifts
    int m=0; //number of children

    cin >> n;
    cin >> m;
    if (m<1) { cout << "Number of children can not be less than 1!\n"; return 0; }
    int n1=1; //counter for adding children
    first=new children;
    first->gifts=0;
    first->n=n1++; //number of child (1..m)
    last=first->next=first->next2=first;
    for (int i=1; i<m; i++) {
        children* q=new children;
        last->next=last->next2=q;
        last=q;
        last->gifts=0;
        last->n=n1++;
        last->next=last->next2=first;
    }
    children* i=first;
    children* i2=NULL;
    bool del=false;
    int for4=0; //conter, which look for each 4 child
    while (m>0 && n>0) {
        for4++;
        i->gifts++; //giving a gift
        n--;
        if (i->gifts==4) {
            i2->next=i->next; //deliting child
            m--; //decrement number of children
            del=true;
        }
        if (for4==4) {
            for4=0;
            i2->next=i->next;
            if (!del) m--;
        }

        i2=i; //save previous child
        i=i->next; //next child
        del=false;
    }
    for (children* i=first; i!=last; i=i->next2) cout << i->gifts;
    cout << last->gifts;
    return 0;
}



/*struct children {
    int gifts;
    int n;
    children* next;
    children* next2;
};


int main () {
    children* first=NULL;
    children* last=NULL;
    int n=0; //количество подарков
    int m=0; //количество детей

    cin >> n;
    cin >> m;
    if (m<1) { cout << "Number of children can not be less than 1!\n"; return 0; }
    cout << "n="<<n<<" m="<<m<<endl;
    int n1=1; //counter for adding children
    first=new children;
    first->gifts=0;
    first->n=n1++; //number of child (1..m)
    first->next=first->next2=first;
    last=first;
    for (int i=1; i<m; i++) {
        children* q=new children;
        last->next=last->next2=q;
        last=q;
        last->gifts=0;
        last->n=n1++;
        last->next=last->next2=first;
    }

    children* i=first;
    children* i2=NULL;
    bool del=false;
    int for4=0; //conter, which look for each 4 child
    while (m>0 && n>0) {
        for4++;
        i->gifts++; //giving a gift
        n--;
        cout << "giving gift: "<<i->n<<" - "<<i->gifts<<endl;
        if (i->gifts==4) {
            cout <<"child number "<<i->n<< ", 4 gifts, deliting, prv="<<i2->n<<" next="<<i->next<<endl;
            i2->next=i->next; //deliting child
            m--; //decrement number of children
            del=true;
        }
        if (for4==4) {
            cout <<"child number "<<i->n<< "child num 4, deliting, prv="<<i2->n<<" next="<<i->next<<endl;
            for4=0;
            i2->next=i->next;
            if (!del) m--;
        }

        i2=i; //save previous child
        i=i->next; //next child
        del=false;
    }
    for (children* i=first; i!=last; i=i->next2) cout << i->gifts;
    cout << last->gifts;
    return 0;
}
*/

#include "../include/html.h"
#include <stdarg.h>
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <fstream>

using namespace std;

html::html() {
    tag_position=new int* [3];
    num_tags=num_tag_position=0;

}

html::~html() {
    for (int i=0; i<num_tags; i++) delete [] tags [i];

    for (int i=0; i<3; i++) delete [] tag_position [i];
    //delete [] tags;
}

void html::test () {
    cout << "num_tag_position is "<<num_tag_position<<endl;
    //cout << tag_position [1]
    for (int i=0; i<num_tag_position; i++) cout << tag_position [0][i]<<tag_position [1][i]<<tag_position [2][i]<<endl;

}

bool html::loadfile () {
    ifstream fin ("tags.txt");
    if (!fin) return false;
    num_tags=0; //counts the number of tags
    char buf [100]; //bufer for reading file
    while (!fin.eof() && fin>>buf) num_tags++;
    tags=new char* [num_tags];
    fin.clear ();
    fin.seekg (0, ios::beg); // set pointer to begin
    int i=0;
    while(!fin.eof() && fin>>buf)  {
        tags[i]=new char[strlen(buf)+1];
        strcpy (tags[i++], buf);
        //cout << "coped "<<buf<<" to "<<tags[i-1];
    }
    //cout << "right now i="<<i<<"\n";
    //i--;
    //while (i>=0) cout << tags[i--]<< " ";
    return true;
}

void html::add_text(string text) {
    s+=text;
}

void html::print_code() {
    cout << s;
}

void html::add_tag (int tag_num, int tag_begin, int tag_end) {
    int** temp_tag_position=new int* [3];
    for (int i=0; i<3; i++) temp_tag_position[i]=new int [num_tag_position+1];
    int i=0;
    for (; i<num_tag_position; i++) {
        temp_tag_position [0][i]=tag_position [0][i];
        temp_tag_position [1][i]=tag_position [1][i];
        temp_tag_position [2][i]=tag_position [2][i];
    }
    num_tag_position++;
    //i++;
    temp_tag_position [0][i]=tag_num;
    temp_tag_position [1][i]=tag_begin;
    temp_tag_position [2][i]=tag_end;
    //for (int i=0; i<3; i++) delete [] tag_position [i];
    tag_position=temp_tag_position;
}
/*using namespace std;

html::html() {
     tags=new char* [1];
     s="This is the text by default.";
     char* t1=new char[2];
     strcpy (t1, "p");
     add_tag_to_base(t1, 0);

     char* t2=new char[7];
     strcpy (t2, "strong");
     add_tag_to_base(t2, 1);

     //char* t3=new char [3];
     //strcpy (t3, "em");
     //add_tag_to_base(t3, 2);

     //tags[0]="p";
     //tags[1]="strong";
     //tags[2]="em";
    // tags[3]="i";
    // tags[4]="b";
    // max_tags=4;

     //tag_position=new int* [2];
     i_tags=0;
}

void html::add_tag_to_base (char* tag_name, int i_tag) {
    tags[i_tag]=new char [strlen(tag_name)+1];
    strcpy (tags[i_tag], tag_name);
    max_tags++;

}

void html::add_tag (int tag_id, int position_begin, int position_end) {
    if (tag_id>i_tags) {std::cout << "No tag found!\n"; return; }
    if (i_tags>0) {
        int** temp_tag_position=new int*[i_tags+1];
        for (int i=0; i<i_tags; i++) temp_tag_position[i]=new int[3];
        for (int i=0; i<i_tags; i++) {
            temp_tag_position[i][0]=tag_position[i][0];
            temp_tag_position[i][1]=tag_position[i][1];
            temp_tag_position[i][2]=tag_position[i][2];
        }
        temp_tag_position [++i_tags][0]=tag_id;
        temp_tag_position [i_tags][1]=position_begin;
        temp_tag_position [i_tags][2]=position_end;
        delete [] tag_position;
        tag_position=temp_tag_position;
        return;
    }

    tag_position=new int* [1];
    tag_position[0]=new int [3];
    tag_position[0][0]=tag_id;
    tag_position[0][1]=position_begin;
    tag_position[0][2]=position_end;
    i_tags++;
    return;
}

html::~html() {
    for (int i=0; i<max_tags; i++) std::cout << tag_position [i][0]<< " "<<tag_position[i][1]<< " "<<tag_position[i][2]<<"\n";
    for (int i=0; i<max_tags; i++) delete[] tag_position[i];
}

*/

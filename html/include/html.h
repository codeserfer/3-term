#ifndef HTML_H
#define HTML_H
#include <string>
#include <vector>
#include <iostream>
//using namespace std;

class html {
    public:
        html();
        ~html();
        bool loadfile();
        void add_tag (int, int, int);
        void add_text (std::string);
        void print_code ();
        friend std::ostream& operator<< (std::ostream& out, html obj) {
            out<<obj.s;
            return out;
        }
        void test ();
    protected:
    private:
        int num_tags; //counts the number of tags
        char** tags; //array of names of tags

        int** tag_position; //positions of tags in html-code
        int num_tag_position; //counts the number if tag_position
        std::string s; //string of html-code
};


/*using namespace std;
class html {
    public:
        html();
        ~html();
        void add_tag (int, int, int);
    protected:
    private:
    void add_tag_to_base (char*, int);
    string s;
    char** tags;
    int** tag_position;
    int i_tags; //количество уже внесенных тегов
    int max_tags; //id последнего тега в базе тегов


};
*/
#endif // HTML_H

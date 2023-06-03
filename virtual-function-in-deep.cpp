#include <iostream>
#include <string>
using namespace std;

class ybt
{

protected:
    string s;
    float rating;

public:
    ybt(string t, float r)
    {
        s = t;
        rating = r;
    }
    virtual void display()
    {
    }
};

class ybtvideo : public ybt
{
    float videolength;

public:
    ybtvideo(string t, float r, float v1) : ybt(t, r)
    {
        videolength = v1;
    }

    void display()
    {
        cout << "this an amazing video with title : " << s << endl;
        cout << "ratings : " << rating << " rate out of 5 star : " << endl;
        cout << "length of this video : " << videolength << "minutes" << endl;
    }
};

class ybttext : public ybt
{
    int words;

public:
    ybttext(string t, float r, int v2) : ybt(t, r)
    {
        words = v2;
    }

    void display()
    {
        cout << "this an amazing text with title : " << s << endl;
        cout << "ratings of text : " << rating << " rate out of 5 star : " << endl;
        cout << "no of words in text : " << words << "words" << endl;
    }
};

int main()
{
    string s;
    float rating, length;
    int word;

    s = " : cpp at the complete state : ";
    length = 5.56;
    rating = 4.5;
    ybtvideo video(s, rating, length);

    s = "cpp completed in text form ";
    rating = 4.6;
    word = 1234;
    ybttext text(s, rating, word);

    ybt *ptr[2];
    ptr[0] = &video;
    ptr[1] = &text;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}
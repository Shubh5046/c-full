#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string titel;
    float rating;

public:
    CWH(string s, float r)
    {
        titel = s;
        rating = r;
    }
    virtual void Display() {}
};

class videomode : public CWH
{
    float videolength;

public:
    videomode(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void Display()
    {
        cout << " This is a amazing video with titel " << titel << endl;
        cout << " The rating" << rating << " of the video out of 5 is  " << endl;
        cout << " The length of the video is " << videolength << endl;
    }
};
class Textmode : public CWH
{
    float word;

public:
    Textmode(string s, float r, int a) : CWH(s, r)
    {
        word = a;
    }
    void Display()
    {
        cout << " This is a amazing text tutorial  with titel " << titel << endl;
        cout << " The rating" << rating << " of the text out of 5 is  " << endl;
        cout << " The no  of word in this text is " << word << endl;
    }
};
int main()
{
    string titel;
    float rating, videolength;
    int word;

    titel = "Falling in love ";
    rating = 4.5;
    videolength = 5.47;
    videomode loveVideo(titel, rating, videolength);
 

    titel = "Falling in love ";
    rating = 4.5;
    word = 400;
    Textmode loveText(titel, rating, word);

    CWH *tuts[2];
    tuts[0] = &loveVideo;
    tuts[1] = &loveText;

    tuts[0]->Display();
    tuts[1]->Display();
}
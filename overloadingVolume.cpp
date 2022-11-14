#include<iostream>
using namespace std;
class Vol
{
    public:
    void volume(int l, int w , int h)
    {
        cout << "VOLUME OF CUBOID IS: " << l*w*h << endl;
    }
    void volume (int r)
    {
        cout << "VOLUME OF SPHERE IS: " << 4*3.14*r*r*r << endl;
    }
    void volume (int r, int h)
    {
        cout << "VOLUME OF CYLINDER IS: " << 3.14*r*r*h << endl;
    }
};
int main()
{
    Vol v;
    v.volume(5,9,8);
    v.volume(12);
    v.volume(8,10);
    return 0;
}
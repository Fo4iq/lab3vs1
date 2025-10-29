// #define NDEBUG
#include<iostream>
using namespace std;
#include<cassert>

void intersect(int a, int b, int c, int d, int &l, int &r) {
    if (a > c) {
        l = a;
    } else {
        l = c;
    }
    
    if (b < d) {
        r = b;
    } else {
        r = d;
    }
    
    if (l > r) {
        l = 0;
        r = -1;
    }
}

int main()
{
    
    //Dulustan's tests
    {
        {
            int l,r; intersect(0,3,1,5,l,r);
            assert(l==1 && r==3);
        }
        {
            int l,r; intersect(3,3,0,10,l,r);
            assert(l==3 && r==3);
        }
        {
            int l,r; intersect(-10000,-1,-25,25,l,r);
            assert(l==-25 && r==-1);
            cout << "yes" << endl;
        }     
    }

    //Минимум 4 теста
    //Все возможные случаи должны быть протестированы!
    //Student's tests
    {
        int l, r;
        intersect(1, 5, 3, 7, l, r);
        assert(l == 3 && r == 5);

        intersect(1, 3, 5, 7, l, r);
        assert(l == 0 && r == -1);

        intersect(2, 8, 4, 6, l, r);
        assert(l == 4 && r == 6);

        intersect(5, 5, 3, 7, l, r);
        assert(l == 5 && r == 5);

        intersect(1, 5, 5, 8, l, r);
        assert(l == 5 && r == 5);

        intersect(3, 7, 3, 7, l, r);
        assert(l == 3 && r == 7);

        intersect(-5, -1, -3, 2, l, r);
        assert(l == -3 && r == -1);

        cout << "Nice!";
    }    
}


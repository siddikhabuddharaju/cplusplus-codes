#include<iostream>
using namespace std;

class fungus
{
    public:
        void displaydanger()
        {
            cout<<"Iam not supposed to take in your diet , formed from dead and decaying matter. \n";
        }
        void okaytoeat()
        {
            cout<<"Some of the nutrious food is formed from me. \n";
        }
};

class mushroom: public fungus
{
    public:
        void goodfood()
        {
            cout<<"Sometimes i can be included in your diet and also can consists of huge protiens. \n";
        }
};

int main()
{
    mushroom bacteria;
    bacteria.displaydanger();
    bacteria.okaytoeat();
    bacteria.goodfood();
    return 0;
}

#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 1; }
    void setprice(void);    
    void displayprice(void);
    };

void shop ::setprice(void)
{
    cout << "enter the id of your item no" << counter << endl;
    cin >> itemid[counter];
    cout << " enter the price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 1; i < counter; i++)
    {
        cout << " the price of the item with id " << itemid[i] << "is" <<"="<< itemprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    
    return 0;
}
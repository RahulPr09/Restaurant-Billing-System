#include <bits/stdc++.h>
using namespace std;

class bill
{

public:
    char c;
    string name;
    char item;
    char veg, nonveg;
    float amt = 0;
    char selectagain;
    vector<string> items;
    vector<int> rate;

    int project()
    {
        cout << "\t\t\t\t ************** WELCOME TO RP FOOD PLAZA **************" << endl;
        cout << "Please enter your name: " << name;
        cin >> name;

    start:
        cout << endl;
        cout << "\t\t\t\t\t\t\t ************** Here is the MENU **************" << endl;
        cout << endl;
        cout << "\t\t\t\t A. Veg Items                                                           B. Non-Veg Items" << endl;
        cout << endl;
        cout << "\t\t\t\t(1) Samose              Rs. 12                                   \t(1) Chicken Kebab           Rs. 150" << endl;
        cout << "\t\t\t\t(2) Bread Pakoda        Rs. 15                                   \t(2) Chicken Shawarma        Rs. 170" << endl;
        cout << "\t\t\t\t(3) Kachori             Rs. 20                                   \t(3) Chicken 65              Rs. 180" << endl;
        cout << "\t\t\t\t(4) Imarti              Rs. 30                                   \t(4) Chicken Biryani         Rs. 100" << endl;
        cout << "\t\t\t\t(5) Paneer Tikka        Rs. 150                                  \t(5) Chicken Chowmein        Rs. 90" << endl;
        cout << "\t\t\t\t(6) Chhole Bhatooore    Rs. 40                                   \t(6) Mutton Kebab            Rs. 250" << endl;

        cout << endl;

        cout << "\t\t\t\t\t\t ************** Please follow below instructions **************" << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t1. Please press 's' to start placing your order " << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t2. You can select between veg/non-veg or both " << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t3. Please press 'a' to select veg items " << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t4. Please press 'b' to select non-veg items " << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t5. You will get final bill after your order " << endl;
        cout << endl;
        cout << endl;

        cout << "\t\t\t\t\t\t\tPlease enter 's' to place your order:- ";
        cin >> c;
        if (c == 's' || c == 'S')
        {
        items:
            cout << "\t\t\t\t\t\t\t**************************************" << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t\tPlease enter your choice:- " << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t\t A. Veg Items                            B. Non-Veg Items" << endl;
            cin >> item;

            if (item == 'a' || item == 'A')
            veglist:
            {
                cout << "\t\t\t\t\t\t\tPlease enter your veg choice:- ";
                cin >> veg;
                if (veg == '1')
                {
                    items.push_back("Samosa                                                     ");
                    amt = amt + 12;
                    rate.push_back(12);
                }
                else if (veg == '2')
                {
                    items.push_back("Bread Pakoda                                               ");
                    amt = amt + 15;
                    rate.push_back(15);
                }
                else if (veg == '3')
                {
                    items.push_back("Kachori                                                    ");
                    amt = amt + 20;
                    rate.push_back(20);
                }
                else if (veg == '4')
                {
                    items.push_back("Imarti                                                     ");
                    amt = amt + 30;
                    rate.push_back(30);
                }
                else if (veg == '5')
                {
                    items.push_back("Paneer Tikka                                               ");
                    amt = amt + 150;
                    rate.push_back(150);
                }
                else if (veg == '6')
                {
                    items.push_back("Chhole Bhatoore                                            ");
                    amt = amt + 40;
                    rate.push_back(40);
                }
                else
                {
                    cout << "\t\t\t\t\t\t\tYou have pressed wrong button" << endl;
                    goto veglist;
                }

                cout << "\t\t\t\t\t\t\tDo you want to select more (y/n)?? ";
                cin >> selectagain;
                if (selectagain == 'y')
                {
                    goto items;
                }
                else
                {
                    return amt;
                }
            }

                else if (item == 'b' || item == 'B')
                    nonveglist:
                {
                    cout << "\t\t\t\t\t\t\tPlease enter your non-veg choice:- ";
                    cin >> nonveg;

                    if (nonveg == '1')
                    {
                        items.push_back("Chicken Kebab                                              ");
                        amt = amt + 150;
                        rate.push_back(150);
                    }
                    else if (nonveg == '2')
                    {
                        items.push_back("Chicken Shawarma                                           ");
                        amt = amt + 170;
                        rate.push_back(170);
                    }
                    else if (nonveg == '3')
                    {
                        items.push_back("Chicken 65                                                 ");
                        amt = amt + 180;
                        rate.push_back(180);
                    }
                    else if (nonveg == '4')
                    {
                        items.push_back("Chicken Biryani                                            ");
                        amt = amt + 100;
                        rate.push_back(100);
                    }
                    else if (nonveg == '5')
                    {
                        items.push_back("Chicken Chowmein                                           ");
                        amt = amt + 90;
                        rate.push_back(90);
                    }
                    else if (nonveg == '6')
                    {
                        items.push_back("Mutton Kebab                                               ");
                        amt = amt + 250;
                        rate.push_back(250);
                    }
                    else
                    {
                        cout << "\t\t\t\t\t\t\tYou have pressed wrong button" << endl;
                        goto nonveglist;
                    }

                    cout << "\t\t\t\t\t\t\tDo you want to select more (y/n)?? ";
                    cin >> selectagain;
                    if (selectagain == 'y')
                    {
                        goto items;
                    }
                    else
                    {
                        return amt;
                    }
                }
            else
            {
                cout << "\t\t\t\t\t\t\tYou have pressed wrong option" << endl;
                goto items;
            }
        }
        else
        {
            cout << "\t\t\t\t\t\t\tYou have pressed wrong key" << endl;
            goto start;
        }

        return amt;
    }

    void print()
    {
        cout << "\t\t\t\t\t\t\tPrinting your bill invoice......." << endl;
        cout << "\t\t\t\t\t\t\t *******************************************************************" << endl;
        cout << endl;

        cout << "\t\t\t\t\t\t\t                               RP PLAZA                            " << endl;
        cout << endl;

        cout << "\t\t\t\t\t\t\t *******************************Bill Invoice***********************" << endl;
        cout << "\t\t\t\t\t\t\t Name of customer:- " << name << "                    " << __DATE__ << " " << __TIME__ << endl;
        cout << "\t\t\t\t\t\t\t *******************************************************************" << endl;
        cout << "\t\t\t\t\t\t\t Items bought                                               Amount" << endl;
        cout << "\t\t\t\t\t\t\t ************                                               ******" << endl;
        for (int i = 0; i < (items.size()); i++)
        {
            cout << "\t\t\t\t\t\t\t " << items.at(i) << "Rs. " << rate.at(i) << endl;
        }

        cout << "\t\t\t\t\t\t\t *********************************************************************" << endl;
        cout << "\t\t\t\t\t\t\t Discount:-                                                 "
             << "Rs. " << 0.08 * amt << endl;
        cout << "\t\t\t\t\t\t\t GST:-                                                      "
             << "Rs. " << 0.05 * amt << endl;
        cout << "\t\t\t\t\t\t\t *********************************************************************" << endl;
        cout << "\t\t\t\t\t\t\t Total bill to be paid:-                                    "
             << "Rs. " << amt - (0.08 * amt) + (0.05 * amt) << endl;
        cout << "\t\t\t\t\t\t\t *********************************************************************" << endl;
        cout << "\t\t\t\t\t\t\t *********************************************************************" << endl;
    }
};

int main()
{
    bill b;
    b.project();
    b.print();
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t\t\t  Thanks for visiting us :)" << endl;

    return 0;
}
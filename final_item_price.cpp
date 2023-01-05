/*
To make a profit, a local store marks up the prices of its items by a certain percentage. Write a C++
program that reads the original price of the item sold, the percentage of the marked-up price, and the
sales tax rate. The program then outputs the original price of the item, the percentage of the mark-up,
the store’s selling price of the item, the sales tax, and the final price of the item. (The final price of the item is the selling price plus the sales tax.)
*/

#include <iostream>

using namespace std;

int main()
{
    double original_price, markup_percent, sales_tax_rate;
    cout << "Enter original price: ";
    cin >> original_price;
    cout << "Enter mark-up percentage: ";
    cin >> markup_percent;
    cout << "Enter sales tax rate: ";
    cin >> sales_tax_rate;

    double markup = original_price * markup_percent / 100;
    double selling_price = original_price + markup;
    double sales_tax = selling_price * sales_tax_rate / 100;
    double final_price = selling_price + sales_tax;

    cout << "Original price: " << original_price << endl;
    cout << "Mark-up percentage: " << markup_percent << "%" << endl;
    cout << "Store's selling price: " << selling_price << endl;
    cout << "Sales tax: " << sales_tax << endl;
    cout << "Final price: " << final_price << endl;
    return 0;
}
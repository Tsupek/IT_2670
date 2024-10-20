// Trevor_Supek_Lab2_3.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;



int main()
{
	Invoice invoice("1218", "Screwdriver", 10, 25);

	cout << "Part Number: " << invoice.getPartNumber() << endl;
	cout << "Part Description: " << invoice.getPartDescription() << endl;
	cout << "Quantity: " << invoice.getQuantity() << endl;
	cout << "Price Per Item: $" << invoice.getPricePerItem() << endl;
	cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

	invoice.setQuantity(-35);
	invoice.setPricePerItem(-14);


	cout << "After Update:" << endl;
	cout << "Quantity: " << invoice.getQuantity() << endl;
	cout << "Price Per Item: $" << invoice.getPricePerItem() << endl;
	cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

	return 0;
}

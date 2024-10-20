#pragma once
#include <string>
#include <iostream>
using namespace std;


class Invoice
{
private:
	string partNumber;
	string partDescription;
	int quantity;
	int pricePerItem;

public:
	Invoice(const string& partNum, const string& partDesc, int qty, int price)
		: partNumber(partNum), partDescription(partDesc) {
		setQuantity(qty);
		setPricePerItem(price);
	}

	// Setter for Part Number
	void setPartNumber(const string& partNum) {
		partNumber = partNum;
	}

	//Getter for Part Number
	string getPartNumber() const {
		return partNumber;
	}

	// Setter for Part Descirption
	void setPartDescription(const string& partDesc) {
		partDescription = partDesc;
	}

	//Getter for Part Description
	string getPartDescription() const {
		return partDescription;
	}

	// Setter for Quantity
	void setQuantity(int qty) {
		quantity = (qty > 0) ? qty : 0;
	}

	//Getter for Quantity
	int getQuantity() const {
		return quantity;
	}

	//Setter for PricePerIten
	void  setPricePerItem(int price) {
		pricePerItem = (price > 0) ? price : 0;
	}

	//Getter for PricePerItem
	int getPricePerItem() const {
		return pricePerItem;
	}

	//Getter for InvoiceAmount
	int getInvoiceAmount() const {
		return quantity * pricePerItem;
	}
};


#include<iostream>
#include<string>
using namespace std;
class Order;

class payment
{
private:
	string pay_id;
	string card_type;
	double amount;
	string date;
	Order* order;

public:
	payment(){
	pay_id = "no id allocated";
	card_type = "no card type";
	date = "no date recorde";
	amount = 0.0;
	}
	payment(string pid, string ctype, string da, double amou, Order* o){
	pay_id = pid;
	card_type = ctype;
	date = da;
	amount = amou;
	order = o;
    }
	void displaypayment(){
	cout << "------------------------------the payment id is :" << pay_id << "------------------" << endl;
	cout << "------------------------------the card type is :" << card_type << "------------------" << endl;
	cout << "------------------------------the payment date is :" << date << "------------------" << endl;
	cout << "------------------------------the payment amount is :" << amount << "------------------" << endl;
    }
	double calamount(){
		return 0.0;
	}
	~payment(){
	cout << "--------------------------------------------the payment id " << pay_id << " deleted----------------------------" << endl;
	}
};

class Order
{
private:
	string order_id;
	string order_type;
	payment* paym;
	
public:
	Order(){
	order_id = "no order id allocate";
	order_type = "no order type";
    }

	Order(string orid, string ortype){
	order_id = orid;
	order_type = ortype;
	}
	void displayorder(){
	cout << "------------------------------the order id is :" << order_id << "------------------" << endl;
	cout << "------------------------------the order type is :" << order_type << "------------------" << endl;
	}
	void addpayment(payment *pay){
	paym = pay;
	}
	~Order(){
	cout << "--------------------------------------------the order id " << order_id << " deleted----------------------------" << endl;
		
	}

};


int main()
{
    Order *o1 = new Order("or01", "prescriptional medicine");
	payment *pay1 = new payment("p001", "credit", "2022/03/19", 3000.00 , o1);
	
	pay1-> displaypayment();
	o1->displayorder();
	delete pay1;
	delete o1;

	return 0;

}

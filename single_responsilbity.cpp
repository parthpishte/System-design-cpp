#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class product{
 public:
 string name;
 int price;
 int quantity;

 product(string name,int price,int quantity){
    this->name=name;
    this->price=price;
    this->quantity=quantity;
 }
};
class shopping_cart{
    public:
    vector<product>products;
    void calculate_total_bill(){
        int sum=0;
        for(auto i:products){
            sum+=(i.quantity)*(i.price);
        }
        cout<<"total bill is :"<<sum<<endl;
    }


};
class Invoice_service{
    public:
    shopping_cart *sc;
    Invoice_service(shopping_cart & cart){
        sc=&cart;
    }
    void print_invoice(){
        for(int i=0;i<sc->products.size();i++){
        cout<<"Product :"<<sc->products[i].name<<" Quantity :"<<sc->products[i].quantity<<" Price :"<<sc->products[i].price<<endl;
    }
}
};
int main(){
    shopping_cart cart;
    Invoice_service Inv(cart);

    cart.products.push_back(product("rin",10,1));
    cart.products.push_back(product("wheel",100,2));
    cart.calculate_total_bill();
    Inv.print_invoice();
    return 0;
}
//class should have one reson to change i.e class should have only one responsiblity
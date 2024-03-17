#include <iostream>


int main(){ double merchandise_cost; double salarie; double rent; double sale_discout=0.15; double desired_profit=0.01; double electricity; cout<<"enter merchandise price"<<endl; cin>>merchandise_cost; cout<<"rent"<<endl; cin>> rent; cout<<"salary"<<endl; cin>>salarie; cout<<"enter cost of electricity"<<endl; cin>>electricity; double total_expens=salarie+rent+electricity; double net_profit=merchandise_cost*desired_profit; double total_cost_afterprofit=merchandise_cost+total_expens+net_profit; double selling_price_afterdiscout=total_cost_afterprofit/(1-sale_discout); double markup_percentage=((selling_price_afterdiscout-merchandise_cost)/merchandise_cost)*100; cout<<"the merchandise should be marked up"<<markup_percentage<<"% to get desired profit after expenses and sales"<<endl;

return 0;


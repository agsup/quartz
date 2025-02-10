Greg Supratman

a. No. It is possible for two different products at two different stores to have the same department, manager name, assistant, price, weight, manufacturer, and manufacturer location.

b. Dept -> Assist. If (Product, Store) -> Dept, and Dept -> Assist, then (Product, Store) -> Assist

c.
- Store -> Manager
- Manufact -> Manuloc
- (Dept, Store) -> Assist
- Product -> Manufact

d. 
- Store ->-> Dept.
- Product ->-> Store.

e. If you delete the fourth row, you lose the relation of Assistant Arnold to the Toy Department, as well as the price of a wagon at Target and the association of Manager Brown to Target.

f.
- PRODUCT_INFO: (<u>Product</u>, Weight, Manufact)
- MANUFACTS: (<u>Manufact</u>, Manuloc)
- INVENTORY: (<u>Product</u>, Store, Dept, Price)
- DEPT_ASSISTANTS: (<u>Store</u>, Dept, Assist)
- STORE_MANAGERS: (<u>Store</u>, Manager)
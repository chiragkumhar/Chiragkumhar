use MODULE_5_Database;

create table Item_Mast(
Pro_Id int primary key,
Pro_Name text not null,
Pro_Price float not null,
Pro_Com int not null
);

insert into Item_Mast values
(101,"Mother Board",3200.00,15),
(102,"Key Board",450.00,16),
(103,"ZIP drive",250.00,14),
(104,"Speaker",550.00,16),
(105,"Moniter",5000.00,11),
(106,"DVD Drive",900.00,12),
(107,"CD Drive",800.00,12),
(108,"Printer",2600.00,13),
(109,"Refill Cartridge",350.00,13),
(110,"Mouse",250,12);

-- Qsn-20. From the following table, write a SQL query to select a range of products whose price is in the range Rs.200 to Rs.600. Begin and end values are included. Return pro_id, pro_name, pro_price, and pro_com.
select * from  Item_Mast where Pro_Price > 200 AND Pro_Price < 600

-- Qsn-21. From the following table, write a SQL query to calculate the average price for a manufacturer code of 16. Return avg.
select AVG(Pro_Price) from Item_Mast where Pro_Com=16;

-- Qsn-22. From the following table, write a SQL query to display the pro_name as 'Item Name' and pro_priceas 'Price in Rs.'  
select Pro_Name as "Item_Name",Pro_Price as "Price_in_Rs." from Item_Mast;

-- Qsn-23. From the following table, write a SQL query to find the items whose prices are higher than or equal to $250. Order the result by product price in descending, then product name in ascending. Return pro_name and pro_price.\
select Pro_Name , Pro_Price from Item_Mast where Pro_Price >=250 order by Pro_Price desc , Pro_Name

-- Qsn-24. From the following table, write a SQL query to calculate average price of the items for each company. Return average price and company code.
select Pro_com,avg(Pro_price)	
from Item_Mast
group by Pro_com;

commit;
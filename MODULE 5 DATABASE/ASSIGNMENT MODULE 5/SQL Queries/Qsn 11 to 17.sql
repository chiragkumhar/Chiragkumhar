-- Qsn-11. Create table given below: Salesperson and Customer.

use MODULE_5_Database;

create table Sales_Person(
S_No int primary key,
S_NAME text not null,
CITY varchar(20) not null,
COMM float not null
);
insert into Sales_Person values
(1001,"Peel","London",.12);

select * from Sales_Person

drop table Sales_Person

insert into Sales_Person values
(1002,"Serres","San Jose",.13),
(1004,"Motika","London",.11),
(1007,"Rafkin","Barcelona",.15),
(1003,"Axelrod","New York ",.1);

select * from Sales_Person;

create table Customer(
CNM int primary key,
C_NAME text not null,
CITY varchar(20) not null,
RATING int not null,
S_No int,
foreign key  Customer(S_No)  references Sales_Person(S_No)
);

insert into Customer values
(201,"Hoffman","London",100,1001),
(202,"Giovanne","Roe",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Grass","Barcelona",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Roe",100,1004);

select * from Customer

-- Qsn-14. Names and cities of all salespeople in London with commission above 0.12 
select * from Sales_Person where CITY = "London" AND COMM < 0.12;

-- Qsn-15. All salespeople either in Barcelona or in London 
select * from Sales_Person where CITY = "Barcelona" OR CITY = "London";

-- Qsn-16. All salespeople with commission between 0.10 and 0.12. (Boundary valuesshould be excluded).
select * from Sales_Person where COMM >0.10 AND COMM<0.12;

update Customer SET CITY="Rome" where CNM=202
update Customer SET CITY="Rome" where CNM=207

-- Qsn-17. All customers excluding those with rating <= 100 unless they are located in Rome
select * from Customer where RATING<=100 AND CITY="Rome"
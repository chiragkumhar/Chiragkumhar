-- Qsn-2. Create table given below: Employee and IncentiveTable

use MODULE_5_Database;

create table Employee(
Employee_id int primary key,
First_Name text not null,
Last_Name text not null,
salary int,
Joining_Date varchar(50),
Department varchar(20)
);

select * from Employee
drop table Employee
insert into Employee values
(1,"John","Abraham",1000000,"01-JAN-13 12.00.00 AM","Banking");

select * from Employee 
insert into Employee values
(2,"Micheal","Clarke",800000,"01-JAN-13 12.00.00 AM","Insuracnce"),
(3,"Roy","Thomas",700000,"01-FEB-13 12.00.00 AM","Banking"),
(4,"Tom","Jose",600000,"01-FEB-13 12.00.00 AM","Insuracnce");

insert into Employee values
(5,"Jerry","Pinto",650000,"01-FEB-13 12.00.00 AM","Insuracnce"),
(6,"Philip","Mathew",750000,"01-JAN-13 12.00.00 AM","Services"),
(7,"TestName1","123",650000,"01-FEB-13 12.00.00 AM","Services"),
(8,"TestName2","Lname%",600000,"01-FEB-13 12.00.00 AM","Insuracnce");
select * from Employee

create table Incentive(
Employee_ref_id int,
foreign key Incentive(Employee_ref_id) references Employee(Employee_id),
Incentive_Date varchar(10) not null,
Incetive_Amount int not null
);

select * from Incentive
drop table Incentive
insert into Incentive values
(1,"01-FEB-13",5000),
(2,"01-FEB-13",3000),
(3,"01-FEB-13",4000),
(1,"01-JAN-13",4500),
(2,"01-JAN-13",3500);
select * from Incentive

-- Qsn-3. Get First_Name from employee table using Tom name “Employee Name”.
select  * from Employee where First_Name="Tom";

-- Qsn-4. Get FIRST_NAME, Joining Date, and Salary from employee table.
select First_Name,Joining_Date,salary from Employee;

-- Qsn-5. Get all employee details from the employee table order by First_Name Ascending and Salary descending?
select * from Employee order by First_Name asc;	
select * from Employee order by salary desc;

-- Qsn-6. Get employee details from employee table whose first name contains ‘J’.
select * from employee where First_Name like 'J%';

-- Qsn-7. Get department wise maximum salary from employee table order by salary ascending? 
select * from Employee order by salary asc;

-- Qsn - 9. Select first_name, incentive amount from employee and incentives table forthose employees who have incentives and incentive amount greater than 3000 
select * from incentive where Incetive_Amount>3000
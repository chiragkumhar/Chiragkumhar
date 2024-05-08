-- Qsn-1. Create Table Name : Student and Exam 

create database MODULE_5_Database;
show databases
use MODULE_5_Database;

create table Student(
Roll_no int primary key,
Name text not null,
Branch varchar(50)
);
select * from Student

insert into Student values
(1,"Jay","Computer Science"),
(2,"Suhani","Electronic and Com"),
(3,"Kriti","Electronic and Com");

select * from Student

create table Exam(
Roll_no int,
foreign key Exam(Roll_no) references Student(Roll_no),
S_Code varchar(10),
Marks int not null,
P_Code varchar(5) not null
);
select * from Exam
drop table Exam

insert into Exam values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");

select * from Exam
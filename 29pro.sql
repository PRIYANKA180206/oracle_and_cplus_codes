select tablespace_name from user_tablespaces;
select tablespace_name,file_name,bytes from bda_data_files;

create tablespace test2 datafile'C:\app\PC_15\oradata\orahome\mydata18.dbf' size 10m;

create table emp(no number(4)) tablespace test2;
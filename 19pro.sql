declare 
r_emp emp % rowtype;
begin
select * into r_emp from emp where empno=22;
dbms_output.put_line(r_emp.empno);
dbms_output.put_line(r_emp.ename);
end;
/
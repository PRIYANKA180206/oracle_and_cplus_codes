declare
empid  emp.empno % type;
empname emp.ename % type;
begin
empid:=1001;
empname:='priyanka';
dbms_output.put_line('Employee ID :'||empid);
dbms_output.put_line('Employee name:'||empname);
end;
/
declare
	val1 number:=0;
	val2 number:=1;
	nextval number;
	term number:=10;
begin
dbms_output.put_line('Fibonacci series');
dbms_output.put_line(val1);
dbms_output.put_line(val2);
for i in 3..term loop
nextval:=val1+val2;
dbms_output.put_line(nextval);
val1:=val2;
val2:=nextval;
end loop;
end;
/

declare 
	c_id customers.id%type:=2;
	c_name customers.name%type;
	c_addr customers.address%type;
begin
	select name,address into c_name,c_addr from customers where id =c_id;
	dbms_output.put_line('Name:'||c_name);
	dbms_output.put_line('Address:'||c_addr);
exception
	when no_data_found  then
		dbms_output.put_line('No such customers:');
	when too_many_rows  then
		dbms_output.put_line('The database return more that one customer:');
	when others then
		dbms_output.put_line('Error:');
end;
/





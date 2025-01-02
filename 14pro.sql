declare 
	c_id customers.id % type:=&c_id;
	c_name customers.name % type;
	c_addr customers.address % type;
	ex_invalid_id exception;
begin
	if c_id<=0 then
	raise ex_invalid_id;
	else
	select name,address into c_name,c_addr from customers where id =c_id;
	dbms_output.put_line('Name:'||c_name);
	dbms_output.put_line('Address:'||c_addr);
	end if;
exception
	when ex_invalid_id then
		dbms_output.put_line('Id must be greater than zero!');
	when no_data_found then
		dbms_output.put_line('No such customers!');
		when others then
		dbms_output.put_line('Error!');
end;
/





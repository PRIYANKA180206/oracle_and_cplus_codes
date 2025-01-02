create or replace trigger dml_tri
before insert or update or delete on emp18 for each row
begin
case
when inserting then
dbms_output.put_line('record inserted');
when updating then
dbms_output.put_line('record updated');
when deleting then
dbms_output.put_line('record deleted');
end case;
end;
/



create or replace trigger tri_store
before delete or update on emp06
for each row
begin
if updating then
insert into emp06 values(:old.id,:old.name,:old.salary);
elsif deleting then
insert into emp06 values(:old.id,:old.name,:old.salary);
end if;
end;
/
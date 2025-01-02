declare
       grade char(1):='B';
    begin
       case grade
    when 'A' then
    dbms_output.put_line('Execellent');
    when 'B' then
    dbms_output.put_line('Very Good');
    when 'C' then
   dbms_output.put_line('Good');
   when 'D' then
   dbms_output.put_line('Average');
   when 'E' then
   dbms_output.put_line('Passes with grace');
   else
   dbms_output.put_line('Failed');
   end case;
   end;
   /
DECLARE
    val NUMBER;
    factorial NUMBER := 1;
BEGIN
        val := &val; 
	    FOR i IN 1..val LOOP
        	factorial := factorial * i;
    END LOOP;
    DBMS_OUTPUT.PUT_LINE('The factorial of ' || val || ' is ' || factorial);
END;
/

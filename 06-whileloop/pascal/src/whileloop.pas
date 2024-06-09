program whileloop;

var
   i: integer;

begin

    writeln('Starting while loop...');

    i := 0;

    while i < 11 do
	    begin
		    write(i, ' ');
		    inc(i)
	    end;

    writeln();
    writeln('Done!');

end.
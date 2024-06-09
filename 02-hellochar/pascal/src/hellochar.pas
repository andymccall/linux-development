program HelloChar;

uses crt;

var
  chr: char;

begin

  write('Please enter a character: ');
  chr:=ReadKey;
  writeln();
  writeln('Hello, ', chr);

end.
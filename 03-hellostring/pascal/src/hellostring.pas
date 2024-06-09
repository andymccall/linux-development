program HelloChar;

uses crt;

var
  strName: string[25];

begin

  write('Please enter your name: ');
  readln(strName);
  writeln('Hello, ', strName, '!');

end.
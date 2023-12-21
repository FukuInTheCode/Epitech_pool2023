# My_printf
<br>

## A major project...
<br>
The goal of this project was to completely recode <pre>printf</pre> in C language.

## The "man" of the my_printf (in simplified)...
<br>
The my_printf is a function used for output. It prints the given statement to the console following the format. <br>
The declaration of my_printf is done as follows : <pre> my_printf(const char *format, arg1, arg2, ...); </pre> There can be additional arguments following the string, if there exist format specifiers in the string but don't worry, we'll explain it all to you !

<br>
<br>

### Format Specifer :
The format specifier follows the following prototype : <pre> %[flags][width][.precision][length]specifier</pre>
<br>
<div align="center">
<table>
    <thead>
        <tr>
            <th>Specifier</th>
            <th>Output</th>
            <th>How it's working</th>
            <th>Example</th>
            <th>Output example</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>c</td>
            <td>printing character</td>
            <td><pre>my_printf("%c", char_variable);</pre></td>
            <td><pre>my_print("%c", 'z');</pre></td>
            <td>z</td>
        </tr>
        <tr>
            <td>d <br><br> i</td>
            <td>printing integer <br><br> printing integer</td>
            <td><pre>my_printf("%d", int_variable);</pre></td>
            <td><pre>my_printf("%d or %i", 3456, -3456);</pre></td>
            <td>3456 or -3456</td>
        </tr>
        <tr>
            <td>u</td>
            <td>printing unsigned integer</td>
            <td><pre>my_printf("%u", unsigned_int_variable);</pre></td>
            <td><pre>my_printf("%u", 3456);</pre></td>
            <td>3456</td>
        </tr>
        <tr>
            <td>o</td>
            <td>printing unsigned octal</td>
            <td><pre>my_printf("%o", unsigned_int_variable);</pre></td>
            <td><pre>my_printf("%o", 100);</pre></td>
            <td>100</td>
        </tr>
        <tr>
            <td>n</td>
            <td>Nothing printed</td>
            <td><pre>my_printf("%n"); </pre></td>
            <td><pre>my_printf("%n", ); </pre></td>
            <td></td>
        </tr>
        <tr>
            <td>f <br><br> F</td>
            <td>printing floating-point numbers <br><br> printing floating-point numbers</td>
            <td><pre>my_printf("%f and %F", double_variable, double_variable); </pre></td>
            <td><pre>my_printf("%f and %F", 3.1415, 3.1415); </pre></td>
            <td>3.1415 and 3.1415</td>
        </tr>
        <tr>
            <td>s</td>
            <td>printing string</td>
            <td><pre>my_printf("%s", char_variable); </pre></td>
            <td><pre>my_printf("%s", "Hello"); </pre></td>
            <td>Hello</td>
        </tr>
        <tr>
            <td>p</td>
            <td>printing memory addresse</td>
            <td><pre>my_printf("%p", pointer_adresse_variable); </pre></td>
            <td><pre>my_printf("%p", ); </pre></td>
            <td></td>
        </tr>
        <tr>
            <td>x <br><br> X</td>
            <td>printing hexadecimal value <br><br> printing hexadecimal value (uppercase)</td>
            <td><pre>my_printf("%x and %X", int_variable, int_variable); </pre></td>
            <td><pre>my_printf("%x and %X", 42, 42); </pre></td>
            <td> 2a and 2A</td>
        </tr>
        <tr>
            <td>a <br><br> A</td>
            <td>printing hexadecimal floating point (lowercase) <br><br> printing hexadecimal floating point (uppercase)</td>
            <td><pre>printf("%a and %A", double_variable, double_variable); </pre></td>
            <td><pre>printf("%a and %A", ); </pre></td>
            <td></td>
        </tr>
        <tr>
            <td>e <br><br> E</td>
            <td>printing scientific notation (mantissa/exponent)(lowercase) <br><br>printing scientific notation (mantissa/exponent)(uppercase) </td>
            <td><pre>printf("%e and %E", double_variable, doouble_variable); </pre></td>
            <td><pre>printf("%e and %e", 3.1415, 3.1415); </pre></td>
            <td>3.141590e+00 and 3.141590e+00</td>
        </tr>
        <tr>
            <td>g <br><br> G</td>
            <td>printing shortest representation : %g or %G <br><br>printing shortest representation : %g or %G </th>
            <td><pre>printf("%g and %G", double_variable, double_variable); </pre></td>
            <td><pre>printf("%g and %G", 3.1415, 93000000.0); </pre></td>
            <td>3.1415 and 9.3e+07</td>
        </td>
        <tr>
            <td>%</td>
            <td>printing a % after the %</td>
            <td><pre>printf("%%"); </pre></td>
            <td><pre>printf("%%"); </pre></td>
            <td>%%</td>
        </tr>
    </tbody>
</table>
</div>

<br>
<br>

### Flags :
<div align="center">
    <table>
        <thead>
            <tr>
                <th>Flags</th>
                <th>What is it ?</th>
            </tr>
            <tr>
                <td>#</td>
                <td>With o conversion, the first character of the output string  is made zero (by prefexing a 0 if it was not zero already). With x and X conversions, a nonzero result has the string "0x" or "0X" prepended to it. With a, A, e, E, f, F, g and G conversions, the output will always contain a decimal point, even if no digits follow it. With a g and G conversions, trailing zeros aren't removed from the result. For the other conversions, the result is undefined.</td>
            </tr>
            <tr>
                <td>0</td>
                <td>This flags is for d, i, o, u , x, X, a, A, e, E, f, F, g, and G conversions. Leading zeroes (following any indication of sign or base) are used to pad to the field width. No space padding is performed. If the 0 and - flags both appear, the 0 flag is ignored. <br> For d, i, o, u, x, and X conversions, if a precision is specified, the 0 flag is ignored. If the 0 and ' flags both appear, the grouping characters are inserted before the zero padding.</td>
            </tr>
            <tr>
                <td>' ' (space)</td>
                <td>If the first character of a signed conversion is not a sign or if a signed conversion results in no characters, a space is placed before the result. If the space and + flags both appear, the space flag is ignored.</td>
            </tr>
            <tr>
                <td>+</td>
                <td>Display the sign + or the sign - in front of number. If this flags isn't specified, the conversion begons with a sign only when a negative value is converted.</td>
            </tr>
            <tr>
                <td>-</td>
                <td>The item is left justified.I If this flags isn't specified, the item is right justified.</td>
            </tr>
        </thead>
    </table>
</div>

<br>
<br>

### Width :
By default the width of a field will be the minimum required to hold the data. The width is almost the opposite of the precision. The width controls the minimum number to print.

<br>
<br>

### Precision :
The precision is written " .number ", and has slightly different meanings for the fdifferent conversion specifiers (like d or g). <br>
- For floating point number (like e, g or f), it controls the number orinted after the decimal point.
- For integers (like d), it controls the minimum number of digits printed.
- For strings (like s), it controls the maximum length of the string displayed.

<br>
<br>

### Length :
We will see the length later :)

<br>

<details>
    <summary>More ...</summary>
    <br>
    <br>
    <p>This my_printf was coded by Tom C. and Emma, students at Epitech.</p>
</details>

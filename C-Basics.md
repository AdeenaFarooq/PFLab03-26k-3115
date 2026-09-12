# C Programming Basics Documentation

## 1. Data Types

| Data Type | Description |
| :--- | :--- |
| `int` | Stores whole numbers (integers) without decimals (e.g., 123 or -456). |
| `float` | Stores single-precision floating-point numbers (fractional/decimal values). |
| `double` | Stores double-precision floating-point numbers with higher precision. |
| `char` | Stores a single character or ASCII value enclosed in single quotes (e.g., 'a'). |
| `bool` | Stores boolean values (`true` or `false`).  |
| `void` | Represents the absence of a value or a function that returns no value. |

---

## 2. Format Specifiers

| Specifier | Used For |
| :--- | :--- |
| `%d` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%o` | Unsigned octal integer |
| `%x` | Unsigned hexadecimal integer (lowercase letters) |
| `%X` | Unsigned hexadecimal integer (uppercase letters) |
| `%f` | Floating-point number (decimal notation) |
| `%e` | Floating-point number (exponential/scientific notation) |
| `%c` | Single character |
| `%s` | String (sequence of characters) |
| `%ld` | Long signed decimal integer |

---

## 3. Input/Output Functions

* **`printf()`**: Prints formatted text or variable values to the standard output (screen).
* **`scanf()`**: Reads formatted input from the standard input (keyboard) and stores it into specified variables.
* **`getchar()`**: Reads a single character from standard input.
* **`putchar()`**: Displays/prints a single character to standard output.
* **`fgets()`**: Reads a line of text or string safely from a stream (like keyboard input), preventing buffer overflows by specifying maximum size.
* **`puts()`**: Writes a string to standard output followed by an automatic newline character (`\n`).

---

## 4. Escape Sequences

| Escape Sequence | Description | Example Output |
| :--- | :--- | :--- |
| `\n` | Newline (moves cursor to next line) | Line 1<br>Line 2 |
| `\t` | Horizontal Tab (adds spacing) | Item1&nbsp;&nbsp;&nbsp;&nbsp;Item2 |
| `\\` | Displays a single backslash | `\` |
| `\"` | Displays double quotes inside strings | `"Hello"` |
| `\0` | Null character (terminates C-strings) | Marks end of string |

---

## 5. Precision

In C, precision for floating-point output is controlled by placing a dot (`.`) followed by a number between the `%` symbol and the format specifier (`f`).

**Syntax:** `%.Nf` *(where N is the number of decimal places to round to)*

**Example:**
```c
float pi = 3.14159;
printf("%.2f", pi); // Outputs: 3.14

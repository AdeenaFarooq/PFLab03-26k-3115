# Lab 03 - Pseudocode Solutions
## Problem 1: Display Student Information
START
DECLARE STUDENTID AS INTEGER
DECLARE GPA AS FLOAT
DECLARE GRADE AS CHARACTER
ASSIGN studentID = 101
ASSIGN GPA = 3.85
ASSIGN grade = 'A'
PRINT "Student ID:", studentID
PRINT "GPA:", GPA
PRINT "Grade:", grade
END
## Problem 2: Read and Display a Character
text
START
DECLARE ch AS CHARACTER
PRINT "Enter a character: "
    READ ch using getchar()
PRINT "You entered: "
WRITE ch using putchar()
END
## Problem 3: Display Floating-Point Value with Precision
text
START
DECLARE num AS FLOAT
ASSIGN num = 12.345678
PRINT num with default precision
PRINT num rounded to 2 decimal places (.2f)
PRINT num rounded to 4 decimal places (.4f)
END

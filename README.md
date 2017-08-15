# arithmetic-expressions

In this problem, you will write a program to read and evaluate arithmetic expressions. There
are three kinds of expressions:
 lone integers
 a unary operation (NEG or ABS, denoting negation and absolute value) applied to an
expression
 a binary operation (+, -, *, or /) applied to two expressions
Expressions will be entered in reverse Polish notation (RPN), also known as postx notation,
in which the operator is written after its operands. For example, the input
12 34 7 + * NEG
denotes the expression 􀀀(12  (34 + 7)). Your program must read in an expression, print its
value in conventional inx notation, and then print its value. For example (output in italics):
1 2 + 3 4 - * ABS NEG
-|((1 + 2) * (3 - 4))|
= -3

To solve this question, you will dene a base class Expression, and a derived class for each of
the the three kinds of expressions, as outlined above. Your base class should provide virtual
methods prettyprint and evaluate that carry out the required tasks.
To read an expression in RPN, you will need a stack. Use cin with operator >> to read the
input one word at a time. If the word is a number, create a corresponding expression object,
and push a pointer to the object onto the stack. If the word is an operator, pop one or two
items from the stack (according to whether the operator is unary or binary), convert to the
corresponding object and push back onto the stack. When the input is exhausted, the stack
will contain a pointer to a single object that encapsulates the entire expression.
Once you have read in the expression, print it out in inx notation with full parenthesization,
as illustrated above. Then evaluate the expression and print the result.
Note: Your program should be well documented and employ proper programming style. It
should not leak memory. Markers will be checking for these things.
Note: The design that we are imposing on you for this question is an example of the Inter-
preter pattern (this is just FYI; you don't need to look it up, and doing so will not necessarily
help you).

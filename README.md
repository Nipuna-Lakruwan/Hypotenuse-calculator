# Hypotenuse-calculator
The provided C++ code calculates the length of the hypotenuse (side C) of a right-angled triangle using the Pythagorean theorem. Here's a breakdown of the code:

1. Variable Declarations:
   - `double a`: Holds the length of side A of the right-angled triangle.
   - `double b`: Holds the length of side B of the right-angled triangle.
   - `double c`: Will store the calculated length of side C (hypotenuse).

2. User Interaction:
   - Prompts the user to enter the length of side A (`a`).
   - Prompts the user to enter the length of side B (`b`).

3. Pythagorean Theorem Calculation:
   - Uses the Pythagorean theorem \(c = \sqrt{a^2 + b^2}\) to calculate the length of side C (`c`).
   - `pow(a, 2)` calculates the square of `a`.
   - `pow(b, 2)` calculates the square of `b`.
   - `sqrt()` calculates the square root of the sum of the squares of `a` and `b`.

4. Output:
   - Displays the calculated length of side C (`c`).

5. Return Statement:
   - Returns 0 to indicate successful execution.

Overall, the code is a simple and straightforward implementation of the Pythagorean theorem for calculating the hypotenuse of a right-angled triangle based on user input for the lengths of sides A and B.

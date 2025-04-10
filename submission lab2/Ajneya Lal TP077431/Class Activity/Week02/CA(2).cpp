// 1. Assign 1 to x if y is greater than 0
x = (y > 0) ? 1 : 0;

// 2. Increase score by 5 marks if score is between 80 and 90
if (score >= 80 && score <= 90) score += 5;

// 3. Print true if x is an odd number and positive
cout << ((x % 2 != 0 && x > 0) ? "true" : "false") << endl;

// 4. Print true if both x and y are positive numbers
cout << ((x > 0 && y > 0) ? "true" : "false") << endl;

// 5. Set ticket to 1 if speed is greater than 55, otherwise 0
ticket = (speed > 55) ? 1 : 0;

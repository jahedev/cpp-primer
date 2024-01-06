```
Exercise 1.6: Explain whether the following program fragment is legal.
std::cout << "The sum of " << v1; << " and " << v2;
             << " is " << v1 + v2 << std::endl;
```

This is not legal becuase there is a semicolon at the end of line 1 which is
indicative of the end of a statement. The subsequent lines would have been processed
correctly if there were no semicolons except at the end of the full statement because
whitespaces and newline characters are ignored.
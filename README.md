# password-generator

This is a password generator that runs in the terminal. After making the executable named 'passgen', a password of any length can be generated, and this can be saved to a txt file. A demonstration of its use is shown below:

```
(base) tamjazad@Tamjeeds-MacBook-Pro password-generator % ./passgen
How long would you like your password to be? Length: 19
New password: j93&op*NqfV0r1[14k8
Would you like to save this password? (y/n): y
What is this password for? Account/service: randomaccount
Saved to 'passwords.txt'
```

Now, passwords.txt reads:

```
Password for randomaccount:
j93&op*NqfV0r1[14k8

```

Subsequent passwords saved will be appended to passwords.txt. If the passwords.txt file is not present, then it will be created by the program.

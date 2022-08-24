# Quadratic_equation
## Overview
Meet the true approach for solving quadratic equation. With this tiny program you can easily solve:
- Quadratic equations
- Linear equations
- Round equations

It also includes a libraries, which allow you to:
- Read command line arguments
- Run unit tests on my poor program
- Write logs of executing functions 

The program is separated on files, that's why make file is included.

## Installation

First and foremost you need to clone the repo and build the project with makefile.

~~~
git clone https://github.com/dodokek/Quadratic_equation.git                               
cd Quadratic_equation/src                                                                     
make                                                           
~~~

Execute the programm:
~~~
square_equation.exe
~~~

## Comand line arguments

There are now three available command line flags:
- Start unit tests (-t, /t, --test)
- Start to write logs (-l, /l, --log)
- Call for help (-h, /h, --help)

### Unit tests
Unit tests get the data from the specified file, named tests.txt. You can have the tests execute from your own file by writing the filename right after the call of this argument.
~~~
square_equation.exe -t filename.txt
~~~

### Logging
This useful library can be copypasted in many different projects. It writes a tree of functions that are being called in real time!
The data is being writed into file log.txt, different file name coul be set by user.
~~~
square_equation.exe -l logfile.txt
~~~

### Help
~~~
square_equation.exe -h
~~~
By writing this you are being redirected to documentation, that is store in **html/index.html** 

## Documentation

Documentation is provided by doxygen. 
Configuration file **doxyfile** is not recommended to be changed
To generate documentation you need to run doxygen by writing the following command:
~~~
doxygen
~~~

## Conclusion
You can use different libraries from my project separately they work perfectly one without another.
**Bye DodoKek all rights reversed**                           





              



This project solves quadratic equation. .exe file supports console arguments <br>
/h, -h, --help - Stands for getting some help by redirecting you to documentation<br>
/t, -t, --test - Stands for running Unit tests which you can modify in specified file. 

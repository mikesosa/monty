# The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
```
mike@ubuntu:~/0x19-stacks_queues_lifo_fifo$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
mike@ubuntu:~/0x19-stacks_queues_lifo_fifo$
```
Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:
```
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$
```
# The monty program

## Compilation & Output
You should compiled the files this way:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
Any output will be printed on stdout. Any error message will be printed on stderr
## Usage:
```
./monty file
```


Where file is the path to the file containing Monty byte code. If the user does not give any file or more than one argument to your program, print the error message:
```
USAGE: monty file
```
Followed by a new line, and exit with the status EXIT_FAILURE. If, for any reason, it’s not possible to open the file:
```
Error: Can't open file <file>
```
Followed by a new line, and exit with the status EXIT_FAILURE, where <file> is the name of the file. If the file contains an invalid instruction:
```
L<line_number>: unknown instruction <opcode>
```
Followed by a new line, and exit with the status EXIT_FAILURE where is the line number where the instruction appears.
Line numbers always start at 1. The monty program runs the bytecodes line by line and stop if either:
1. it executed properly every line of the file
2. it finds an error in the file
3. an error occured

If you can’t malloc anymore, print the error message:
```
Error: malloc failed
```
Followed by a new line, and exit with status EXIT_FAILURE.
We used malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)

<hr>

## Concepts

The project consisted basically in 6 different webs each with a form for a voting system, voting for my id "833" as many times as they request it. 
### As the following image I am voting for id "3" as a test:

<hr>

## Usage

Every folder has a executable .py file, to run it you only have to type:



<hr>

<h3>
  Technologies Used
</h3>
<ul>
  <li>Language: Python3, Bash</li>
  <li>Operating System: Ubuntu 14.04 LTS (Trusty64)</li>
  <li>Style: Pep8</li>
  <li>Compiler: No compiler needed</li>
  <li>Version Control: Git</li>
</ul>
<hr>
<h3>
  Author
</h3>
<p>Michael Sosa <a href="https://www.linkedin.com/in/michael-sosa/" rel="nofollow">Linkedin</a> || <a href="https://twitter.com/micael_sosa" rel="nofollow">Twitter: @micael_sosa</a></p>
<hr>

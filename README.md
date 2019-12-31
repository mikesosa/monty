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
<hr>

## Concepts

The project consisted basically in 6 different webs each with a form for a voting system, voting for my id "833" as many times as they request it. 
### As the following image I am voting for id "3" as a test:

<hr>

## Usage

Every folder has a executable .py file, to run it you only have to type:

```
./monty
```
## Compilation & Output
You should compiled the files this way:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
Any output will be printed on stdout. Any error message will be printed on stderr

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

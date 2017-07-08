# fillit

Program will take a file as parameter which contains a list of Tetriminos and<br />
arrange them to create the smallest square possible. Obviously, main goal is to<br />
find this smallest square in the minimal amount of time, despite a exponentially growing<br />
number of possibilities each time a piece is added.<br />

[Original task](https://drive.google.com/file/d/0B-X0pRysneuAZndOaVdhU2hndXM/view?usp=sharing)

## On UNIX systems (compilation)

Compile like this:

```sh
$ make
```

Create file, like example.txt:

```sh
$> cat -e example.txt
##..$
##..$
....$
....$
$>
```

Run program:

```sh
$ ./fillit example.txt
```

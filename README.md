# Algorithms

##编译步骤
###通过cmake生成makefile文件
```
cmake .
```
如果需要自己指定可执行文件的目录，则执行以下命令
```
cmake -DCMAKE_INSTALL_PREFIX=YourDir .
```
生成的可执行文件将会在YourDir/bin下

###执行make
```
make install
```

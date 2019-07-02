# file-browsing-server
文件访问服务端
1. 项目介绍
实现一个文件访问服务器，通过浏览器发送http协议，在服务端接收http协议并且对协议进行解析，
通过解析得到文件名字并且向浏览器放回，如果使文件就打开文件，但是打开文件只限于一些文件内容，
比如txt文件就是直接打开。 其他文件就是下载，这是浏览器做的工作。

2. 实现功能
在通过访问公网ip之后就返回系统中的根目录，在点击目录之后就跳转到点击的目录下面。
123.56.107.163:2000

3. 如何使用
clone代码，在linux操作系统上运行，如果是在云服务器上直接更改在epoll_server.c文件中更改ip（云服务器公网ip）地址即可，
在本地的linux系统上也可以直接更改ip即可。更改端口号，这里使用的是2000端口，没有使用默认的80端口。

4. 使用技术
epoll多路转接技术，套接字和libevent框架实现。

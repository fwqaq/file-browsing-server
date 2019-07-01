#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "epoll_server.h"

int main(int argc, const char* argv[])
{

    // 端口
    int port = atoi("2000");
    // 修改进程的工作目录, 方便后续操作
    int ret = chdir("/");
    if(ret == -1)
    {
        perror("chdir error");
        exit(1);
    }
    
    // 启动epoll模型 
    epoll_run(port);

    return 0;
}

#include <iostream>

#include "http/HttpServer.h"
#include "storage/Database.h"

int main()
{
    std::cout << "CppMessageBoard starting..." << std::endl;

    // 1. 创建核心模块对象
    Database database;
    HttpServer server;

    // 2. 初始化数据库
    if (!database.init())
    {
        std::cerr << "Database initialization failed." << std::endl;
        return -1;
    }

    std::cout << "Database initialized." << std::endl;

    // 3. 启动 HTTP 服务
    server.start();
    std::cout << "HttpServer started." << std::endl;

    // 4. 模拟主程序运行（当前阶段什么都不做）
    std::cout << "System running..." << std::endl;

    // 5. 关闭服务（按相反顺序）
    server.stop();
    std::cout << "HttpServer stopped." << std::endl;

    std::cout << "CppMessageBoard stopped." << std::endl;
    //system("pause");
    return 0;
}
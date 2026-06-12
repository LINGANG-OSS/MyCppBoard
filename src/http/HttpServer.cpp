#include "http/HttpServer.h"

HttpServer::HttpServer()
    : running_(false)
{
}

HttpServer::~HttpServer()
{
}

void HttpServer::start()
{
    // 当前阶段：不做任何事情
    running_ = true;
}

void HttpServer::stop()
{
    // 当前阶段：不做任何事情
    running_ = false;
}
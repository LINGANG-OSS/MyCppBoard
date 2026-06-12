#pragma once

/**
 * @brief HttpServer 是后端服务的 HTTP 接入层。
 *
 * 职责：
 *  - 管理 HTTP 服务的生命周期（创建 / 启动 / 停止）
 *  - 对外提供统一的启动接口
 *
 * 非职责（当前阶段）：
 *  - 不处理具体业务逻辑
 *  - 不关心路由规则
 *  - 不直接访问数据库
 */
class HttpServer
{
public:
    /**
     * @brief 构造函数
     *
     * 只负责创建对象，不做任何耗时或外部操作。
     */
    HttpServer();

    /**
     * @brief 析构函数
     *
     * 用于资源释放。
     * 当前阶段不持有任何资源。
     */
    ~HttpServer();

    /**
     * @brief 启动 HTTP 服务
     *
     * 语义：
     *  - 服务进入“运行态”
     *  - 允许接收请求
     *
     * 当前阶段：
     *  - 不做任何实际网络操作
     */
    void start();

    /**
     * @brief 停止 HTTP 服务
     *
     * 语义：
     *  - 服务进入“停止态”
     *  - 不再接收新请求
     *
     * 当前阶段：
     *  - 不做任何实际操作
     */
    void stop();

private:
    /**
     * @brief 服务运行状态标志
     *
     * true  - 已启动
     * false - 未启动
     *
     * 当前阶段仅用于表达“概念状态”
     */
    bool running_;
};
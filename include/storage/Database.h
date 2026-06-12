#pragma once

#include <string>

/**
 * @brief Database 是后端系统的数据存储抽象层。
 *
 * 职责：
 *  - 管理数据存储的生命周期（初始化 / 关闭）
 *  - 对外提供“写入数据”的抽象接口
 *
 * 非职责（当前阶段）：
 *  - 不关心底层使用哪种数据库（sqlite / mysql / 文件等）
 *  - 不解析 SQL
 *  - 不处理并发、事务等复杂问题
 */
class Database
{
public:
    /**
     * @brief 构造函数
     *
     * 仅创建对象，不建立任何外部连接。
     */
    Database();

    /**
     * @brief 析构函数
     *
     * 用于释放资源。
     * 当前阶段不持有任何资源。
     */
    ~Database();

    /**
     * @brief 初始化数据库
     *
     * 语义：
     *  - 准备好数据库工作环境
     *  - 初始化内部状态
     *
     * @return true  初始化成功
     * @return false 初始化失败
     */
    bool init();

    /**
     * @brief 写入一条数据
     *
     * 语义：
     *  - 接收一段文本数据
     *  - 将其作为“一条记录”写入存储系统
     *
     * 当前阶段：
     *  - 不关心数据具体如何存储
     *
     * @param content 要写入的数据内容
     * @return true  写入成功
     * @return false 写入失败
     */
    bool write(const std::string& content);

private:
    /**
     * @brief 数据库是否已初始化
     *
     * true  - 已初始化
     * false - 未初始化
     *
     * 当前阶段用于表达“概念状态”
     */
    bool initialized_;
};
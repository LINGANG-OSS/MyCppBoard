#include "storage/Database.h"

Database::Database()
    : initialized_(false)
{
}

Database::~Database()
{
}

bool Database::init()
{
    // 当前阶段：不做任何实际初始化
    initialized_ = true;
    return true;
}

bool Database::write(const std::string& /*content*/)
{
    // 当前阶段：不做任何实际写入
    return initialized_;
}

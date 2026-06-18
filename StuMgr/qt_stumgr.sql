-- ============================================
-- 学生信息管理系统 - 数据库建表脚本 (v2.0)
-- 数据库：SQLite3 (Students.db)
-- 说明：使用 SQLite 轻量级嵌入式数据库，无需安装 MySQL/ODBC
-- ============================================

-- 学生表（主键：id，列类型已优化）
CREATE TABLE IF NOT EXISTS Student (
    id      TEXT    PRIMARY KEY  NOT NULL,   -- 学号（主键，4-20 位数字）
    name    TEXT    NOT NULL,                -- 姓名
    age     INTEGER NULL,                   -- 年龄（0-120 整数）
    tel     TEXT    NULL,                   -- 电话（11 位手机号）
    sex     TEXT    NULL,                   -- 性别（男/女）
    college TEXT    NULL,                   -- 学院
    cls     TEXT    NULL,                   -- 班级
    pwd     TEXT    NULL                    -- 密码（SHA-256 哈希值）
);

-- 管理员表（主键：user）
CREATE TABLE IF NOT EXISTS Admin (
    user TEXT PRIMARY KEY  NOT NULL,        -- 用户名（主键）
    pwd  TEXT NULL                         -- 密码（SHA-256 哈希值）
);

-- 初始测试数据（由程序 InitDb() 自动插入，仅在表为空时）
-- 默认管理员：su / 1（SHA-256 哈希存储）
-- 测试学生：1002-1011，默认密码为学号（明文存于旧版，新版为 SHA-256）

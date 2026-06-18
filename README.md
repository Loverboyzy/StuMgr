<p align="center">
  <img src="icon.jpg" width="80" alt="Logo" />
</p>

<h1 align="center">🎓 学生信息管理系统</h1>

<p align="center">
  基于 Qt 6 (C++) 的轻量级学生信息管理系统，支持学生/管理员双角色登录、增删改查、表单校验、密码加密。
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Qt-6.5-41CD52?logo=qt&logoColor=white" alt="Qt" />
  <img src="https://img.shields.io/badge/C++-11-00599C?logo=cplusplus&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/SQLite-3-003B57?logo=sqlite&logoColor=white" alt="SQLite" />
  <img src="https://img.shields.io/badge/license-MIT-green" alt="License" />
</p>

---

## ✨ 功能特性

| 模块 | 功能 |
|------|------|
| 🔐 **双角色登录** | 管理员（`su`）和学生（学号），不同权限和界面 |
| 📋 **学生管理** | 新增 / 修改 / 删除 / 查询，TableView 表格展示 |
| 🔍 **智能查询** | 输入学号筛选，清空显示全部 |
| 🛡️ **SQL 注入防护** | 全部使用预编译语句（`prepare` + `bindValue`） |
| 🔒 **密码加密** | SHA-256 哈希存储，无明文密码 |
| ✅ **表单校验** | 学号（4-20位数字）、年龄（0-120）、电话（11位手机号） |
| 💾 **SQLite 数据库** | 零配置嵌入式数据库，无需安装 MySQL/ODBC |

---

## 🚀 快速开始

### 环境要求

- **Qt 6.5+**（MinGW 64-bit 或 MSVC）
- **Qt 模块**：`widgets`、`sql`
- **编译器**：支持 C++11

### 编译运行

```bash
# 1. 克隆仓库
git clone git@github.com:Loverboyzy/StuMgr.git
cd StuMgr

# 2. 生成 Makefile
qmake StuMgr.pro

# 3. 编译
make -j4

# 4. 运行
./release/StuMgr    # Linux/macOS
release\StuMgr.exe  # Windows
```

或直接在 **Qt Creator** 中打开 `StuMgr.pro` → 构建 → 运行。

---

## 🔑 默认账户

| 角色 | 用户名 | 密码 |
|------|--------|------|
| 管理员 | `su` | `1` |
| 学生 | `1002` ~ `1011` | `123456` |

---

## 📁 项目结构

```
StuMgr/
├── StuMgr.pro          # Qt 项目文件
├── main.cpp            # 入口
├── widget.h            # 主窗口头文件
├── widget.cpp          # 主窗口实现（数据库+业务逻辑）
├── widget.ui           # Qt Designer UI 布局
├── icon.jpg            # 应用图标
├── qt_stumgr.sql       # 数据库建表脚本（参考）
├── README.md           # 本文件
├── LICENSE             # MIT 许可证
└── .gitignore          # Git 忽略规则
```

---

## 🏗️ 技术要点

### 安全性

- **SQL 注入防护**：所有查询使用 `prepare()` + `bindValue()`，无 `QString::arg()` 拼接
- **密码加密**：`QCryptographicHash::Sha256` 哈希存储，登录时哈希比对
- **输入校验**：正则表达式验证学号/年龄/电话

### 数据库

- **SQLite 3**：轻量级嵌入式数据库，`CREATE TABLE IF NOT EXISTS` 自动建表
- **主键约束**：`id TEXT PRIMARY KEY` 防止重复学号
- **数据初始化**：首次运行自动插入测试数据（`INSERT OR IGNORE`）

### 架构设计

- **QStackedWidget** 页面切换（登录 / 注册 / 主页 / 编辑）
- **QSqlQueryModel + QTableView** 数据展示
- **QMessageBox** 全程操作反馈

---

## 📄 许可证

[MIT License](./LICENSE)

#! /usr/bin/sh

echo "${BASH_SOURCE[0]}" #脚本名字
echo "$(dirname "${BASH_SOURCE[0]}")" #脚本路径
echo "$(cd "$(dirname "${BASH_SOURCE[0]}")")" #cd 到脚本路径
echo "$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)" #获取脚本绝对路径

# BASH_SOURCE[0] - 等价于 BASH_SOURCE ,取得当前执行的 shell 文件所在的路径及文件名
# dirname - 去除文件名中的非目录部分，仅显示与目录有关的部分
# $() - 相当于 `command`, 即获取command命令的结果
# && - 逻辑运算符号，只有当&&左边运行成功时才会运行&&右边的命令

# GitHub 极简全量手册（新手版）

> 覆盖：创建 → 推送 → 拉取 → 覆盖 → 排错
## 一、首次配置（只做一次）
```bash
# 配置用户名和邮箱（会显示在提交记录里）
git config --global user.name "你的名字"
git config --global user.email "你的邮箱@example.com"

# 查看配置
git config --list
```
## 二、创建仓库

### 场景 A：从零新建

```bash
# 1. 创建项目文件夹
mkdir my-project && cd my-project

# 2. 初始化 Git
git init

# 3. 添加远程仓库（先在 GitHub 网页创建空仓库）
git remote add origin https://github.com/用户名/仓库名.git
```

### 场景 B：克隆已有仓库

```bash
git clone https://github.com/用户名/仓库名.git
cd 仓库名
```
## 三、日常 Workflow（最常用）

```bash
# 1. 查看当前状态（随时用）
git status

# 2. 添加文件到暂存区
git add 文件名          # 添加单个
git add .               # 添加所有改动

# 3. 提交到本地（拍照存档）
git commit -m "描述这次改了什么"

# 4. 推送到 GitHub
git push origin main
```

**记忆口诀**：`add` → `commit` → `push`

---

## 四、拉取与同步

```bash
# 拉取远程更新（开始工作前先做）
git pull origin main

# 完整版：拉取 + 合并
git pull origin main --rebase
```

## 五、覆盖与强制操作（⚠️ 慎用）

| 场景 | 命令 |
|------|------|
| 本地回退到上次提交 | `git reset --hard HEAD` |
| 回退到指定版本 | `git reset --hard 提交ID` |
| 强制推送（覆盖远程） | `git push -f origin main` |
| 丢弃某个文件的修改 | `git checkout -- 文件名` |

> **注意**：`--hard` 和 `-f` 会丢失数据，确认无误再用。

## 六、分支操作（多人协作/功能开发）

```bash
# 查看分支
git branch          # 本地
git branch -r       # 远程

# 创建并切换新分支
git checkout -b feature-x

# 切换分支
git checkout main

# 合并分支（先切换到主分支）
git checkout main
git merge feature-x

# 删除分支
git branch -d feature-x       # 已合并
git branch -D feature-x       # 强制删除
```
## 七、常见问题排查

### 问题 1：推送被拒（non-fast-forward）

```
error: failed to push some refs
hint: Updates were rejected because the tip of your current branch is behind
```

**解决**：

```bash
# 先拉取再推送
git pull origin main --rebase
git push origin main

# 如果确定远程没重要内容，强制覆盖
git push -f origin main
```

---

### 问题 2：冲突（CONFLICT）

```
Auto-merging 文件名
CONFLICT (content): Merge conflict in 文件名
```

**解决**：

```bash
# 1. 打开冲突文件，找到 <<<<<<< 标记
# 2. 手动编辑保留想要的代码
# 3. 删除所有冲突标记 <<<<<<< ======= >>>>>>>
# 4. 重新提交
git add .
git commit -m "解决冲突"
git push origin main
```

### 问题 3：remote origin already exists

**解决**：

```bash
# 查看现有远程
git remote -v

# 修改 URL
git remote set-url origin https://github.com/用户名/新仓库.git

# 或删除重建
git remote remove origin
git remote add origin https://github.com/用户名/仓库.git
```
### 问题 4：忘记添加 .gitignore，已提交了大文件

**解决**：

```bash
# 1. 添加 .gitignore 规则
echo "__pycache__/" >> .gitignore

# 2. 从 Git 中移除但保留本地文件
git rm -r --cached __pycache__

# 3. 重新提交
git add .
git commit -m "移除缓存文件"
git push origin main
```
### 问题 5：提交信息写错了

```bash
# 修改最后一次提交信息
git commit --amend -m "新信息"

# 强制推送（如果已推送到远程）
git push -f origin main
```
## 八、PyCharm 快捷操作

| 操作 | 快捷键 |
|------|--------|
| 提交 | `Ctrl + K` |
| 推送 | `Ctrl + Shift + K` |
| 拉取 | `Ctrl + T` |
| 查看历史 | `Alt + 9` |
| 分支切换 | 右下角分支名称点击 |
## 九、救急命令表

| 我想... | 命令 |
|---------|------|
| 查看提交历史 | `git log --oneline` |
| 查看某次改动 | `git show 提交ID` |
| 暂存当前工作（临时保存）| `git stash` |
| 恢复暂存 | `git stash pop` |
| 查看远程地址 | `git remote -v` |
| 查看谁改了哪行 | `git blame 文件名` |
| 彻底删除未跟踪文件 | `git clean -fd` |
## 十、黄金法则
1. **提交前先看 `git status`**
2. **推送前先 `git pull`**
3. **`.gitignore` 第一时间加**
4. **敏感信息（密码/Key）绝不提交**
5. **强制操作 `-f` 前三思**

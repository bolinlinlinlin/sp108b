# Hello world

1. 创建 projects 目录，并在 projects 目录中为 “Hello, world!” 项目创建一个目录。
   ```js
   $ mkdir ~/projects
   $ cd ~/projects
   $ mkdir hello_world
   $ cd hello_world
   ```
2. 新建一个源文件，命名为 main.rs。Rust 源文件总是以 .rs 扩展名结尾。如果文件名包含多个单词，使用下划线分隔它们。
3. 打开刚创建的 main.rs 文件，输入以下的代码

   文件名: main.rs
   ```js
   fn main() {
       println!("Hello, world!");
   }
   ```
4. 保存文件，并回到终端窗口。在 Linux 或 macOS 上，输入如下命令，编译并运行文件：
   ```js
   $ rustc main.rs
   $ ./main
   Hello, world!
   ```
   


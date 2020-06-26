# Hello, Cargo!
Cargo 是 Rust 的構建系統和包管理器。大多數 Rustacean 們使用 Cargo 來管理他們的 Rust 項目，因為它可以為你處理很多任務，比如構建代碼、下載依賴庫並編譯這些庫。 （我們把代碼所需要的庫叫做 依賴（dependencies））。

1. 檢查是否安裝了 Cargo：
   ```js
   $ cargo --version
   ```
2. 使用 Cargo 创建项目
   ```js
   $ cargo new hello_cargo
   $ cd hello_cargo
   ```
   第一行命令新建了名為 hello_cargo 的目錄。我們將項目命名為 hello_cargo，同時 Cargo 在一個同名目錄中創建項目文件。
3. 進入 hello_cargo 目錄並列出文件。將會看到 Cargo 生成了兩個文件和一個目錄：一個 Cargo.toml 文件，一個 src 目錄，以及位於 src 目錄中的 main.   rs 文件。它也在 hello_cargo 目錄初始化了一個 git 倉庫，以及一個 .gitignore 文件。

4. 打開Cargo.toml和src/main.rs 看看：

5. 構建並運行 Cargo 項目
   構建項目：
   ```js
   $ cargo build
      Compiling hello_cargo v0.1.0 (file:///projects/hello_cargo)
       Finished dev [unoptimized + debuginfo] target(s) in 2.85 secs
   ```
   這個命令會創建一個可執行文件 target/debug/hello_cargo （在 Windows 上是 target\debug\hello_cargo.exe），而不是放在目前目錄下。可以通過這個命令運行可執行文件：
   ```js
   $ ./target/debug/hello_cargo #
   ```
6. 也可以使用 cargo run 在一個命令中同時編譯並運行生成的可執行文件：
   ```js
   $ cargo run
    Finished dev [unoptimized + debuginfo] target(s) in 0.0 secs
     Running `target/debug/hello_cargo`
   Hello, world!
   ```
7. cargo check,該命令快速檢查代碼確保其可以編譯，但並不產生可執行文件：
   ```js
   $ cargo check
   Checking hello_cargo v0.1.0 (/root/hello_cargo)
    Finished dev [unoptimized + debuginfo] target(s) in 0.32 secs
   ```

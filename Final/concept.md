# 1. 變量和可變性
     變量默認是不可改變的（immutable）
     當變量不可變時，一旦值被綁定一個名稱上，你就不能改變這個值。為了對此進行說明，使用 cargo new variables 命令在 projects 目錄生成一個叫做 variables 的新項目。
     在新建的 variables 目錄，打開 src/main.rs 並將代碼替換為如下代碼，這些代碼還不能編譯：
     ```js
     fn main() {
       let x = 5;
       println!("The value of x is: {}", x);
       x = 6;
       println!("The value of x is: {}", x)
     }
     ```

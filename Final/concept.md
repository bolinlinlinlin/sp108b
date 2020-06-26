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
     保存並使用 cargo run 運行程序。應該會看到一條錯誤信息，如下輸出所示：
     ```js
     error[E0384]: cannot assign twice to immutable variable `x`
      --> src/main.rs:4:5
       |
     2 |     let x = 5;
       |         - first assignment to `x`
     3 |     println!("The value of x is: {}", x);
     4 |     x = 6;
       |     ^^^^^ cannot assign twice to immutable variable
     ```
     ![image](https://github.com/bolinlinlinlin/sp108b/blob/master/Final/picture/variables_error.jpg?raw=true)
     錯誤信息指出錯誤的原因是 不能對不可變變量 x 二次賦值（cannot assign twice to immutable variable x），因為你嘗試對不可變變量 x 賦第二個值。
     
     可以在變量名之前加 mut 來使其可變。除了允許改變值之外，mut 向讀者表明了其他代碼將會改變這個變量值的意圖。
     ```js
     fn main() {
       let mut x = 5;
       println!("The value of x is: {}", x);
       x = 6;
       println!("The value of x is: {}", x);
     }
     ```
     ![image](https://github.com/bolinlinlinlin/sp108b/blob/master/Final/picture/variables_cargo_run.jpg?raw=true)
# 2. 數據類型
     在 Rust 中，每一個值都屬於某一個 數據類型（data type），這告訴 Rust 它被指定為何種數據，以便明確數據處理方式。我們將看到兩類數據類型子集：標量（scalar）和復合（compound）。
     Rust 是 靜態類型（statically typed）語言，也就是說在編譯時就必須知道所有變量的類型。

   
     使用 parse 將 String 轉換為數字時，必須增加類型註解
     ```js
     let guess: u32 = "42".parse().expect("Not a number!");
     ```
  ## 標量類型
     整型:

     浮點型實例：
     ```js
     fn main() {
       let x = 2.0; // f64

       let y: f32 = 3.0; // f32
     }
     ```

     
     布爾型:
     ```js
     fn main() {
       let t = true;

       let f: bool = false; // 显式指定类型注解
     }
     ```


    字符類型:
    ```js
     fn main() {
       let c = 'z';
       let z = 'ℤ';
       let heart_eyed_cat = '😻';
     }
     ```


     複合類型:
     複合類型（Compound types）可以將多個值組合成一個類型。 Rust 有兩個原生的複合類型：元組（tuple）和數組（array）。
    
     
     元組類型:
     ```js
     fn main() {
       let tup: (i32, f64, u8) = (500, 6.4, 1);
     }
     ```
     tup 變量綁定到整個元組上，因為元組是一個單獨的複合元素。為了從元組中獲取單個值，可以使用模式匹配（pattern matching）來解構（destructure）元組值，像這樣：
     ```js
     fn main() {
       let tup = (500, 6.4, 1);
       let (x, y, z) = tup;
       println!("The value of y is: {}", y);
     }
     ```
# 3. 函數如何工作
     Rust 中的函數定義以 fn 開始並在函數名後跟一對圓括號。大括號告訴編譯器哪裡是函數體的開始和結尾。




# aapt 修改
* 目的
  * 为插件化apk修改资源id地址
* 原理
    * aapt package 添加参数，指定地址 --apk-module '0x5f'
    * aapt中接收参数，并在编译资源过程中指定 packageid为0x5f    
* 改动点 (全局搜索“改动点”)
    * aapt/Main.cpp
    * aapt/Bundle.h
    * aapt/ResourceTable.cpp
    * aapt/ResourceTable.h
    * androidfw/Android.bp
    * androidfw/Helper.cpp
    * androidfw/ResourceTypes.cpp
* 编译
  * 下载 aosp
  * 执行 . build/envsetup.sh
  * cd frameworks/base/tools/aapt
  * 执行 mm
  * 输出目录out/host/（windows | linux）/bin/aapt
* 使用方式
    * aapt为android 8.0编译，可以将source/linux/aapt 移动到Sdk/build-tools/26.0.x 目录下
    * 插件项目中替换
    ```
   buildToolsVersion "26.0.x"
   aaptOptions {
          additionalParameters '--apk-module','0x5f'
      }
  
  ```
* 效果
  * ![avatar](art/Screenshot%20from%202020-07-22%2012-37-13.png)
        
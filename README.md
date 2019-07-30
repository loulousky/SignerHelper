# SignerHelper
在做游戏分发签名的时候，配合美团walle做渠道写入，接入的游戏很多都只是V1签名，通过这个快速配置V1V2签名的APK

![image](https://github.com/loulousky/SignerHelper/blob/master/TIM%E5%9B%BE%E7%89%8720190730173745.png)

使用方法下载解压到不含中文路径的文件夹中，进入在signed.c中改自己的KEY 别名 密码,把文件夹下xxxx.keystore替换成自己的keystore


然后在此文件夹下命令运行gcc signed.c -o signed.exe  生成执行文件

然后把要签名的apk 重命名成1.apk 放入此文件夹下，运行上面的exe ,最后得到1_signed_align.apk 

# dnw
# for usb download code 
#enviroment 
apt-get install linux-header-$(uname-r) 
apt-get install linux-source-$(uname-r)



cd secbulk
make 
sudo insmod ./secbulk.ko 
dmesg
cd ../dnw
gcc -o dnw dnw.c
sudo cp dnw /usr/local/bin


使用方法如下：

1.在minicom下，从Nor Flash启动TQ2440,选择a功能：  

关于串口通信的设置常见 http://www.linuxidc.com/Linux/2011-12/48961.htm

####    Boot for Nor Flash Main Menu   #####                                  
#####     EmbedSky USB download mode     #####                                 
                                                                               
[1] Download u-boot or STEPLDR.nb1 or other bootloader to Nand Flash           
[2] Download Eboot (eboot.nb0) to Nand Flash                                   
[3] Download Linux Kernel (zImage.bin) to Nand Flash                           
[5] Download CRAMFS image to Nand Flash                                        
[6] Download YAFFS image (root.bin) to Nand Flash                              
[7] Download Program (uCOS-II or TQ2440_Test) to SDRAM and Run it              
[8] Boot the system                                                            
[9] Format the Nand Flash                                                      
[0] Set the boot parameters                                                    
[a] Download User Program (eg: uCOS-II or TQ2440_Test)                         
[b] Download LOGO Picture (.bin) to Nand  Flash                                
[l] Set LCD Parameters                                                         
[n] Enter TFTP download mode menu                                              
[o] Download u-boot to Nor Flash                                               
[r] Reboot u-boot                                                              
[t] Test Linux Image (zImage)                    
[q] quit from menu                                                             
Enter your selection: a                                                        
USB host is connected. Waiting a download. 

minicom的输出信息
Enter your selection: a                                                        
USB host is connected. Waiting a download. 
2.此时，打开另一个终端：
# sudo dnw 1.bin
libing@Ubuntu:~$ sudo dnw 1.bin
file name : 1.bin
file size : 1214004 bytes
Writing data...
100%     1214014 bytes     OK

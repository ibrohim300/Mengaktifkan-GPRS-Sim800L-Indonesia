# Mengaktifkan-GPRS-Sim800L-Indonesia
support sim800l V1 dan sim800l V2
pemasangan sim harus seperti berikut:

![image](https://user-images.githubusercontent.com/83158809/147747798-1d0c9b90-28c2-4ad1-b836-2ac97f0a1b0e.png)

skema pengkabelan (gunakan sumber tegangan eksternal baterai dan kapasitor tambahan)

![image](https://user-images.githubusercontent.com/83158809/147747862-718e2ea2-6c40-4813-b76f-28f66ae979a2.png)
![image](https://user-images.githubusercontent.com/83158809/147748048-f9d19a72-1cb8-4b6e-9243-14da14aedf53.png)
![image](https://user-images.githubusercontent.com/83158809/147748088-9ce74c4b-4f6c-4cb3-be08-165b85b57256.png)


gunakan AT Command pada Serial Monitor arduino IDE:

AT+SAPBR=3,1,"CONTYPE","GPRS"
AT+SAPBR=3,1,"APN","internet"

AT+SAPBR=1,1
AT+HTTPINIT

AT+HTTPPARA="URL","http://url-API.com/api-anda.php"

// set http action type 0 = GET, 1 = POST, 2 = HEAD
AT+HTTPACTION=0
AT+HTTPREAD
AT+HTTPTERM

AT+SAPBR=0,1

NB: Tidak support HTTPS.. gunakan protokol HTTP saja. tested on kartu tri (3)
==============================================================================================
AT
AT+CPIN?
AT+CREG?
AT+COPS?
AT+CSQ
AT+CMGF=1
AT+CMGS=”phone number”
AT+SAPBR=3,1,"Contype","GPRS" 
AT+CSTT="3gprs","3gprs","3gprs"
AT+SAPBR=1,1 
AT+SAPBR=2,1

info tambahan di Blog
![image](https://github.com/ibrohim300/Mengaktifkan-GPRS-Sim800L-Indonesia/blob/48edb3b7e818722454bb8e6248cbca7a4a345dc6/IMG_20230728_093435.jpg)
AT

AT+CPIN

AT+CSQ

AT+COPS?

AT+CBC

AT+IPR?

AT+IPR=9600

AT+GSV

AT+CGSN

AT+SIMEI=No Emai Aktif

# Mengaktifkan-GPRS-Sim800L-Indonesia

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

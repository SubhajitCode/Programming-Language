import socket
import sys
import os
def checkhost(ip):
    f = open("ip.txt", "a")
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  #Create a TCP/IP socket
    server_ip =ip
    rep = os.system('ping -c 1 ' + server_ip)
    if rep == 0:
        f.write(server_ip+'\n') 
    else:
        print 'server is down'
    f.close
    return
for i in range(1,100):
    ip = '10.3.19.'
    ip=ip+str(i)
    checkhost(ip)
    
    


#An easy way to clean all those unwanted sleepy containers
#/Bin/Bash!
UP=`docker ps -a --format "{{.Names}}" |wc -l`
while [  $UP != 0 ];do
docker rm `docker ps -n 1 --format "{{.Names}}"`
UP=`expr $UP - 1`
done

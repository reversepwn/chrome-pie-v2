sudo git pull
sudo mkdir -p /usr/local/bin
clang ./src/main.c -o pie
echo "$1" > /usr/local/bin/.piever
sudo mv pie /usr/local/bin
echo "Successfully updated pie"
echo "Now check the install guide (https://github.com/KevinAlavik/chrome-pie/blob/main/INSTALL.md) just skip the Build and Install part. And you should be good to go"
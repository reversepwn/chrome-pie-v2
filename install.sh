echo "Thanks for using chrome pie, very much love from @pufferisadev"
echo "--------------------------------------------------------------"
gcc src/cmd/main.c && sudo chmod +x a.out && mv a.out ./pie
echo "Successfully compiled pie, (./pie)"
echo "Now check the install guide (https://github.com/KevinAlavik/chrome-pie/blob/main/INSTALL.md) just skip the Build and Install part. And you should be good to go"
sudo mv ./pie /usr/bin
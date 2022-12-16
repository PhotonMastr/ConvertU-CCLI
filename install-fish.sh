mkdir $HOME/ConvertU_CCLI/
gcc -o ConvertU-CCLI ConvertU-CCLI.c
mv ConvertU-CCLI $HOME/ConvertU_CCLI/
echo "alias convertuccli='~/ConvertU_CCLI/./ConvertU-CCLI'" >> $HOME/.config/fish/config.fish
source $HOME/.config/fish/config.fish
rm -rf ~/ConvertU-CCLI
echo "ConvertU-CCLI is installed!"

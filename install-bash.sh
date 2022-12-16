mkdir $HOME/ConvertU_CCLI/
gcc -o ConvertU-CCLI ConvertU-CCLI.c
mv ConvertU-CCLI $HOME/ConvertU_CCLI/
echo "alias convertuccli='~/ConvertU_CCLI/./ConvertU-CCLI'" >> $HOME/.bashrc
source $HOME/.bashrc
rm -rf ~/ConvertU-CCLI
echo "ConvertU-CCLI is installed!"

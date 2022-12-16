# ConvertU-CCLI
<img src="https://cdn.discordapp.com/attachments/655147160190320651/1033114929504473201/ConvertU-CCLI-Logo.png" width=100></img>



# ConvertU-CCLI  



A simple CLI converter program written in C
-------------------------------------------------------------------------------------------------------------------

Index 

* [Why ConvertU?](#why-convertu)
* [How to run](#how-to-run) 
   * [MacOS and Linux](#macos-and-linux)
   * [MacOS/Linux Dependancies](#macos-and-linux-dependancies)
   * [Windows](#windows)

## Why ConvertU?

- It has a wide range of units to convert to and from
- A very easy to use installer for Linux/MacOS
- A simple and portable executable file for windows 
- Free and Open Source Software (FOSS). You are free to distribute the code in any way you want, modify it, or do practically whatever you want to it as outlined in the GPL3 licence.
- Extremely useful for day to day use. 

## How to run 

## MacOS and Linux Dependancies

<h1>GCC</h1>

Install the GCC if you intend to actually compile it yourself, keep in mind there are prebuilt binaries as well. <a href="https://gcc.gnu.org/">GCC WEBSITE</a>

<h1>Git</h1>

For git cloning.

## MacOS and Linux
<p>You guys are lucky. You guys have installers. Simply run

```sh
git clone https://github.com/PhotonMastr/ConvertU-CCLI
```

and then run

```sh
cd ConvertU-CCLI
```

Now, you have to note what shell you're using. IF you know what shell you are using ignore this command but if you do not run this command

```sh
ps -p $$
``` 
it should print out the following...

<img src="https://cdn.discordapp.com/attachments/655147160190320651/1012858210652266597/unknown.png" width="200"/>
now this is where the shell name is 
<img src="https://cdn.discordapp.com/attachments/655147160190320651/1012858388604010626/unknown.png" width="200"/>
IF it prints this 
<img src="https://cdn.discordapp.com/attachments/655147160190320651/1013234044441460736/unknown.png" width="200"/>
that means that you're on fish, don't worry about the error but it is telling you you're on fish shell so in that case use the fish install script!

Once you have all of this noted, simply run 

```sh
chmod +x install-[shell name].sh
```

and then

```sh
./install-[shell name.sh]
```

It will tell you when it is installed. Now that it is installed you can run 

```sh
ConvertUCCLI
```

And that's it for MacOS/Linux

 
## Windows 
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c7/Windows_logo_-_2012.png/800px-Windows_logo_-_2012.png" alt="linux" width="40" height="40"/>
Go to the <a href="https://github.com/PhotonMastr/ConvertU-CLI/releases">Releases Page</a>
Click on the text ConvertU-CLI-[version here]-Windows.exe
And it should download a file in your Downloads folder. I'm sure if you've used windows before... you know the drill. Double click the file and it just works. Keep in mind that windows might give you a warning that it's a virus. It's not. You can hit more info and run anyway.



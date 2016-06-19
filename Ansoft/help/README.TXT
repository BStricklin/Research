FrameViewer, Release 5
======================

This file contains information about problems that may occur while 
you install or run release 5 of FrameViewer. It also contains
instructions for installing FrameViewer onto a network server.

FrameViewer does not require a registration number to activate its
licensing. However, it is not a shareware or free product. Please
be sure to use only as many copies of FrameViewer as you have
purchased. Refer to the enclosed Licensing Agreement for details.


Installing FrameViewer
======================

Be sure to enter a valid name (any text more than just a space) when
filling in the Name text box in the Registration dialog box. You may have
to reinstall if you enter a space character instead of a name.

If the Installer adds Win32s components to your system,
it will restart Windows. Nonetheless, it is important to exit
Windows manually again (press Alt-F4 from the Program Manager) and
reenter Windows after installation. This ensures that memory is freed
and available to Windows applications.

The following error messages may appear during installation. 

"The path is not valid."
-------------------------------------------------------------
During installation, this error message appears when you attempt to
install in a file instead of a directory. Try installing again, and
specify a directory instead of a file in the Destination Path dialog
box.

"DSHELL caused a GPF in module MSTEST.EXE."
-------------------------------------------------------------
If you see this error message during installation, try resetting your
video driver to VGA. Then reinstall FrameViewer. Frame Technology 
recommends contacting your video card manufacturer about the 
availability of an updated driver.


Installing FrameViewer onto a Network Server
============================================

Follw these steps to install FrameViewer onto a network server.

1. In the FrameViewer Installation dialog box, choose "On a Network
   Server."
2. As the system administrator, you can choose which installation 
   options you want users to install. Typically, you will choose
   all the options.
3. If you want to change the installation pathname, click Set Path
   in the FrameViewer Installation Options dialog box.
4. In the Path text box, type the drive and directory where you want
   to install FrameViewer. You can type any pathname you want.

After the Installer copies the files to the network server, an alert
tells you that the FrameViewer installation was successful.



The .ini and .inf files
=======================

The FVNETSET.INI file contains configuration information and can be
modified. The FVNETLAY.INF file contains fileset information for the 
installer and should not be modified.

Note:  Be sure the users have write permission for the directory 
       in which you have installed FrameViewer. If the directory is
       changed to read-only after installation, the product will work,
       but the user preferences and session information will not be
       updated in the .ini file.




Running FrameViewer
===================

Insufficient memory error
-------------------------------------------------------------
If your Windows TEMP directory has less than 35K of space available, 
FrameViewer may unexpectedly quit. Before starting, remove any
unneeded temporary or swap files from your Windows TEMP directory and
make sure that you have adequate space available in this directory.

-------------------------------------------------------------
Copyright (C) 1986-1995 Frame Technology Corporation. All rights reserved.
Frame, the Frame logo, the Frame stylized mark, Frame Technology,
FrameMaker, FrameViewer, and InstantView are trademarks or registered 
trademarks of Frame Technology Corporation. All other brand or product 
names are trademarks or registered trademarks of their respective companies 
or organizations. 


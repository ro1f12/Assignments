#script can be used to copy multiple files to single file
#@author rofi

touch assignments_report.odt
for file in *.c++  
   do
   	cat $file >> assignments_report.odt
   	echo  "$file is copied..."
   done
echo "All Assignments have been added to an .odt file !!"

<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570"></a>
Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570">Md. Tareq Mahmood</a> - Saturday, 19 June 2021, 3:35 AM


 

Dear all,Post your project related queries here. Before posting a new query, check if there is already a similar query. You are highly encouraged to answer a query if you know the solution.Be respectful and cooperative. 





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1498&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1498&course=570">Naeem Ahmed</a> - Friday, 18 June 2021, 10:15 AM


 

Sir, we are building a supply water quality monitoring system . We are using 3 sensors(pH, Turbidity, TDS). The Sensors give voltage outputs of different range (pH : 0-3V, Turbidity : 0-4.5V, TDS : 0 - 2.3V). So what should we set on the AREF pin for voltage reference? Should we select the maximum voltage of these 3(in this case : 4.5V) ? If we do so, will there be a precision loss?







<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=570">Fatima Nawmi</a> - Friday, 18 June 2021, 12:37 PM


 

Sir,In order to have simplex communication between two Atmega32 (for sending 3 bits of data) how should we connect the two Atmega32 for this and which method should be used?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=570">Fatima Nawmi</a> - Friday, 18 June 2021, 3:50 PM


 

Sir,We have tried the UART protocol, but if we use this method, all the other pins in PORTD(except for RXD and TXD) does not work for both transmitting atmega32 and receiving atmega32. Is there a solution for this, or a better way of doing it?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570">Md. Tareq Mahmood</a> - Sunday, 20 June 2021, 9:19 PM


 

Were you able to fix this? If not, can you please send me a picture of the circuit and the code you tried. I simulated in Proteus and PORTD was working fine.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=570">Fatima Nawmi</a> - Sunday, 20 June 2021, 10:41 PM


 

Sir, I was able to fix this later. 













<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1449&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1449&course=570">Apurba Saha</a> - Friday, 18 June 2021, 3:53 PM


 

Sir the bigger lcds (260 x 64 or 260x128) have completely different pin configuration than what we have done in our offline and we couldn't find any tutorial in Google too. We tried some trial and error connection but failed each time.Can you please help us regarding its connection or maybe give us any documentation? 





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570">Md. Tareq Mahmood</a> - Monday, 21 June 2021, 2:29 AM


 

The ones we used in our offlines were alphanumeric displays. The ones you are mentioning are graphical ones (GLCD), meaning you can draw a pixel on those.If 128x64 is sufficient, this blog will help you https://www.electronicwings.com/avr-atmega/graphical-lcd-128x64-interfacing-with-atmega1632 . I was able to work AMPIRE 128x64 display following this code. Obviously you need to change the code to make it work with AMPIRE. There are two 192x64 LCD displays of similar PINOUTs in Proteus, ERM19264 and YAOXY19264A. Further change of the code in the blog should make that compatible with the later two. <br />Also, you can read the datasheets. Surely you will find a way.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1449&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1449&course=570">Apurba Saha</a> - Monday, 21 June 2021, 1:09 AM


 

Yes Sir we are working with AMPIRE 128x64 LCD currently.







<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570">Md. Tareq Mahmood</a> - Monday, 21 June 2021, 2:21 PM


 

Also if anyone is interested, http://en.radzio.dxp.pl/ks0108/ this one has a library for 128x64 and 192x64. This universal library is should be compatible with ERM19264 and YAOXY19264A. However, you have to change the code. The RST connection is not specified in the library. Go through the datasheet. You can figure it out.











<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1420&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1420&course=570">Shafayat Hossain Majumder</a> - Tuesday, 22 June 2021, 11:13 PM


 

Dear sir, some of us seem to have bought USB-ISP but it only shows up as USB-HID in our pc. This HID burner does not work with AVRDude/Extreme Burner and others. Also, we couldn't find any good sources/softwares to burn using USB-HID. Could you please tell us how to use it?







<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570"></a>
Re: Q/A Thread for Projects
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=570">Md. Tareq Mahmood</a> - Wednesday, 30 June 2021, 11:17 AM


 

<a href="file%5Catmega32-i2c-lcd.zip"></a> <a href="file%5Catmega32-i2c-lcd.zip">atmega32-i2c-lcd.zip</a><br />
Resources for I2C 16x2 LCD Display









<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Monday, 26 November 2018, 9:06 PM


 

If you have any queries, you can post here.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1474&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1474&course=399">Sharjil Mahir</a> - Tuesday, 27 November 2018, 4:26 AM


 

Sir, if we enter 1, then there are 4 rounds showing, then if we again enter 1, the new round starts with number 4. Sir, do we have to maintain this serial? 





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Wednesday, 28 November 2018, 12:03 PM


 

Since the unit died in round 4, I started the next one from round 4 again. However , it is not mandatory to maintain this serial. 









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1443&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1443&course=399">Sheikh Azizul Hakim</a> - Thursday, 29 November 2018, 2:48 PM


 

Sir, are we allowed to have some global integer variables? And is it a must to use a base class pointer for enemy tower?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1443&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1443&course=399">Sheikh Azizul Hakim</a> - Thursday, 29 November 2018, 4:31 PM


 

And if somehow coins get less than 100, there's no way to win the game. So, should we not terminate the game when there is less than a hundred coin?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Thursday, 29 November 2018, 8:17 PM


 

Global variables are strictly FORBIDDEN. You have to maintain the OOP principles. When someone's coin drops below 100, there is no way to win. When a user selects a unit his coin count will be decremented accordingly. If that count falls below 0, you can show the message of losing.











<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1409&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1409&course=399">Md Emamul Haque Pranta</a> - Thursday, 29 November 2018, 4:07 PM


 

Sir, is it allowed to use getter? And also is it allowed to use polymorphism?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Thursday, 29 November 2018, 8:26 PM


 

Surely you can use getter. The second question is pointless in the context of this offline. Without polymorphism, how can you expect to implement inheritance?









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1417&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1417&course=399">Jawad Ul Kabir</a> - Thursday, 29 November 2018, 4:35 PM


 

Sir, can we pass the w pointer's content as a reference to some function (not a member of any class) and use that reference instead of w pointer to access the Unit class members??





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Thursday, 29 November 2018, 8:19 PM


 

A reference is an alias. As long as you do not use objects of the derived classes, you are fine. However, class structure should be maintained appropriately.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1508&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1508&course=399">Prantik  Paul</a> - Thursday, 29 November 2018, 4:37 PM


 

Sir, is there any restrictions regarding which members should be public or private? Or do we have freedom to select members' visibility for ourselves?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Thursday, 29 November 2018, 8:27 PM


 

They can not be made public. They can be private or protected.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=399">Nazmul Takbir</a> - Thursday, 29 November 2018, 4:45 PM


 

Sir, how will we handle the case where the user has enough coin to buy some units but not enough to buy other units? I wanted to make changes inside the switch statement in the given skeleton so that the user will be allowed to deploy a unit only if enough coin is available for that particular unit. Can I make this change?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Thursday, 29 November 2018, 8:21 PM


 

Please run the exe file and see the outcome. Say, you have 300 coins. In that case if you choose to deploy the 600 coin unit (i forgot the name), you will LOSE!!! 









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1508&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1508&course=399">Prantik  Paul</a> - Thursday, 29 November 2018, 4:51 PM


 

Sir, can we declare a constructor with any number of  values rather than 0 that is given in the skeleton code?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Thursday, 29 November 2018, 8:21 PM


 

Yeah you can.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1449&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1449&course=399">Apurba Saha</a> - Thursday, 29 November 2018, 6:09 PM


 

Sir ,For  enemy tower, it is said that we can instantiate another base
class pointer but can we make it global ?<br />





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Thursday, 29 November 2018, 8:23 PM


 

I didn't understand your question. Enemy tower is a type of unit. What does that have to do with "global"?









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=399">Nazmul Takbir</a> - Thursday, 29 November 2018, 6:20 PM


 

Sir, if a class has a member variable which is not needed by that class does this go against the concept of inheritance? For example:Unit class has member variables:  range  health  damage  cost Derived class "EnemyTower" inherits from Unit class.  Now EnemyTower class has the "cost" member variable even though it is not needed. Is this acceptable?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=399">Nazmul Takbir</a> - Thursday, 29 November 2018, 6:23 PM


 

All the other classes ( except the EnemyTower class ) which inherit from Unit class requires the "cost" member variable.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Thursday, 29 November 2018, 8:27 PM


 

You can consider a dummy value like 1000 coin as the cost of the enemy tower. That will simplify your code.











<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1434&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1434&course=399">Md. Tanzim Azad</a> - Thursday, 29 November 2018, 9:48 PM


 

Sir,If I have 400 coins I cannot choose advancedarcher (cost 600). So if user choose advancedarcher the game will be over or I will give the user another chance to choose another units?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Friday, 30 November 2018, 4:23 PM


 

Please run the exe file and simulate this.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1452&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1452&course=399">Md Sabbir Rahman</a> - Thursday, 29 November 2018, 10:57 PM


 

Sir, are we allowed to keep round and available_coins variable in the main function, or do the units need to handle that?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Friday, 30 November 2018, 4:24 PM


 

Round and total coins are not related to unit, right? Hope you understand what I mean.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1448&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1448&course=399">Sihat Afnan</a> - Friday, 30 November 2018, 12:39 AM


 

Sir , If we use no function in the classes except for getters i.e. just use the classes for variables and do necessary tasks in the main functions , is there any problem?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Friday, 30 November 2018, 4:25 PM


 

Can't reply to this question because it is related to implementation.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1407&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1407&course=399">Saikat  Ghatak</a> - Friday, 30 November 2018, 3:54 AM


 

Sir , if i use static variable in main function to maintain available_coins ,is it acceptable?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399"></a>
Re: Offline #3 Queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=872&course=399">Md. Tarikul Islam Papon</a> - Friday, 30 November 2018, 4:26 PM


 

Don't you think it is too trivial to ask this question? Round, total coins are not related to classes. You should understand how to implement them.











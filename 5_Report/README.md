# Requirements for food ordering mini project # 

# Identifying features #
* Customers can login by entering username and password
* Show the overall process for customers
* Can add food items to the food menu
* View food menu with prices and item codes
* Register a order
* viewing and finishing all pending orders
* exit

# Analysis strength #

### Strength ###
* customers can order food in a simple way
* its fast way for ordering food
### weakness ###
* less scope to improve features
### opportunities ###
* Potential to to diversity into related market segments
* can reach to more locations
### Threats ###
Managing Customer Expectations
Shifting Customer Preferences

## what,why,where,who,how ##
### what ###
* implementation of online application food ordering
### where ###
* it is an online application
### who ###
* vardhansai21(k sai vardhan) implemented a problem statement
### how ###
* this application is implemented using c programming language
# Detailed requirements #
## High level requirements ##
|HLR_ID|	Description	Status|(Implemented/Future)|
|---|---|---|
|HLR_1|Entering to the admin page|Implimented|
|HLR_2|add food items to the menu|Implimented
|HLR_3|after that view menu	|Implimented
|HLR_4|register new order	|Implimented
|HLR_5|viewing and fininshing all orders|Implemented
## Low level requirements ##
|LLR_ID|Description|Status(Implemented/Future)|
|---|---|---|
|LLR_1_HLR_1|customers give admin and password in char type|Implimented|
|LLR_2_HLR_1|Show otions page|Implimented|
|LLR_1_HLR_2|enter choice add dish name and price to menu|Implimented|
|LLR_1_HLR_3|Enter choice and view food menu with id and dish name,price of the dish|Implimented|
|LLR_2_HLR_4|enter choice If want order register new order for a table|Implimented|
|LLR_1_HLR_5|enter choice and view all pending orders and exit|Implimented|

# Manual #
## Setup to run Project ##
* An integrated development environment (Suggesting Dev C++).
* GCC compiler to compile the project.
* "make" to run the Makefile smoothly.
## Steps To run Project ##
* First clone the repository from the Github.
* Open the repository in an IDE (Suggesting Dev C++).
* The next step is to build the project with the help of make command :
   * make all
* Next step is to run the project with help of make command :
   * make exec
* Clean all executable files by the following command :
   * make clean

# Test plan and Test output #
## High level test plan ##

|HLR_ID|Description|Expected i/p|Expected o/p|Actual o/p|Test type|
|---|---|---|---|---|---|
|HLR_1|Entering the admin page|admin|if correct user going to enter password|if correct user going to enter password|requirement|
|HLR_2|Entering the password|admin|if correct user going to enter admin page|if correct user going to enter admin page going to choose the visible options|requirement|
|HLR_3|After choosing option can continue	show all the inputs given by user|if user want to exit choosing option	if user want to exit choosing option	requirement
## Low level test plan ##
|HLR_ID|Description|Expected i/p|Expected o/p|Actual o/p|Test type|
|LLR_1_HLR_1|user can give admin in char type|-|-|-|-|
|LLR_2_HLR_1|asking admin password|admin|if correct user going to enter password|if correct user going to enter password|requirement|
|LLR_3_HLR_1|Show all the options in page|-|-|-|-|
|LLR_1_HLR_2|Enter choice 1 for adding food to menu in char(vada) and int(50)|type 2 for checking menu what you enetred in menu|going to next option for adding another item food(idly)|going to add next item again choose 1|requirement|
|LLR_1_HLR_3|after entering all items to menu|choose option 2|all items what user enter will be visible|all items what user added(vada,idly) with id (0,1)|requirment|
|LLR_1_HLR_4|if user want order after seeing menu|choose option 3 user can enter with int(id) and table no int(no)|going back to page|going back to page|requirement|
|LLR_1_HLR_5|If user want check pending order|choose option 4|user can see all the pending orders|item char(idly) price int(50)table no int (1)|requirement|
|LLR_1_HLR_6|Exit	|-|-|-|-|

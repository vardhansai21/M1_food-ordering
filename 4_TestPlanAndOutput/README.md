# Test plan and Test output #
## High level test plan ##
|HLR_ID|	Description|	Expected i/p	|Expected o/p	|Actual o/p|	Test type|
|----|----|----|----|----|----|
|HLR_1|	Entering the admin page|admin|if correct user going to enter password|if correct user going to enter password|requirement|
|HLR_2|	Entering the password|admin|if correct user going to enter admin page|if correct user going to enter admin page going to choose the visible options|requirement|
|HLR_3|After choosing option can continue|show all the inputs given by user|if user want to exit choosing option|if user want to exit choosing option|requirement

## Low level test plan ##
|HLR_ID|	Description	|Expected i/p|	Expected o/p|	Actual o/p|	Test type|
|----|----|----|----|----|----|
|LLR_1_HLR_1|user can give admin in char type|-|-|-|-|			
|LLR_2_HLR_1|asking admin password|admin|if correct user going to enter password|if correct user going to  enter password|requirement|
|LLR_3_HLR_1|Show all the options in page|-|-|-|-|
|LLR_1_HLR_2|Enter choice 1 for adding food to menu in char(vada) and int(50)|type 2 for checking menu what you enetred in menu| going to next option for adding another food(idly)|going to add next item again choose 1|requirement|
|LLR_1_HLR_3|after entering all items to menu|choose option 2|all items what we enter will be visible|all items what user added(vada,idly) with id (0,1)|requirment|
|LLR_1_HLR_4|if user want order after seeing menu|choose option 3 user can enter with int(id) and table no int(no)|going back to page|going back to page|requirement|
|LLR_1_HLR_5|If user want check pending order|choose option 4|user can see all the pending orders |item char(idly) price int(50)table no int (1)|requirement|
|LLR_1_HLR_6|Exit|-|-|-|-|

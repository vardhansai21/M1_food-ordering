# Test plan and Test output #
## High level test plan ##
HLR_ID	Description	Expected i/p	Expected o/p	Actual o/p	Test type
HLR_1	Entering the quiz	pk	Hi pk	Hi pk	requirement
HLR_2	Participates in quiz	3	correct answer, going to next question	correct answer, going to next question	requirement
HLR_3	After the quiz, show result	-	you won 1000rs	you won 1000rs	requirement
Low level test plan
HLR_ID	Description	Expected i/p	Expected o/p	Actual o/p	Test type
LLR_1_HLR_1	Participant give name in char type				
LLR_2_HLR_1	Show Welcome message	pk	Hi pk	Hi pk	requirement
LLR_3_HLR_1	Show rules of quiz	-	-	-	-
LLR_1_HLR_2	Enter choice for question in int type	3	correct answer, going to next question	correct answer, going to next question	requirement
LLR_2_HLR_2	If choice other than 1,2,3,4, show 'give proper response',and read input again	h	give proper response	give proper response	scenario
LLR_3_HLR_2	If choice correct go to next question.	4	correct answer, going to next question	correct answer, going to next question	requirement
LLR_4_HLR_2	If choice wrong exit from quiz	3	wrong answer,you won 00rs	wrong answer,you won 00rs	requirement
LLR_1_HLR_3	Show how much won by participant.	3	you won 00rs	wrong answer,you won 00rs	requirement

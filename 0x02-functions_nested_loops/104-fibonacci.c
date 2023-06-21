
Skip to content

    DANIELMANZRU
    /
    alx-low_level_programming

Create new...
Issues
Pull requests
You have no unread notifications

Code
Issues
Pull requests
Actions
Projects
Security

    Insights

Commit
Browse the repository at this point in the history
m

    master 

@DANIELMANZRU
DANIELMANZRU committed Jun 21, 2023
1 parent db53ef5 commit 7a4f1ef
Showing 1 changed file with 35 additions and 36 deletions.

71 changes: 35 additions & 36 deletions 71
0x02-functions_nested_loops/104-fibonacci.c
@@ -1,53 +1,52 @@
#include <stdio.h>


	/**
	 * main - fibonacci 
	 *
	 * Purpose - no hardcode
	 *
	 * Return:  (Success)
	 */
/**
 * main - fibonacci
 *
 * Purpose - prints the first 98 Fibonacci numbers
 *
 * Return:  (Success)
 */


	int main(void)
	{
		unsigned long int i;
		unsigned long int bef = 1;
		unsigned long int aft = 2;
		unsigned long int l = 1000000000;
		unsigned long int bef1;
		unsigned long int bef2;
		unsigned long int aft1;
		unsigned long int aft2;

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

		printf("%lu", bef);

	printf("%lu", bef);

		for (i = 1; i < 91; i++)
		{
			printf(", %lu", aft);
			aft += bef;
			bef = aft - bef;
		}

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

		bef1 = (bef / l);
		bef2 = (bef % l);
		aft1 = (aft / l);
		aft2 = (aft % l);


		for (i = 92; i < 99; ++i)
		{
			printf(", %lu", aft1 + (aft2 / l));
			printf("%lu", aft2 % l);
			aft1 = aft1 + bef1;
			bef1 = aft1 - bef1;
			aft2 = aft2 + bef2;
			bef2 = aft2 - bef2;
		}
		printf("\n");
		return (0);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
0 comments on commit 7a4f1ef
@Markborak
Add heading text
Add bold text, <Ctrl+b>
Add italic text, <Ctrl+i>
Add a quote, <Ctrl+Shift+.>
Add code, <Ctrl+e>
Add a link, <Ctrl+k>
Add a bulleted list, <Ctrl+Shift+8>
Add a numbered list, <Ctrl+Shift+7>
Add a task list, <Ctrl+Shift+l>
Directly mention a user or team
Reference an issue, pull request, or discussion
Add saved reply
Attach files by dragging & dropping, selecting or pasting them.
Styling with Markdown is supported

You’re not receiving notifications from this thread.
Footer
© 2023 GitHub, Inc.
Footer navigation

    Terms
    Privacy
    Security
    Status
    Docs
    Contact GitHub
    Pricing
    API
    Training
    Blog
    About

m · DANIELMANZRU/alx-low_level_programming@7a4f1ef

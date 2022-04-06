#include "yahtzee.h"


int main(int argc, char** argv)
{
	srand(time(0));

	while (1)
	{
		switch (poll_menu()) 
		{
		case MENU_PRINT_RULES:
		{
			print_rules();
		}
		break;
		case MENU_START_GAME:
		{
			play_game();
		}
		break;
		case MENU_EXIT:
		{
			exit_game();
		}
		break;
		}
	}
}

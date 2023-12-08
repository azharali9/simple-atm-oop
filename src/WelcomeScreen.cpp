/*
 * WelcomeScreen.cpp
 *
 *  Created on: Dec 25, 2020
 *      Author: azharali
 */

#include "WelcomeScreen.h"

#include "file.h"

	bool WelcomeScreen::verification(AccountMainMenu B, int PIN)
	{
		if(B.getpass()==PIN)
		{
			return true;
		}

		return false;
	}

// START A3HEADER
//
// This source file is part of the Atlantis PBM game program.
// Copyright (C) 1995-1999 Geoff Dunbar
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program, in the file license.txt. If not, write
// to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
// Boston, MA 02111-1307, USA.
//
// See the Atlantis Project web page for details:
// http://www.prankster.com/project
//
// END A3HEADER
// MODIFICATIONS
// Date        Person            Comments
// ----        ------            --------
// 2001/Feb/21 Joseph Traub      Move the item and such defintions out into
//                               gamedata.cpp
//
#include "gamedata.h"
#include "gamedefs.h"

//
// Define the various globals for this game.
//
// If you change any of these, it is incumbent on you, the GM to change
// the html file containing the rules to correctly reflect the changes!
//
static GameDefs g = {
    "Standard Atlantis",     // RULESET_NAME
    MAKE_ATL_VER( 4, 0, 5 ), // RULESET_VERSION

    2, /* FOOT_SPEED */
    4, /* HORSE_SPEED */
    4, /* SHIP_SPEED */
    6, /* FLY_SPEED */
    8, /* MAX_SPEED */
		   
    250, /* WAGON_CAPACITY */

    10, /* STUDENTS_PER_TEACHER */
    10, /* MAINTENANCE_COST */
    20, /* LEADER_COST */
    33, /* STARVE_PERCENT */
    5020, /* START_MONEY */
    5, /* WORK_FRACTION */
    20, /* ENTERTAIN_FRACTION */
    20, /* ENTERTAIN_INCOME */

    50, /* TAX_INCOME */
	
    5, /* HEALS_PER_MAN */

    20, /* GUARD_REGEN */ /* percent */
    40, /* CITY_GUARD */
    50, /* GUARD_MONEY */
    4000, /* CITY_POP */

    10, /* WMON_FREQUENCY */
    10, /* LAIR_FREQUENCY */
	
    5, /* FACTION_POINTS */

    64, /* MAX_AC_X */
    64, /* MAX_AC_Y */

    100, /* TURN_COST */

    50, /* TIMES_REWARD */

    1, // TOWNS_EXIST
    1, // LEADERS_EXIST
    1, // SKILL_LIMIT_NONLEADERS
    0, // MAGE_NONLEADERS
    1, // RACES_EXIST
    1, // GATES_EXIST
    1, // FOOD_ITEMS_EXIST
    1, // CITY_MONSTERS_EXIST
    1, // WANDERING_MONSTERS_EXIST
    1, // LAIR_MONSTERS_EXIST
    1, // WEATHER_EXISTS
    1, // OPEN_ENDED
	0, // CONQUEST

    1, // RANDOM_ECONOMY
    1, // VARIABLE_ECONOMY

    50, // CITY_MARKET_NORMAL_AMT
    20, // CITY_MARKET_ADVANCED_AMT
    50, // CITY_MARKET_TRADE_AMT

	50,	// BASE_MAN_COST
	1, // LASTORDERS_MAINTAINED_BY_SCRIPTS
	10, // MAX_INACTIVE_TURNS

	// *NOTE* If this is set to 1, you need to make sure the correct
	// section in skillshows.cpp is defined to describe the X,Y,Z
	// coordinates.  If you set it to zero, make sure the original
	// skill description is enabled instead
	0, // EASIER_UNDERWORLD

	0, // DEFAULT_WORK_ORDER

    GameDefs::FACLIM_FACTION_TYPES, // FACTION_LIMIT_TYPE

	GameDefs::WFLIGHT_NONE,	// FLIGHT_OVER_WATER

	1,   // SAFE_START_CITIES
	120, // AMT_START_CITY_GUARDS
	0,   // START_CITY_GUARDS_PLATE
	0,   // START_CITY_MAGES

	0,   // APPRENTICES_EXIST
};

GameDefs * Globals = &g;
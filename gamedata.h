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

#ifndef RULES_H
#define RULES_H

//
// The items
//
enum {
	I_LEADERS,
	I_VIKING,
	I_BARBARIAN,
	I_PLAINSMAN,
	I_ESKIMO,
	I_NOMAD,
	I_TRIBESMAN,
	I_DARKMAN,
	I_WOODELF,
	I_SEAELF,
	I_HIGHELF,
	I_TRIBALELF,
	I_ICEDWARF,
	I_HILLDWARF,
	I_UNDERDWARF,
	I_DESERTDWARF,
	I_ORC,
	I_GNOME,
	I_CENTAURMAN,
	I_SILVER,
	I_GRAIN,
	I_LIVESTOCK,
	I_IRON,
	I_WOOD,
	I_STONE,
	I_FUR,
	I_FISH,
	I_HERBS,
	I_HORSE,
	I_LONGBOAT,
	I_LONGSHIP,
	I_RAFT,
	I_COG,
	I_CLIPPER,
	I_GALLEON,
	I_AGALLEON,
	I_GALLEY,
	I_CORSAIR,
	I_BALLOON,
	I_AIRSHIP,
	I_CLOUDSHIP,
	I_SWORD,
	I_CROSSBOW,
	I_LONGBOW,
	I_CHAINARMOR,
	I_PLATEARMOR,
	I_WAGON,
	I_MITHRIL,
	I_IRONWOOD,
	I_WHORSE,
	I_FLOATER,
	I_ROOTSTONE,
	I_YEW,
	I_MSWORD,
	I_MPLATE,
	I_DOUBLEBOW,
	I_IVORY,
	I_PEARL,
	I_JEWELRY,
	I_FIGURINES,
	I_TAROTCARDS,
	I_CAVIAR,
	I_WINE,
	I_SPICES,
	I_CHOCOLATE,
	I_TRUFFLES,
	I_VODKA,
	I_ROSES,
	I_PERFUME,
	I_SILK,
	I_VELVET,
	I_MINK,
	I_CASHMERE,
	I_COTTON,
	I_DYES,
	I_WOOL,
	I_LION,
	I_WOLF,
	I_GBEAR,
	I_CROCODILE,
	I_ANACONDA,
	I_SCORPION,
	I_PBEAR,
	I_RAT,
	I_SPIDER,
	I_LIZARD,
	I_TRENT,
	I_ROC,
	I_BTHING,
	I_KONG,
	I_SPHINX,
	I_IWURM,
	I_DRAGON,
	I_CENTAUR,
	I_KOBOLD,
	I_OGRE,
	I_LMEN,
	I_WMEN,
	I_SANDLING,
	I_YETI,
	I_GOBLIN,
	I_TROLL,
	I_ETTIN,
	I_SKELETON,
	I_UNDEAD,
	I_LICH,
	I_IMP,
	I_DEMON,
	I_BALROG,
	I_EAGLE,
	I_AMULETOFI,
	I_RINGOFI,
	I_CLOAKOFI,
	I_STAFFOFF,
	I_STAFFOFL,
	I_AMULETOFTS,
	I_AMULETOFP,
	I_RUNESWORD,
	I_SHIELDSTONE,
	I_MCARPET,
	I_IWOLF,
	I_IEAGLE,
	I_IDRAGON,
	I_ISKELETON,
	I_IUNDEAD,
	I_ILICH,
	I_IIMP,
	I_IDEMON,
	I_IBALROG,
	I_PORTAL,
	I_PEASANT,
	// LLS
	I_PICK,
	I_SPEAR,
	I_AXE,
	I_HAMMER,
	I_MCROSSBOW,
	I_MWAGON,
	I_GLIDER,
	I_NET,
	I_LASSO,
	I_BAG,
	I_SPINNING,
	I_LEATHERARMOR,
	I_CLOTHARMOR,
	I_BOOTS,
	I_PIRATES,
	I_KRAKEN,
	I_MERFOLK,
	I_ELEMENTAL,
	I_MAN,
	/* Additional items for Ceran */
	I_FAIRY,
	I_LIZARDMAN,
	I_URUK,
	I_GOBLINMAN,
	I_HOBBIT,
	I_GNOLL,
	I_DROWMAN,
	I_MERC,
	I_TITAN,
	I_AMAZON,
	I_OGREMAN,
	I_HIGHLANDER,
	I_MINOTAUR,
	I_LANCE,
	I_MUSHROOM,
	I_RRAT,
	I_NOOGLE,
	I_MUTANT,
	// Items from Tzarg
	I_BAXE,
	I_MBAXE,
	I_ADMANTIUM,
	I_ADSWORD,
	I_ADBAXE,
	I_IMARM,
	I_ADRING,
	I_ADPLATE,
	I_SUPERBOW,
	I_CAMEL,
	I_GREYELF,
	I_DROW,
	I_HYDRA,
	I_STORMGIANT,
	I_CLOUDGIANT,
	I_ILLYRTHID,
	I_SORCERERS,
	I_MAGICIANS,
	I_DARKMAGE,
	I_WARRIORS,
	I_ICEDRAGON,
	I_HEALPOTION,
	I_ROUGHGEM,
	I_GEMS,
	I_JAVELIN,
	I_PIKE,
	I_MWOLF,
	I_MSPIDER,
	I_MOLE,
	I_BPLATE,
	I_MCHAIN,
	I_FSWORD,
	I_QSTAFF,
	I_SABRE,
	I_MACE,
	I_MSTAR,
	I_DAGGER,
	I_PDAGGER,
	I_BHAMMER,
	I_BOW,
	I_SHORTBOW,
	I_HEAVYCROSSBOW,
	I_HARP,
	// Generic processed food
	I_FOOD,
	// Shields
	I_MSHIELD,
	I_ISHIELD,
	I_WSHIELD,
	// new apprentice-uasble items to give them something to do
	I_AEGIS,
	I_WINDCHIME,
	I_GATE_CRYSTAL,
	I_STAFFOFH,
	I_SCRYINGORB,
	I_CORNUCOPIA,
	I_BOOKOFEXORCISM,
	I_HOLYSYMBOL,
	I_CENSER,
	// Quest item for Havilah
	I_RELICOFGRACE,
	I_TURT,
	I_CATAPULT,
	I_STEEL_DEFENDER,
	NITEMS
};

//
// Types of skills.
//
enum {
	S_MINING,
	S_LUMBERJACK,
	S_QUARRYING,
	S_HUNTING,
	S_FISHING,
	S_HERBLORE,
	S_HORSETRAINING,
	S_WEAPONSMITH,
	S_ARMORER,
	S_CARPENTER,
	S_BUILDING,
	S_SHIPBUILDING,
	S_ENTERTAINMENT,
	S_TACTICS,
	S_COMBAT,
	S_RIDING,
	S_CROSSBOW,
	S_LONGBOW,
	S_STEALTH,
	S_OBSERVATION,
	S_HEALING,
	S_SAILING,
	S_FARMING,
	S_RANCHING,
	S_FORCE,
	S_PATTERN,
	S_SPIRIT,
	S_FIRE,
	S_EARTHQUAKE,
	S_FORCE_SHIELD,
	S_ENERGY_SHIELD,
	S_SPIRIT_SHIELD,
	S_MAGICAL_HEALING,
	S_GATE_LORE,
	S_FARSIGHT,
	S_TELEPORTATION,
	S_PORTAL_LORE,
	S_MIND_READING,
	S_WEATHER_LORE,
	S_SUMMON_WIND,
	S_SUMMON_STORM,
	S_SUMMON_TORNADO,
	S_CALL_LIGHTNING,
	S_CLEAR_SKIES,
	S_EARTH_LORE,
	S_WOLF_LORE,
	S_BIRD_LORE,
	S_DRAGON_LORE,
	S_NECROMANCY,
	S_SUMMON_SKELETONS,
	S_RAISE_UNDEAD,
	S_SUMMON_LICH,
	S_CREATE_AURA_OF_FEAR,
	S_SUMMON_BLACK_WIND,
	S_BANISH_UNDEAD,
	S_DEMON_LORE,
	S_SUMMON_IMPS,
	S_SUMMON_DEMON,
	S_SUMMON_BALROG,
	S_BANISH_DEMONS,
	S_ILLUSION,
	S_PHANTASMAL_ENTERTAINMENT,
	S_CREATE_PHANTASMAL_BEASTS,
	S_CREATE_PHANTASMAL_UNDEAD,
	S_CREATE_PHANTASMAL_DEMONS,
	S_INVISIBILITY,
	S_TRUE_SEEING,
	S_DISPEL_ILLUSIONS,
	S_ARTIFACT_LORE,
	S_CREATE_RING_OF_INVISIBILITY,
	S_CREATE_CLOAK_OF_INVULNERABILITY,
	S_CREATE_STAFF_OF_FIRE,
	S_CREATE_STAFF_OF_LIGHTNING,
	S_CREATE_AMULET_OF_TRUE_SEEING,
	S_CREATE_AMULET_OF_PROTECTION,
	S_CREATE_RUNESWORD,
	S_CREATE_SHIELDSTONE,
	S_CREATE_MAGIC_CARPET,
	S_ENGRAVE_RUNES_OF_WARDING,
	S_CONSTRUCT_GATE,
	S_ENCHANT_SWORDS,
	S_ENCHANT_ARMOR,
	S_ENCHANT_SHIELDS,
	S_CONSTRUCT_PORTAL,
	S_MANIPULATE,
	// Skills for Ceran
	S_WEAPONCRAFT,
	S_ARMORCRAFT,
	S_CAMELTRAINING,
	S_GEMCUTTING,
	S_MONSTERTRAINING,
	S_CREATE_FLAMING_SWORD,
	// Food related skills
	S_COOKING,
	S_CREATE_FOOD,
	S_QUARTERMASTER,
	// new item creation skills to give apprentices something to do
	S_CREATE_AEGIS,
	S_CREATE_WINDCHIME,
	S_CREATE_GATE_CRYSTAL,
	S_CREATE_STAFF_OF_HEALING,
	S_CREATE_SCRYING_ORB,
	S_CREATE_CORNUCOPIA,
	S_CREATE_BOOK_OF_EXORCISM,
	S_CREATE_HOLY_SYMBOL,
	S_CREATE_CENSER,
	S_TRANSMUTATION,
	S_MAGIC_ARMOR,
	S_BLASPHEMOUS_RITUAL,
	S_ENDURANCE,
	NSKILLS
};

//
// Types of objects.
//
enum {
	O_DUMMY,
	O_FLEET,
	O_LONGBOAT,
	O_LONGSHIP,
	O_RAFT,
	O_COG,
	O_CLIPPER,
	O_GALLEON,
	O_AGALLEON,
	O_GALLEY,
	O_CORSAIR,
	O_BALLOON,
	O_AIRSHIP,
	O_CLOUDSHIP,
	O_TOWER,
	O_FORT,
	O_CASTLE,
	O_CITADEL,
	O_SHAFT,
	O_LAIR,
	O_RUIN,
	O_CAVE,
	O_DEMONPIT,
	O_CRYPT,
	O_MTOWER,
	O_MFORTRESS,
	O_MCASTLE,
	O_MCITADEL,
	O_MINE,
	O_FARM,
	O_RANCH,
	O_TIMBERYARD,
	O_INN,
	O_QUARRY,
	// LLS
	// New ocean lairs
	O_ISLE,
	O_DERELICT,
	O_OCAVE,
	O_WHIRL,
	// AS
	O_ROADN,
	O_ROADNW,
	O_ROADNE,
	O_ROADSW,
	O_ROADSE,
	O_ROADS,
	O_TEMPLE,
	O_MQUARRY,
	O_AMINE,
	O_PRESERVE,
	O_SACGROVE,
	// JT
	// Abyss Lair
	O_BKEEP,
	O_PALACE,
	// For Ceran
	O_DCLIFFS,
	O_HUT,
	O_STOCKADE,
	O_CPALACE,
	O_NGUILD,
	O_AGUILD,
	O_ATEMPLE,
	O_HTOWER,
	// Tzargs monster lairs
	O_MAGETOWER,
	O_DARKTOWER,
	O_GIANTCASTLE,
	O_ILAIR,
	O_ICECAVE,
	O_BOG,
	O_TRAPPINGHUT,
	O_STABLE,
	O_MSTABLE,
	O_TRAPPINGLODGE,
	O_FAERIERING,
	O_ALCHEMISTLAB,
	O_OASIS,
	O_GEMAPPRAISER,
	O_HPTOWER,
	O_CARAVANSERAI,
	O_GATEWAY,
	NOBJECTS
};

//
// Types of terrain
//
/* ARegion Types */
enum {
	R_OCEAN,
	R_PLAIN,
	R_FOREST,
	R_MOUNTAIN,
	R_SWAMP,
	R_JUNGLE,
	R_DESERT,
	R_TUNDRA,
	R_CAVERN,
	R_UFOREST,
	R_TUNNELS,
	R_NEXUS,
	R_ISLAND_PLAIN,
	R_ISLAND_SWAMP,
	R_ISLAND_MOUNTAIN,
	R_CERAN_PLAIN1,
	R_CERAN_PLAIN2,
	R_CERAN_PLAIN3,
	R_CERAN_FOREST1,
	R_CERAN_FOREST2,
	R_CERAN_FOREST3,
	R_CERAN_MYSTFOREST,
	R_CERAN_MYSTFOREST1,
	R_CERAN_MYSTFOREST2,
	R_CERAN_MOUNTAIN1,
	R_CERAN_MOUNTAIN2,
	R_CERAN_MOUNTAIN3,
	R_CERAN_HILL,
	R_CERAN_HILL1,
	R_CERAN_HILL2,
	R_CERAN_SWAMP1,
	R_CERAN_SWAMP2,
	R_CERAN_SWAMP3,
	R_CERAN_JUNGLE1,
	R_CERAN_JUNGLE2,
	R_CERAN_JUNGLE3,
	R_CERAN_DESERT1,
	R_CERAN_DESERT2,
	R_CERAN_DESERT3,
	R_CERAN_WASTELAND,
	R_CERAN_WASTELAND1,
	R_CERAN_LAKE,
	R_CERAN_TUNDRA1,
	R_CERAN_TUNDRA2,
	R_CERAN_TUNDRA3,
	R_CERAN_CAVERN1,
	R_CERAN_CAVERN2,
	R_CERAN_CAVERN3,
	R_CERAN_UFOREST1,
	R_CERAN_UFOREST2,
	R_CERAN_UFOREST3,
	R_CERAN_TUNNELS1,
	R_CERAN_TUNNELS2,
	R_GROTTO,
	R_DFOREST,
	R_CHASM,
	R_CERAN_GROTTO1,
	R_CERAN_DFOREST1,
	R_CERAN_CHASM1,
	R_VOLCANO,
	R_LAKE,
	R_NUM
};

#endif

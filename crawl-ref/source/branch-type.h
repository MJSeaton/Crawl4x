#pragma once

enum branch_type                // you.where_are_you
{
    
    BRANCH_DUNGEON,
    BRANCH_TEMPLE,
    BRANCH_FIRST_NON_DUNGEON = BRANCH_TEMPLE,
    BRANCH_ORC,
    BRANCH_ELF,
#if TAG_MAJOR_VERSION == 34
    BRANCH_DWARF,
#endif
    BRANCH_LAIR,
    BRANCH_SWAMP,
    BRANCH_SHOALS,
    BRANCH_SNAKE,
    BRANCH_SPIDER,
    BRANCH_SLIME,
    BRANCH_VAULTS,
#if TAG_MAJOR_VERSION == 34
    BRANCH_BLADE,
#endif
    BRANCH_CRYPT,
    BRANCH_TOMB,
#if TAG_MAJOR_VERSION > 34
    BRANCH_DEPTHS,
#endif
    BRANCH_VESTIBULE,
    BRANCH_DIS,
    BRANCH_GEHENNA,
    BRANCH_COCYTUS,
    BRANCH_TARTARUS,
      BRANCH_FIRST_HELL = BRANCH_DIS,
      BRANCH_LAST_HELL = BRANCH_TARTARUS,
    BRANCH_ZOT,
#if TAG_MAJOR_VERSION == 34
    BRANCH_FOREST,
#endif
    BRANCH_ABYSS,
    BRANCH_PANDEMONIUM,
    BRANCH_ZIGGURAT,
    BRANCH_LABYRINTH,
    BRANCH_BAZAAR,
    BRANCH_TROVE,
    BRANCH_SEWER,
    BRANCH_OSSUARY,
    BRANCH_BAILEY,
    BRANCH_ICE_CAVE,
    BRANCH_VOLCANO,
    BRANCH_WIZLAB,
#if TAG_MAJOR_VERSION == 34
    BRANCH_DEPTHS,
#endif
    BRANCH_DESOLATION,
    BRANCH_CITY,
    NUM_BRANCHES,

    GLOBAL_BRANCH_INFO = 127,
};

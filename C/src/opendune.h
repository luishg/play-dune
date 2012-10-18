/* $Id: opendune.h 2477 2011-08-30 21:53:47Z truebrain $ */

/** @file src/opendune.h Gameloop and other main definitions. */

#ifndef OPENDUNE_H
#define OPENDUNE_H

typedef enum GameMode {
	GM_NORMAL    = 0,
	GM_RESTART   = 1,
	GM_PICKHOUSE = 2
} GameMode;

/**
 * Types of Language available in the game.
 */
typedef enum Language {
	LANGUAGE_ENGLISH     = 0,
	LANGUAGE_FRENCH      = 1,
	LANGUAGE_GERMAN      = 2,
	LANGUAGE_ITALIAN     = 3,
	LANGUAGE_SPANSIH     = 4,

	LANGUAGE_MAX         = 5,
	LANGUAGE_INVALID     = 0xFF
} Language;

/** X and Y coordinate. */
typedef struct XYPosition {
	uint16 x; /*!< X coordinate. */
	uint16 y; /*!< Y coordinate. */
} XYPosition;

extern char *window_caption;
extern bool g_dune2_enhanced;

extern uint32 g_hintsShown1;
extern uint32 g_hintsShown2;
extern GameMode g_gameMode;
extern uint16 g_campaignID;
extern uint16 g_scenarioID;
extern uint16 g_activeAction;
extern uint32 g_tickScenarioStart;
extern bool   g_debugGame;
extern bool   g_debugScenario;
extern bool   g_debugSkipDialogs;

extern uint16 g_var_38BC;
extern bool g_var_38F8;
extern uint16 g_selectionType;
extern uint16 g_selectionTypeNew;
extern bool g_viewport_forceRedraw;
extern bool g_var_3A14;

extern int16 g_musicInBattle;

extern void *g_readBuffer;
extern uint32 g_readBufferSize;

extern void Main();
extern void Game_Prepare();
extern void Game_Init();
extern void Game_LoadScenario(uint8 houseID, uint16 scenarioID);
extern void PrepareEnd();

#endif /* OPENDUNE_H */

/** 
 * @brief It defines a player
 * 
 * @file player.h
 * @author Profesores PPROG
 * @version 1.0 
 * @date 13-01-2015
 * @copyright GNU Public License
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "types.h"

typedef struct _Player Player;

#define MAX_PLAYERS 100
#define FIRST_PLAYER 1

Player* player_create(Id id);
STATUS player_destroy(Player* player);
Id player_get_id(Player* player);
STATUS player_set_name(Player* player, char* name);
const char* player_get_name(Player* player);
STATUS player_set_location(Player* player, Id id);
Id player_get_location(Player* player);
STATUS player_set_object(Player* player, Id value);
Id player_get_object(Player* player);
STATUS player_print(Player* player);

#endif

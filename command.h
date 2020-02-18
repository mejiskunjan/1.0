3/** 
 * @brief It implements the command interpreter
 * 
 * @file command.h
 * @author Profesores PPROG
 * @version 1.0 
 * @date 19-12-2014 
 * @copyright GNU Public License
 */

#ifndef COMMAND_H
#define COMMAND_H

#define N_CMDT 2
#define N_CMD 7

/*
* 
* @brief The types of command structure
*	Defines the two type of commands
* 
*/
typedef enum enum_CmdType {
  CMDS, 
  CMDL} T_CmdType;
/*
* 
* @brief The command structure
*	Defines the different commands you can use
* 
*/
typedef enum enum_Command {
  NO_CMD = -1, 
  UNKNOWN, 
  EXIT, 
  NEXT,
  BACK, 
  TAKE,
  DROP} T_Command;

/***@brief Computes the price of a coffee
*
* gets the user input from the keyboard
*
*@date 15/01/2019
*@author: Instructors
*
* @return the user input 
*/
T_Command get_user_input();

#endif

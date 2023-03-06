<?php

/**
 * Copyright (c) 2016, 2024 5 Mode
 * All rights reserved.
 * 
 * This file is part of StopWatch-sec.
 *
 * StopWatch-sec is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * StopWatch-sec is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.  
 * 
 * You should have received a copy of the GNU General Public License
 * along with StopWatch-sec. If not, see <https://www.gnu.org/licenses/>.
 *
 * func.stopwatchsec.inc
 * 
 * Functions and declarations for StopWatch-sec.
 *
 * @author Daniele Bonini <my25mb@aol.com>
 * @copyrights (c) 2016, 2024 5 Mode   
 */

/*
 * Usage exmaple:
 * 
 * define("DEBUG", true);
 * define("PHP_BR", "<BR>");
 * 
 * startwatch_ifdebug(true);
 * // doSomeStuff(things);
 * 
 * pausewatch_ifdebug(true);
 * // doSomeStuff(things);
 * 
 * stopwatch_ifdebug(true);
 * 
 */

/*
 * Start the debug watch
 * 
 * @param bool $debug_var a debug value, if true the startwatch will be executed 
 * @return void
 */
function startwatch_ifdebug(bool $debug_var) {
  if (!DEBUG || !$debug_var) {
    return;
  }
  if (!defined("DEBUG_WATCH_START")) {
    define('DEBUG_WATCH_START', hrtime(true));
  }  
}

/*
 * Pause the debug watch
 * 
 * @param bool $debug_var a debug value, if true the pausewatch will be executed 
 * @param bool $echo output result, if true immediately print the result
 * @return void
 */
function pausewatch_ifdebug(bool $debug_var, bool $echo = false) {
  if (!DEBUG || !$debug_var) {
    return;
  }
  if (!defined("DEBUG_WATCH_START")) {
    die("You need to start the watch!");
  }  
  for($i=1;$i<=15;$i++) {
    if (!defined("DEBUG_WATCH_REPORT_ENTRY".$i)) {
      define("DEBUG_WATCH_REPORT_ENTRY".$i, round((hrtime(true) - DEBUG_WATCH_START)/1e+6,4));
      break;
    }
  }
  
  if ($echo) {
    switch($i) {
      case 1:
        echo("First pause at: " . DEBUG_WATCH_REPORT_ENTRY1 . PHP_BR);
        break;
      case 2:
        echo("Second pause at: " . DEBUG_WATCH_REPORT_ENTRY2 . PHP_BR);
        break;
      case 3:
        echo("Third pause at: " . DEBUG_WATCH_REPORT_ENTRY3 . PHP_BR);
        break;
      case 4:
        echo("Fourth pause at: " . DEBUG_WATCH_REPORT_ENTRY4 . PHP_BR);
        break;
      case 5:
        echo("Fifth pause at: " . DEBUG_WATCH_REPORT_ENTRY5 . PHP_BR);
        break;
      case 6:
        echo("Sixth pause at: " . DEBUG_WATCH_REPORT_ENTRY6 . PHP_BR);
        break;
      case 7:
        echo("Seventh pause at: " . DEBUG_WATCH_REPORT_ENTRY7 . PHP_BR);
        break;
      case 8:
        echo("Eighth pause at: " . DEBUG_WATCH_REPORT_ENTRY8 . PHP_BR);
        break;
      case 9:
        echo("Nineth pause at: " . DEBUG_WATCH_REPORT_ENTRY9 . PHP_BR);
        break;
      case 10:
        echo("Tenth pause at: " . DEBUG_WATCH_REPORT_ENTRY10 . PHP_BR);
        break;
      case 11:
        echo("Eleventh pause at: " . DEBUG_WATCH_REPORT_ENTRY11 . PHP_BR);
        break;
      case 12:
        echo("Twelveth pause at: " . DEBUG_WATCH_REPORT_ENTRY12 . PHP_BR);
        break;
      case 13:
        echo("Thirteenth pause at: " . DEBUG_WATCH_REPORT_ENTRY13 . PHP_BR);
        break;
      case 14:
        echo("Fourteenth pause at: " . DEBUG_WATCH_REPORT_ENTRY14 . PHP_BR);
        break;
      case 15:
        echo("Fifteenth pause at: " . DEBUG_WATCH_REPORT_ENTRY15 . PHP_BR);
        break;
    }       
  }  
}

/*
 * Stop the debug watch
 * 
 * @param bool $debug_var a debug value, if true the stopwatch will be executed 
 * @return void
 */
function stopwatch_ifdebug(bool $debug_var) {
  if (!DEBUG || !$debug_var) {
    return;
  }  
  if (!defined("DEBUG_WATCH_START")) {
    die("You need to start the watch first!");
  } 
   
  for($i=1;$i<=15;$i++) {
    
    if (defined("DEBUG_WATCH_REPORT_ENTRY".$i)) {
    
      if ($i===1) {
        echo("Watch final report:" . PHP_BR);
      }  
    
			switch($i) {
				case 1:
				  echo("First pause at: " . DEBUG_WATCH_REPORT_ENTRY1 . PHP_BR);
				  break;
				case 2:
				  echo("Second pause at: " . DEBUG_WATCH_REPORT_ENTRY2 . PHP_BR);
				  break;
				case 3:
				  echo("Third pause at: " . DEBUG_WATCH_REPORT_ENTRY3 . PHP_BR);
				  break;
				case 4:
				  echo("Fourth pause at: " . DEBUG_WATCH_REPORT_ENTRY4 . PHP_BR);
				  break;
				case 5:
				  echo("Fifth pause at: " . DEBUG_WATCH_REPORT_ENTRY5 . PHP_BR);
				  break;
				case 6:
				  echo("Sixth pause at: " . DEBUG_WATCH_REPORT_ENTRY6 . PHP_BR);
				  break;
				case 7:
				  echo("Seventh pause at: " . DEBUG_WATCH_REPORT_ENTRY7 . PHP_BR);
				  break;
				case 8:
				  echo("Eighth pause at: " . DEBUG_WATCH_REPORT_ENTRY8 . PHP_BR);
				  break;
				case 9:
				  echo("Nineth pause at: " . DEBUG_WATCH_REPORT_ENTRY9 . PHP_BR);
				  break;
				case 10:
				  echo("Tenth pause at: " . DEBUG_WATCH_REPORT_ENTRY10 . PHP_BR);
				  break;
				case 11:
				  echo("Eleventh pause at: " . DEBUG_WATCH_REPORT_ENTRY11 . PHP_BR);
				  break;
				case 12:
				  echo("Twelveth pause at: " . DEBUG_WATCH_REPORT_ENTRY12 . PHP_BR);
				  break;
				case 13:
				  echo("Thirteenth pause at: " . DEBUG_WATCH_REPORT_ENTRY13 . PHP_BR);
				  break;
				case 14:
				  echo("Fourteenth pause at: " . DEBUG_WATCH_REPORT_ENTRY14 . PHP_BR);
				  break;
				case 15:
				  echo("Fifteenth pause at: " . DEBUG_WATCH_REPORT_ENTRY15 . PHP_BR);
				  break;
			}       
			
    } else {
      
      break;
    }
  }

  if (!defined("DEBUG_WATCH_END")) {
    define("DEBUG_WATCH_END", round((hrtime(true) - DEBUG_WATCH_START)/1e+6,4));
  }
  
  echo("Final stop at: " . DEBUG_WATCH_END . PHP_BR);
}

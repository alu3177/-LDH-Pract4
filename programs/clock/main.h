/*
 * Clock (main.h)
 *
 * Copyright 1998 Marcel Baur <mbaur@g26.ethz.ch>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include "clock_res.h"

#define MAX_STRING_LEN      255
#define DEFAULTICON OIC_WINLOGO

/**
 * Struct encargado de aglutinar todos los parámetros que configuran el
 * comportamiento y apariencia del reloj.
 */
typedef struct
{
  LOGFONTW logfont;   /**< Fuente a utilizar para los mensajes de Log. */
  HFONT   hFont;      /**< Fuente a utilizar para en el reloj. */
  HANDLE  hInstance;  /**< Manejador a la instancia donde se mostrará el reloj. */
  HWND    hMainWnd;   /**< Manejador a la ventana donde se mostrará el reloj. */
  HMENU   hMainMenu;  /**< Manejador al menu donde se mostrará el reloj. */

  BOOL    bAnalog;       /**< Indica si se trata de un reloj analógico */
  BOOL    bAlwaysOnTop;  /**< Indica si se mostrará por encima del resto de elementos. */
  BOOL    bWithoutTitle; /**< Indica si se mostrará sin título asociado. */
  BOOL    bSeconds;      /**< Indica si se mostrarán los segundos (o el secundero en el reloj analógico). */
  BOOL    bDate;         /**< Indica si se mostrará la fecha. */

  int     MaxX;         /**< Valor máximo para la posición horizontal. */
  int     MaxY;         /**< Valor máximo para la posición vertical. */
} CLOCK_GLOBALS;

extern CLOCK_GLOBALS Globals;

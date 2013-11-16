/*
 *  Clock (winclock.h)
 *
 *  Copyright 1998 by Marcel Baur <mbaur@g26.ethz.ch>
 *  This file is essentially rolex.c by Jim Peterson.
 *  Please see my winclock.c and/or his rolex.c for references.
 *
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

/**
 * Función encargada del dibujado y actualización de un reloj analógico.
 * @param dc Manejador del controlador donde se dibujará el reloj.
 * @param X  Posición horizontal del centro del reloj.
 * @param Y  Posición vertical del centro del reloj.
 * @param bSeconds Indica si se muestra el secundero o no.
 * @param border Indica si se muestra el borde del reloj o no.
 */
void AnalogClock(HDC dc, int X, int Y, BOOL bSeconds, BOOL border);
/**
 * Función encargada de calcular el tamaño de la fuente a usar en el reloj digital.
 * @param dc Manejador del controlador donde se dibujará el reloj.
 * @param x  Posición horizontal de la esquina inferior izquierda del reloj.
 * @param y  Posición vertical de la esquina inferior izquierda del reloj.
 * @param bSeconds Indica si se muestran mostrarán los segundos. De no ser
 *        así se podrá usar un tamaño de fuente mayor.
 * @param font Puntero a la fuente a utilizar.
 * @return Estructura de datos con la fuente y el tamaño establecido.
 */
HFONT SizeFont(HDC dc, int x, int y, BOOL bSeconds, const LOGFONTW* font);
/**
 * Función encargada del dibujado y actualización de un reloj digital.
 * @param dc Manejador del controlador donde se dibujará el reloj.
 * @param X  Posición horizontal de la esquina inferior izquierda del reloj.
 * @param Y  Posición vertical de la esquina inferior izquierda del reloj.
 * @param bSeconds Indica si se muestran mostrarán los segundos.
 * @param font  Estructura de datos con la fuente a utilizar y el tamaño de la misma.
 */
void DigitalClock(HDC dc, int X, int Y, BOOL bSeconds, HFONT font);

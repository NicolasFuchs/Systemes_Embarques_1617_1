#pragma once
#ifndef THERMO_H
#define THERMO_H

/**
 * Copyright 2016 University of Applied Sciences Western Switzerland / Fribourg
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Project:	HEIA-FR / Embedded Systems 1 Laboratory
 *
 * Abstract:	Introduction to device driver development in C
 *
 * Purpose:	Program for TP06 Systèmes embarqués
 *			manage thermometer
 *
 * Author: 	Charlotte Junod et Nicolas Fuchs
 * Date: 	13.1.2017
 */

#include<stdbool.h>

/*
 * thermo_init:
 * initialise les ressources du thermo
 */
void thermo_init();

/*
 * thermo_read:
 * lit la température
 * return: température courante
 */
int thermo_read();

/*
 *thermo_is_alarm_on:
 *thermo_is_alarm_on:lit la valeur du pin d'alarme
 *return: true si l'alarme est allumée, false sinon
 */
bool thermo_is_alarm_on();

/*
 * thermo_read_low_seuil:
 * return: valeur de Tlow
 */
int thermo_read_low_seuil();

/*
 * thermo_read_high_seuil:
 * return: valeur de Thigh
 */
int thermo_read_high_seuil();

/*
 * thermo_set_low_seuil:
 * change la valeur de Tlow
 *	tmp: nouvelle valeur du seuil
 */
int thermo_set_low_seuil(int tmp);

/*
 * thermo_set_high_seuil:
 * change la valeur de Thigh
 *	tmp: nouvelle valeur du seuil
 */
int thermo_set_high_seuil(int tmp);

#endif

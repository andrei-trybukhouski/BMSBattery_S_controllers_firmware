/*
 * EGG OpenSource EBike firmware
 *
 * Copyright (C) Casainho, 2015, 2106, 2017.
 *
 * Released under the GPL License, Version 3
 */

#include <stdint.h>
#include <stdio.h>
#include "stm8s_gpio.h"
#include "motor.h"
#include "gpio.h"
#include "motor.h"

int16_t svm_table [SVM_TABLE_LEN] =
{
    262	,
    269	,
    276	,
    282	,
    289	,
    296	,
    302	,
    309	,
    315	,
    322	,
    329	,
    335	,
    342	,
    348	,
    355	,
    361	,
    368	,
    374	,
    380	,
    387	,
    393	,
    399	,
    405	,
    411	,
    417	,
    424	,
    429	,
    435	,
    441	,
    447	,
    449	,
    451	,
    453	,
    454	,
    456	,
    458	,
    459	,
    461	,
    462	,
    463	,
    465	,
    466	,
    467	,
    468	,
    469	,
    470	,
    471	,
    472	,
    473	,
    473	,
    474	,
    475	,
    475	,
    476	,
    476	,
    476	,
    476	,
    477	,
    477	,
    477	,
    477	,
    477	,
    476	,
    476	,
    476	,
    476	,
    475	,
    475	,
    474	,
    473	,
    473	,
    472	,
    471	,
    470	,
    469	,
    468	,
    467	,
    466	,
    465	,
    463	,
    462	,
    461	,
    459	,
    458	,
    456	,
    454	,
    453	,
    451	,
    449	,
    447	,
    449	,
    451	,
    453	,
    454	,
    456	,
    458	,
    459	,
    461	,
    462	,
    463	,
    465	,
    466	,
    467	,
    468	,
    469	,
    470	,
    471	,
    472	,
    473	,
    473	,
    474	,
    475	,
    475	,
    476	,
    476	,
    476	,
    476	,
    477	,
    477	,
    477	,
    477	,
    477	,
    476	,
    476	,
    476	,
    476	,
    475	,
    475	,
    474	,
    473	,
    473	,
    472	,
    471	,
    470	,
    469	,
    468	,
    467	,
    466	,
    465	,
    463	,
    462	,
    461	,
    459	,
    458	,
    456	,
    454	,
    453	,
    451	,
    449	,
    447	,
    441	,
    435	,
    429	,
    424	,
    417	,
    411	,
    405	,
    399	,
    393	,
    387	,
    380	,
    374	,
    368	,
    361	,
    355	,
    348	,
    342	,
    335	,
    329	,
    322	,
    315	,
    309	,
    302	,
    296	,
    289	,
    282	,
    276	,
    269	,
    262	,
    256	,
    249	,
    242	,
    235	,
    229	,
    222	,
    215	,
    209	,
    202	,
    196	,
    189	,
    182	,
    176	,
    169	,
    163	,
    156	,
    150	,
    143	,
    137	,
    131	,
    124	,
    118	,
    112	,
    106	,
    100	,
    94	,
    87	,
    82	,
    76	,
    70	,
    64	,
    62	,
    60	,
    58	,
    57	,
    55	,
    53	,
    52	,
    50	,
    49	,
    48	,
    46	,
    45	,
    44	,
    43	,
    42	,
    41	,
    40	,
    39	,
    38	,
    38	,
    37	,
    36	,
    36	,
    35	,
    35	,
    35	,
    35	,
    34	,
    34	,
    34	,
    34	,
    34	,
    35	,
    35	,
    35	,
    35	,
    36	,
    36	,
    37	,
    38	,
    38	,
    39	,
    40	,
    41	,
    42	,
    43	,
    44	,
    45	,
    46	,
    48	,
    49	,
    50	,
    52	,
    53	,
    55	,
    57	,
    58	,
    60	,
    62	,
    64	,
    62	,
    60	,
    58	,
    57	,
    55	,
    53	,
    52	,
    50	,
    49	,
    48	,
    46	,
    45	,
    44	,
    43	,
    42	,
    41	,
    40	,
    39	,
    38	,
    38	,
    37	,
    36	,
    36	,
    35	,
    35	,
    35	,
    35	,
    34	,
    34	,
    34	,
    34	,
    34	,
    35	,
    35	,
    35	,
    35	,
    36	,
    36	,
    37	,
    38	,
    38	,
    39	,
    40	,
    41	,
    42	,
    43	,
    44	,
    45	,
    46	,
    48	,
    49	,
    50	,
    52	,
    53	,
    55	,
    57	,
    58	,
    60	,
    62	,
    64	,
    70	,
    76	,
    82	,
    87	,
    94	,
    100	,
    106	,
    112	,
    118	,
    124	,
    131	,
    137	,
    143	,
    150	,
    156	,
    163	,
    169	,
    176	,
    182	,
    189	,
    196	,
    202	,
    209	,
    215	,
    222	,
    229	,
    235	,
    242	,
    249	,
    256
};

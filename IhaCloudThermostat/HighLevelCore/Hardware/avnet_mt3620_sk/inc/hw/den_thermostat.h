/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

// This file defines the mapping from the Avnet MT3620 Starter Kit (SK) to the
// 'sample hardware' abstraction used by the samples at https://github.com/Azure/azure-sphere-samples.
// Some peripherals are on-board on the Avnet MT3620 SK, while other peripherals must be attached externally if needed.

// This file is autogenerated from ../../den_thermostat.json.  Do not edit it directly.

#pragma once
#include "avnet_mt3620_sk.h"

// MT3620 SK: User Button A.
#define SAMPLE_BUTTON_1 AVNET_MT3620_SK_USER_BUTTON_A

// MT3620 SK: User Button B.
#define SAMPLE_BUTTON_2 AVNET_MT3620_SK_USER_BUTTON_B

// MT3620 SK: User LED RED Channel.
#define SAMPLE_RGBLED_RED AVNET_MT3620_SK_USER_LED_RED

// MT3620 SK: User LED GREEN Channel.
#define SAMPLE_RGBLED_GREEN AVNET_MT3620_SK_USER_LED_GREEN

// MT3620 SK: User LED BLUE Channel.
#define SAMPLE_RGBLED_BLUE AVNET_MT3620_SK_USER_LED_BLUE

// Connect External DHT11 via Grove Connector GPIO
#define DEN_DHT11 AVNET_MT3620_SK_GPIO37

// MT3620 SK: Connect external red LED using SOCKET1, pin PWM.
#define SAMPLE_DEVICE_STATUS_LED AVNET_MT3620_SK_GPIO0

// MT3620 SK: Connect external blue LED using SOCKET1, pin PWM2.
#define SAMPLE_PENDING_UPDATE_LED AVNET_MT3620_SK_GPIO2


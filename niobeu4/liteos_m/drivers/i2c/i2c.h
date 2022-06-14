/*
 * Copyright (c) 2022 OpenValley Digital Co., Ltd.
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
 */

#ifndef __ESP32_I2C_H__
#define __ESP32_I2C_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
typedef struct _DeviceI2cParams {
    int cmd;
    int id;
    int scl_pin;
    int sda_pin;
    int speed;
    int mode;
} DeviceI2cParams;

#ifdef __cplusplus
}
#endif

#endif /* __ESP32_I2C_H__ */
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

#ifndef __WIFI_H__
#define __WIFI_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void OnWifiConnectSocket(int port, const char *ip);                    // 指定端口连接socket
void OnWifiConnectDevice(const char *wifi_name, const char *wifi_pwd); // 指定wifi名和密码进行连接wifi设备
int32_t GetWifiConnectStatus(void);                                    // 获取wifi连接状态
int32_t getmac(uint8_t *mac);                                          // 获取以太网mac地址

#ifdef __cplusplus
}
#endif

#endif /* __ESP32_WIFI_H__ */
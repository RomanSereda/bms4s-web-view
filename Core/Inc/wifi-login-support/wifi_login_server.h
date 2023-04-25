#ifndef INC_WIFI_LOGIN_SERVER_H_
#define INC_WIFI_LOGIN_SERVER_H_
#include <stdbool.h>

bool start_http_web_server();
bool proc_http_web_server(float* adc_values, int adc_channels);

#endif /* INC_WIFI_LOGIN_SERVER_H_ */

#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *two_third_1;
    lv_obj_t *clock_bottom_1_3;
    lv_obj_t *clock_bottom_1_3__date;
    lv_obj_t *clock_bottom_1_3__time;
    lv_obj_t *cloudy_symbol;
    lv_obj_t *partially_cloudy_symbol;
    lv_obj_t *rainy_symbol;
    lv_obj_t *weather_top_2_3;
    lv_obj_t *weather_top_2_3__current_temp;
    lv_obj_t *weather_top_2_3__forecast_1;
    lv_obj_t *weather_top_2_3__forecast_2;
    lv_obj_t *weather_top_2_3__forecast_3;
    lv_obj_t *weather_top_2_3__highest_temp_1;
    lv_obj_t *weather_top_2_3__highest_temp_2;
    lv_obj_t *weather_top_2_3__highest_temp_3;
    lv_obj_t *weather_top_2_3__lowest_temp_1;
    lv_obj_t *weather_top_2_3__lowest_temp_2;
    lv_obj_t *weather_top_2_3__lowest_temp_3;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_TWO_THIRD_1 = 1,
    SCREEN_ID_CLOCK_TWO_THIRDS_BOTTOM = 2,
    SCREEN_ID_WEATHER_TWO_THIRDS_TOP = 3,
    SCREEN_ID_WEATHER_SUNNY = 4,
    SCREEN_ID_WEATHER_CLOUDY = 5,
    SCREEN_ID_WEATHER_PARTIALLY_CLOUDY = 6,
    SCREEN_ID_WEATHER_RAINY = 7,
};

void create_screen_two_third_1();
void tick_screen_two_third_1();

void create_user_widget_clock_two_thirds_bottom(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_clock_two_thirds_bottom(void *flowState, int startWidgetIndex);

void create_user_widget_weather_two_thirds_top(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_weather_two_thirds_top(void *flowState, int startWidgetIndex);

void create_user_widget_weather_sunny(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_weather_sunny(void *flowState, int startWidgetIndex);

void create_user_widget_weather_cloudy(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_weather_cloudy(void *flowState, int startWidgetIndex);

void create_user_widget_weather_partially_cloudy(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_weather_partially_cloudy(void *flowState, int startWidgetIndex);

void create_user_widget_weather_rainy(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_weather_rainy(void *flowState, int startWidgetIndex);

void create_screens();
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/
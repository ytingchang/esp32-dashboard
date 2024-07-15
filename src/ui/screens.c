#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

objects_t objects;
lv_obj_t *tick_value_change_obj;

void create_screen_two_third_1() {
    void *flowState = getFlowState(0, 0);
    lv_obj_t *obj = lv_obj_create(0);
    objects.two_third_1 = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 1448, 1072);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
    {
        lv_obj_t *parent_obj = obj;
        {
            // weather top 2/3
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.weather_top_2_3 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 1448, 1072);
            lv_style_value_t value;
            value.num = 0;
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_LEFT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_TOP, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_RIGHT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_BOTTOM, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BG_OPA, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BORDER_WIDTH, value, LV_PART_MAIN);
            create_user_widget_weather_two_thirds_top(obj, getFlowState(flowState, 0), 8);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // clock bottom 1/3
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.clock_bottom_1_3 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 1448, 1072);
            lv_style_value_t value;
            value.num = 0;
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_LEFT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_TOP, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_RIGHT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_BOTTOM, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BG_OPA, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BORDER_WIDTH, value, LV_PART_MAIN);
            create_user_widget_clock_two_thirds_bottom(obj, getFlowState(flowState, 2), 2);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // cloudy symbol
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.cloudy_symbol = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 1448, 1072);
            lv_style_value_t value;
            value.num = 0;
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_LEFT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_TOP, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_RIGHT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_BOTTOM, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BG_OPA, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BORDER_WIDTH, value, LV_PART_MAIN);
            create_user_widget_weather_cloudy(obj, getFlowState(flowState, 3), 5);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // partially cloudy symbol
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.partially_cloudy_symbol = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 1448, 1072);
            lv_style_value_t value;
            value.num = 0;
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_LEFT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_TOP, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_RIGHT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_BOTTOM, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BG_OPA, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BORDER_WIDTH, value, LV_PART_MAIN);
            create_user_widget_weather_partially_cloudy(obj, getFlowState(flowState, 4), 6);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // rainy symbol
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.rainy_symbol = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 1448, 1072);
            lv_style_value_t value;
            value.num = 0;
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_LEFT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_TOP, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_RIGHT, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_PAD_BOTTOM, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BG_OPA, value, LV_PART_MAIN);
            lv_obj_set_local_style_prop(obj, LV_STYLE_BORDER_WIDTH, value, LV_PART_MAIN);
            create_user_widget_weather_rainy(obj, getFlowState(flowState, 5), 7);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
    }
}

void tick_screen_two_third_1() {
    void *flowState = getFlowState(0, 0);
    tick_user_widget_weather_two_thirds_top(getFlowState(flowState, 0), 8);
    tick_user_widget_clock_two_thirds_bottom(getFlowState(flowState, 2), 2);
    tick_user_widget_weather_cloudy(getFlowState(flowState, 3), 5);
    tick_user_widget_weather_partially_cloudy(getFlowState(flowState, 4), 6);
    tick_user_widget_weather_rainy(getFlowState(flowState, 5), 7);
}

void create_user_widget_clock_two_thirds_bottom(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 1448, 357.333334);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // date
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 0] = obj;
                    lv_obj_set_pos(obj, 0, LV_PCT(30));
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Date.getMonth(currDate) + \" / \" + Date.getDay(currDate) + \" / \" + Date.getYear(currDate)");
                    apply_style_date_in_clock(obj);
                }
                {
                    // time
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 1] = obj;
                    lv_obj_set_pos(obj, 0, LV_PCT(5));
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Date.getHours(currDate) + \" : \" + Date.getMinutes(currDate)");
                    apply_style_time_in_clock(obj);
                    lv_obj_set_style_text_font(obj, &ui_font_poppins_semi_bold_64, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
    }
}

void tick_user_widget_clock_two_thirds_bottom(void *flowState, int startWidgetIndex) {
}

void create_user_widget_weather_two_thirds_top(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 1448, 715.666667);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // current temp
            lv_obj_t *obj = lv_label_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 0] = obj;
            lv_obj_set_pos(obj, 213, 173);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "25");
            lv_obj_set_style_text_font(obj, &ui_font_poppins_bold_300, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // forecast_1
            lv_obj_t *obj = lv_label_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 1] = obj;
            lv_obj_set_pos(obj, 806, 214);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "THU");
            lv_obj_set_style_text_font(obj, &ui_font_poppins_regular_48, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // lowest temp 1
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 7] = obj;
                    lv_obj_set_pos(obj, 218, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "15");
                    lv_obj_set_style_text_font(obj, &ui_font_poppins_regular_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    lv_obj_t *obj = lv_bar_create(parent_obj);
                    lv_obj_set_pos(obj, 289, 21);
                    lv_obj_set_size(obj, 150, 10);
                    lv_bar_set_value(obj, 100, LV_ANIM_OFF);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffe4e4e4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff767676), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_grad_stop(obj, 250, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                }
                {
                    // highest temp 1
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 4] = obj;
                    lv_obj_set_pos(obj, 473, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "27");
                    lv_obj_set_style_text_font(obj, &ui_font_poppins_regular_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // forecast_2
            lv_obj_t *obj = lv_label_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 2] = obj;
            lv_obj_set_pos(obj, 806, 332);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "FRI");
            lv_obj_set_style_text_font(obj, &ui_font_poppins_regular_48, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // lowest temp 2
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 8] = obj;
                    lv_obj_set_pos(obj, 218, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "15");
                    lv_obj_set_style_text_font(obj, &ui_font_poppins_regular_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    lv_obj_t *obj = lv_bar_create(parent_obj);
                    lv_obj_set_pos(obj, 289, 21);
                    lv_obj_set_size(obj, 150, 10);
                    lv_bar_set_value(obj, 100, LV_ANIM_OFF);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffe4e4e4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff767676), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                }
                {
                    // highest temp 2
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 5] = obj;
                    lv_obj_set_pos(obj, 473, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "32");
                    lv_obj_set_style_text_font(obj, &ui_font_poppins_regular_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // forecast_3
            lv_obj_t *obj = lv_label_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 3] = obj;
            lv_obj_set_pos(obj, 806, 451);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "SAT");
            lv_obj_set_style_text_font(obj, &ui_font_poppins_regular_48, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // lowest temp 3
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 9] = obj;
                    lv_obj_set_pos(obj, 218, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "17");
                    lv_obj_set_style_text_font(obj, &ui_font_poppins_regular_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    lv_obj_t *obj = lv_bar_create(parent_obj);
                    lv_obj_set_pos(obj, 289, 21);
                    lv_obj_set_size(obj, 150, 10);
                    lv_bar_set_value(obj, 100, LV_ANIM_OFF);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffe4e4e4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff767676), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                }
                {
                    // highest temp 3
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 6] = obj;
                    lv_obj_set_pos(obj, 473, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "34");
                    lv_obj_set_style_text_font(obj, &ui_font_poppins_regular_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
    }
}

void tick_user_widget_weather_two_thirds_top(void *flowState, int startWidgetIndex) {
}

void create_user_widget_weather_sunny(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 106, 166);
            lv_obj_set_size(obj, 80, 80);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffaaaaaa), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 113, 173);
            lv_obj_set_size(obj, 65, 65);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
}

void tick_user_widget_weather_sunny(void *flowState, int startWidgetIndex) {
}

void create_user_widget_weather_cloudy(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 109, 192);
            lv_obj_set_size(obj, 98, 58);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffaaaaaa), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 86, 186);
            lv_obj_set_size(obj, 100, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 119, 192);
            lv_obj_set_size(obj, 85, 49);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 113, 168);
            lv_obj_set_size(obj, 65, 78);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 98, 186);
            lv_obj_set_size(obj, 88, 58);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
}

void tick_user_widget_weather_cloudy(void *flowState, int startWidgetIndex) {
}

void create_user_widget_weather_partially_cloudy(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 95, 152);
            lv_obj_set_size(obj, 80, 80);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffaaaaaa), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 102, 159);
            lv_obj_set_size(obj, 65, 65);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 120, 205);
            lv_obj_set_size(obj, 98, 58);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffaaaaaa), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 97, 199);
            lv_obj_set_size(obj, 100, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 130, 205);
            lv_obj_set_size(obj, 85, 49);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 124, 181);
            lv_obj_set_size(obj, 65, 78);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 109, 199);
            lv_obj_set_size(obj, 88, 58);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
}

void tick_user_widget_weather_partially_cloudy(void *flowState, int startWidgetIndex) {
}

void create_user_widget_weather_rainy(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 109, 192);
            lv_obj_set_size(obj, 98, 58);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffaaaaaa), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 86, 186);
            lv_obj_set_size(obj, 100, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 119, 192);
            lv_obj_set_size(obj, 85, 49);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 113, 168);
            lv_obj_set_size(obj, 65, 78);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 98, 186);
            lv_obj_set_size(obj, 88, 58);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 108, 251);
            lv_obj_set_size(obj, 2, 59);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 142, 257);
            lv_obj_set_size(obj, 2, 36);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 176, 257);
            lv_obj_set_size(obj, 2, 43);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
}

void tick_user_widget_weather_rainy(void *flowState, int startWidgetIndex) {
}


void create_screens() {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_two_third_1();
}

typedef void (*tick_screen_func_t)();

tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_two_third_1,
    0,
    0,
    0,
    0,
    0,
    0,
};

void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}

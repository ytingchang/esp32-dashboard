#include "styles.h"
#include "images.h"
#include "fonts.h"

void apply_style_date_in_clock(lv_obj_t *obj) {
    lv_obj_set_style_text_font(obj, &ui_font_poppins_semi_bold_64, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
};
void apply_style_time_in_clock(lv_obj_t *obj) {
    lv_obj_set_style_text_font(obj, &ui_font_poppins_bold_300, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
};


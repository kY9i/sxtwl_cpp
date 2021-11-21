/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef PHP_SXTWL_H
#define PHP_SXTWL_H

extern zend_module_entry sxtwl_module_entry;
#define phpext_sxtwl_ptr &sxtwl_module_entry

#ifdef PHP_WIN32
# define PHP_SXTWL_API __declspec(dllexport)
#else
# define PHP_SXTWL_API
#endif

ZEND_NAMED_FUNCTION(_wrap_new_JDList);
ZEND_NAMED_FUNCTION(_wrap_JDList_size);
ZEND_NAMED_FUNCTION(_wrap_JDList_capacity);
ZEND_NAMED_FUNCTION(_wrap_JDList_reserve);
ZEND_NAMED_FUNCTION(_wrap_JDList_clear);
ZEND_NAMED_FUNCTION(_wrap_JDList_push);
ZEND_NAMED_FUNCTION(_wrap_JDList_is_empty);
ZEND_NAMED_FUNCTION(_wrap_JDList_pop);
ZEND_NAMED_FUNCTION(_wrap_JDList_get);
ZEND_NAMED_FUNCTION(_wrap_JDList_set);
ZEND_NAMED_FUNCTION(_wrap_new_Time);
ZEND_NAMED_FUNCTION(_wrap_Time_year_set);
ZEND_NAMED_FUNCTION(_wrap_Time_year_get);
ZEND_NAMED_FUNCTION(_wrap_Time_month_set);
ZEND_NAMED_FUNCTION(_wrap_Time_month_get);
ZEND_NAMED_FUNCTION(_wrap_Time_day_set);
ZEND_NAMED_FUNCTION(_wrap_Time_day_get);
ZEND_NAMED_FUNCTION(_wrap_Time_hour_set);
ZEND_NAMED_FUNCTION(_wrap_Time_hour_get);
ZEND_NAMED_FUNCTION(_wrap_Time_min_set);
ZEND_NAMED_FUNCTION(_wrap_Time_min_get);
ZEND_NAMED_FUNCTION(_wrap_Time_sec_set);
ZEND_NAMED_FUNCTION(_wrap_Time_sec_get);
ZEND_NAMED_FUNCTION(_wrap_new_GZ);
ZEND_NAMED_FUNCTION(_wrap_GZ_tg_set);
ZEND_NAMED_FUNCTION(_wrap_GZ_tg_get);
ZEND_NAMED_FUNCTION(_wrap_GZ_dz_set);
ZEND_NAMED_FUNCTION(_wrap_GZ_dz_get);
ZEND_NAMED_FUNCTION(_wrap_Day_fromSolar);
ZEND_NAMED_FUNCTION(_wrap_Day_fromLunar);
ZEND_NAMED_FUNCTION(_wrap_Day_after);
ZEND_NAMED_FUNCTION(_wrap_Day_before);
ZEND_NAMED_FUNCTION(_wrap_Day_getLunarDay);
ZEND_NAMED_FUNCTION(_wrap_Day_getLunarMonth);
ZEND_NAMED_FUNCTION(_wrap_Day_getLunarYear);
ZEND_NAMED_FUNCTION(_wrap_Day_getYearGZ);
ZEND_NAMED_FUNCTION(_wrap_Day_getMonthGZ);
ZEND_NAMED_FUNCTION(_wrap_Day_getDayGZ);
ZEND_NAMED_FUNCTION(_wrap_Day_getHourGZ);
ZEND_NAMED_FUNCTION(_wrap_Day_isLunarLeap);
ZEND_NAMED_FUNCTION(_wrap_Day_getSolarYear);
ZEND_NAMED_FUNCTION(_wrap_Day_getSolarMonth);
ZEND_NAMED_FUNCTION(_wrap_Day_getSolarDay);
ZEND_NAMED_FUNCTION(_wrap_Day_getWeek);
ZEND_NAMED_FUNCTION(_wrap_Day_getWeekIndex);
ZEND_NAMED_FUNCTION(_wrap_Day_hasJieQi);
ZEND_NAMED_FUNCTION(_wrap_Day_getJieQi);
ZEND_NAMED_FUNCTION(_wrap_Day_getJieQiJD);
ZEND_NAMED_FUNCTION(_wrap_Day_getConstellation);
ZEND_NAMED_FUNCTION(_wrap_fromSolar);
ZEND_NAMED_FUNCTION(_wrap_fromLunar);
ZEND_NAMED_FUNCTION(_wrap_siZhu2Year);
ZEND_NAMED_FUNCTION(_wrap_getShiGz);
ZEND_NAMED_FUNCTION(_wrap_getRunMonth);
ZEND_NAMED_FUNCTION(_wrap_getLunarMonthNum);
ZEND_NAMED_FUNCTION(_wrap_JD2DD);
ZEND_NAMED_FUNCTION(_wrap_toJD);
PHP_MINIT_FUNCTION(sxtwl);

#endif /* PHP_SXTWL_H */

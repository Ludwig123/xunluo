//
//  DB_police.h
//  xunluo
//
//  Created by Ludwig on 3/9/16.
//  Copyright © 2016 Ludwig. All rights reserved.
//

#ifndef DB_police_h
#define DB_police_h

#include <stdio.h>
#include <stdbool.h>

#endif /* DB_police_h */

#define NAME_LENGH 20

typedef enum {
    NEI_QIN,
    XUN_LUO,
    SHI_GU,
    XIE_JING,
    LING_DAO
} Cartegory;

typedef enum {
    MONDAY_MOR, MONDAY_EVE, MONDAY_NIG,
    TUESDAY_MOR, TUESDAY_EVE, TUESDAY_NIG,
    WENSDAY_MOR, WENSDAY_EVE, WENSDAY_NIG,
    THURSDAT_MOR, THURSDAT_EVE, THURSDAT_NIG,
    FRIDAY_MOR, FRIDAY_EVE, FRIDAY_NIG,
    SATURDAY_MOR, SATURDAY_EVE, SATURDAY_NIG,
    SUNDAY_MOR, SUNDAY_EVE, SUNDAY_NIG,
    
    
} Time_block;

typedef enum {
    MONDAY,
    TUESDAY,
    WENSDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
}Time_day;


typedef struct {
    char            name[NAME_LENGH];
    Cartegory       category;
    unsigned int    ID;
    
    
    int             work_schedul[21];
    
} Police;






bool is_free(Police * police);

bool is_empty(Police * police);

bool work_set(Police * police, Time_block );

bool phone_set(Police * police,Time_day);

Police * police_new(char *, char*);




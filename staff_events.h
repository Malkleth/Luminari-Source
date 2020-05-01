/*/ \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \
\     Staff Ran Event System
/  File:       staff_events.h
/  Created By: Zusuk
\  Main:     staff_events.c
/    System for running staff events
\    Basics including starting, ending and info on the event, etc
/  Created on April 26, 2020
\ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ /*/

/* includes */
#include "utils.h" /* for the ACMD macro */
/* end includes */

/***/
/******* defines */
#define NUM_STAFF_EVENTS 1

/* event fields */
#define EVENT_TITLE 0
#define EVENT_BEGIN 1
#define EVENT_END 2
#define EVENT_DETAIL 3
#define EVENT_SUMMARY 4
#define STAFF_EVENT_FIELDS 5

/* event index */
#define UNDEFINED_EVENT -1 /* just a marker */
#define JACKALOPE_HUNT 0   /* event id (event_num) */

/* defines for each individual event */

/* jackalope hunt defines */
#define EASY_JACKALOPE 11391   /* vnum of lower level jackalope */
#define MED_JACKALOPE 11392    /* vnum of mid level jackalope */
#define HARD_JACKALOPE 11393   /* vnum of high level jackalope */
#define NUM_JACKALOPE_EACH 300 /* how many of each jackalope to load */

#define JACKALOPE_NORTH_Y 185 /* north, y-coordinate border for loading mobs */
#define JACKALOPE_SOUTH_Y -63 /* south, y-coordinate border for loading mobs */
#define JACKALOPE_WEST_X 597  /* west, x-coordinate border for loading mobs */
#define JACKALOPE_EAST_X 703  /* east, x-coordinate border for loading mobs */

#define JACKALOPE_HIDE 11366       /* vnum of jackalope's hide */
#define PRISTINE_HORN 11368        /* vnum of rare pristine jackalope horn */
#define P_HORN_RARITY 5            /* % chance of loading pristine jackalope horn */
#define PRISTINEHORN_PRIZE 11363   /* vnum of prize for turning in the horn (token that does happyhour) */
#define FULLSTAFF_NPC 11449        /* Fullstaff NPC, quest initiator... */
#define JACKALOPE_HIGH_PRIZE 11365 /* vnum of overall winner prize (hunting horn) */
#define GREAT_HUNT_RIBBON 11369    /* prize awarded to all participants */
                                   /* end jackalope hunt defines */

/******* end defines */
/***/

/* staff events functions, arrays, etc */
const char *staff_events_list[NUM_STAFF_EVENTS][STAFF_EVENT_FIELDS];

void start_staff_event(int event_num);
void end_staff_event(int event_num);
void staff_event_info(struct char_data *ch, int event_num);
void list_staff_events(struct char_data *ch);
void wild_mobile_loader(int mobile_vnum, int x_coord, int y_coord);
int mob_ingame_count(int mobile_vnum);
void mob_ingame_purge(int mobile_vnum);
void check_event_drops(struct char_data *killer, struct char_data *victim);

ACMD_DECL(do_staffevents);

/* EOF */

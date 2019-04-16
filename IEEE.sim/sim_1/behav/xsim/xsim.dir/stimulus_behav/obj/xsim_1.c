/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_1211(char*, char *);
extern void execute_5975(char*, char *);
extern void execute_5976(char*, char *);
extern void execute_1210(char*, char *);
extern void execute_1284(char*, char *);
extern void execute_5963(char*, char *);
extern void execute_5964(char*, char *);
extern void execute_5965(char*, char *);
extern void execute_5966(char*, char *);
extern void execute_5967(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_5971(char*, char *);
extern void execute_5972(char*, char *);
extern void execute_5973(char*, char *);
extern void execute_1216(char*, char *);
extern void execute_1217(char*, char *);
extern void execute_1218(char*, char *);
extern void execute_1219(char*, char *);
extern void execute_1220(char*, char *);
extern void execute_1221(char*, char *);
extern void execute_1257(char*, char *);
extern void execute_1258(char*, char *);
extern void execute_1259(char*, char *);
extern void execute_1278(char*, char *);
extern void execute_1279(char*, char *);
extern void execute_1280(char*, char *);
extern void execute_5917(char*, char *);
extern void execute_1285(char*, char *);
extern void execute_1291(char*, char *);
extern void execute_5918(char*, char *);
extern void execute_5919(char*, char *);
extern void execute_5920(char*, char *);
extern void execute_5921(char*, char *);
extern void execute_1213(char*, char *);
extern void execute_1214(char*, char *);
extern void execute_1215(char*, char *);
extern void execute_5977(char*, char *);
extern void execute_5978(char*, char *);
extern void execute_5979(char*, char *);
extern void execute_5980(char*, char *);
extern void execute_5981(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_20(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[44] = {(funcp)execute_1211, (funcp)execute_5975, (funcp)execute_5976, (funcp)execute_1210, (funcp)execute_1284, (funcp)execute_5963, (funcp)execute_5964, (funcp)execute_5965, (funcp)execute_5966, (funcp)execute_5967, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_5971, (funcp)execute_5972, (funcp)execute_5973, (funcp)execute_1216, (funcp)execute_1217, (funcp)execute_1218, (funcp)execute_1219, (funcp)execute_1220, (funcp)execute_1221, (funcp)execute_1257, (funcp)execute_1258, (funcp)execute_1259, (funcp)execute_1278, (funcp)execute_1279, (funcp)execute_1280, (funcp)execute_5917, (funcp)execute_1285, (funcp)execute_1291, (funcp)execute_5918, (funcp)execute_5919, (funcp)execute_5920, (funcp)execute_5921, (funcp)execute_1213, (funcp)execute_1214, (funcp)execute_1215, (funcp)execute_5977, (funcp)execute_5978, (funcp)execute_5979, (funcp)execute_5980, (funcp)execute_5981, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_12, (funcp)transaction_20};
const int NumRelocateId= 44;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/stimulus_behav/xsim.reloc",  (void **)funcTab, 44);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/stimulus_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/stimulus_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/stimulus_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/stimulus_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/stimulus_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}

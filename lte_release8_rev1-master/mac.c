#include <stdio.h>
#include "mac.h"

void mac_layer_call(ccch_info rlc_pdu)


{
	ul_sch_type Ul_sch;

	/**ul_sch variable is created and passed to physical layer**/

	Ul_sch.mac_sdu=rlc_pdu;
	/**in below condition if rlc_pdu.ccch is ul_ccch then only mac layer will pas corresponding channel or else
	not**/

	if(rlc_pdu.ccch==ul_ccch)
	{
		printf("UL_ccch is passed to physical layer")

		/**here allocating UL_SCH what kind of channel is used by mac so PHYSICAL layer will use corresponding
		channels**/
		Ul_sch.sch=ul_sch;

		/**physical layer is called here and physical_layer_call is defined and declared in physical layer**/
		physical_layer_call(Ul_sch);
		/*return ul_sch;*/
	}
	else
	{
		printf("\ncrash in physical layer");
	}
}

void mac_layer_stub(radio_resource_config_type physical_pdu)
{

    srb_to_add_type ccch;
    ccch.srbidentity=physical_pdu.srb_to_add.srbidentity;
    rlc_stub(ccch);

}

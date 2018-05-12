#include <stdio.h>
#include "phy.h"
void physical_layer_call(ul_sch_type mac_pdu)
/**mac_pdu is USLCH channel passed from MAC layer**/
{
    phy_sch_type Pusch;

    Pusch.phy_sdu=mac_pdu;

    if(mac_pdu.sch==ul_sch)
    {
        printf("Ulsch passed to physical layer");

        Pusch.phy_channel=pusch;
    }

    else
    {
        printf("\ncrash in physical layer");

    }


/*pusch.pusch_sdu=mac_pdu;
pusch.rscp=rs;

printf("\nenter the reference signal:");

scanf("%d",&rs);*/ /**here we are giving rs i.e rscp manually**/

/*printf("%d\n",(rs>-120)&&(rs<0));*/
        /**rs is rscp of the ue,rscp should be between 0 and -120 if it exceeds -120 it means
                radio quality is poor so unable to send frame**/

/*if((rs>-120)&&(rs<0))
    {
        radio_frame(pusch);
        break;
    }
else
    printf("\npoor rscp can't transmit pdsch to enodeb");
}*/
}
/**void physical_layer_sturb(rrc_connection_setup_type pdsch)
{
Radio_resource_config_type dlsch;
dlsch=pdsch.Radio_resource_config;
mac_layer_stub(dlsch);

}**/
void physical_layer_stub(rrc_connection_setup_type pdsch)
{
    radio_resource_config_type dlsch;
    dlsch=pdsch.radio_resource_config;
    if(dlsch.srb_to_add.srbidentity==1)
    {
        printf("dlsch=%d",dlsch.srb_to_add.srbidentity);
      mac_layer_stub(dlsch);

    }
    else
    {
         printf("crash in physical stub");


    }
}

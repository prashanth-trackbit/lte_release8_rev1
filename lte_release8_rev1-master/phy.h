#ifndef PHY_H_INCLUDED
#define PHY_H_INCLUDED

void physical_layer_call(ul_sch_type);/**mac_pdu is ULSCH channel passed from MAC layer**/
                                              /**ul_sch_type is taken from MAC layer**/
typedef enum{
pbch=0,
pdsch=1,
pusch=2,
pmch=3,
pdcch=4
}phy_type;

typedef struct {

ul_sch_type phy_sdu;
phy_type phy_channel;

}phy_sch_type;



void physical_layer_stub(rrc_connection_setup_type);



#endif // PHY_H_INCLUDED

/*
 * func-name: ?ReceiveEnergy@CDropBagUI@@IAEXXZ_0
 * func-address: 0x10268ee0
 * callers: 0x100177ab
 * callees: 0x10001dfc, 0x1000810c, 0x102c9ea8
 */

void __thiscall CDropBagUI::ReceiveEnergy(CDropBagUI *this)
{
  int v1; // eax
  GameClient::Booty *v2; // eax

  v1 = sub_10001DFC(*((_DWORD *)this + 1015));
  if ( v1 )
  {
    v2 = (GameClient::Booty *)_RTDynamicCast(
                                v1,
                                0,
                                &GameClient::WorldObject `RTTI Type Descriptor',
                                &GameClient::Booty `RTTI Type Descriptor');
    if ( v2 )
      GameClient::Booty::SubmitImbileEnergy(v2, *((_BYTE *)v2 + 173) == 0);
  }
}

/*
 * func-name: ?ImbileEnergy@Booty@GameClient@@QAEX_N@Z_0
 * func-address: 0x10144910
 * callers: 0x1000e7d7
 * callees: 0x10008ee5, 0x102c9ea8
 */

void __thiscall GameClient::Booty::ImbileEnergy(GameClient::Booty *this, bool a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  CDropBagUI *v4; // eax
  int v5; // [esp-10h] [ebp-14h]

  *((_BYTE *)this + 173) = a2;
  v2 = (CDlgMgr *)CDlgMgr::Instance(27);
  Dialog = CDlgMgr::GetDialog(v2, 0);
  v4 = (CDropBagUI *)_RTDynamicCast(
                       Dialog,
                       v5,
                       &CTYDialog `RTTI Type Descriptor',
                       &CDropBagUI `RTTI Type Descriptor',
                       0);
  if ( v4 )
    CDropBagUI::ImbileEnergyRes(v4, a2);
}

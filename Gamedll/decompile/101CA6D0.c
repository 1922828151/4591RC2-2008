/*
 * func-name: ?Active@Func_VehicleReceive@GameClient@@UAEXXZ_0
 * func-address: 0x101ca6d0
 * callers: 0x1000eb42
 * callees: 0x1000ddaa, 0x102c9ea8
 */

void __thiscall GameClient::Func_VehicleReceive::Active(GameClient::Func_VehicleReceive *this)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int v4; // eax
  CDlgMgr *v5; // eax
  CDlgMgr *v6; // eax
  struct CTYDialog *v7; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  v4 = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CVehicleRoofUI `RTTI Type Descriptor', 0);
  if ( v4 )
    *(_DWORD *)(v4 + 3904) = *((_DWORD *)this + 8);
  v5 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v5);
  v6 = (CDlgMgr *)CDlgMgr::Instance();
  v7 = CDlgMgr::GetDialog(v6);
  if ( _RTDynamicCast(v7, 8, 1, 0, 0.0) )
  {
    sub_1000DDAA(8);
    sub_10005CF4();
  }
}

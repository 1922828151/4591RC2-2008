/*
 * func-name: ?DeActive@Func_VehicleReceive@GameClient@@UAEXXZ_0
 * func-address: 0x101ca760
 * callers: 0x100111f3
 * callees: 0x102c9ea8
 */

void __thiscall GameClient::Func_VehicleReceive::DeActive(GameClient::Func_VehicleReceive *this)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  int v3; // eax
  CDlgMgr *v4; // eax
  struct CTYDialog *v5; // eax
  int v6; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  v3 = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CFixtureUIHeader `RTTI Type Descriptor', 0);
  if ( v3 && *(_DWORD *)(v3 + 3896) == 8 )
  {
    v4 = (CDlgMgr *)CDlgMgr::Instance();
    v5 = CDlgMgr::GetDialog(v4);
    v6 = _RTDynamicCast(v5, 0, &CTYDialog `RTTI Type Descriptor', &CVehicleRoofUI `RTTI Type Descriptor', 0);
    if ( v6 )
      *(_DWORD *)(v6 + 3904) = -1;
    sub_10017A44();
  }
}

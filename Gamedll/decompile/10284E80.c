/*
 * func-name: sub_10284E80
 * func-address: 0x10284e80
 * callers: 0x10008369
 * callees: 0x100132f5, 0x102c9ea8
 */

void __stdcall sub_10284E80(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  Event *v3; // esi
  CDlgMgr *v4; // eax
  struct CTYDialog *Dialog; // eax
  CRobotRoofUI *v6; // eax
  Event *v7; // edx

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v3 = a1;
  }
  else
  {
    v3 = *(Event **)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  v4 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v4);
  v6 = (CRobotRoofUI *)_RTDynamicCast(
                         Dialog,
                         0,
                         &CTYDialog `RTTI Type Descriptor',
                         &CRobotRoofUI `RTTI Type Descriptor');
  if ( v6 )
  {
    v7 = (Event *)*((_DWORD *)v6 + 1006);
    if ( v7 != (Event *)-1 && v7 == v3 )
      CRobotRoofUI::UpdateStockPile(v6);
  }
}

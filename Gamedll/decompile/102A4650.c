/*
 * func-name: ?OnBegin@VehicleStockUpdatedObserver@@UAEXAAVEvent@@@Z_0
 * func-address: 0x102a4650
 * callers: 0x1000d55d
 * callees: 0x10019d21, 0x102c9ea8
 */

void __thiscall VehicleStockUpdatedObserver::OnBegin(VehicleStockUpdatedObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  struct Event *v4; // esi
  CDlgMgr *v5; // eax
  struct CTYDialog *Dialog; // eax
  CVehicleRoofUI *v7; // eax
  struct Event *v8; // edx

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = a2;
  }
  else
  {
    v4 = *(struct Event **)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3 + 4;
  }
  v5 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v5);
  v7 = (CVehicleRoofUI *)_RTDynamicCast(
                           Dialog,
                           0,
                           &CTYDialog `RTTI Type Descriptor',
                           &CVehicleRoofUI `RTTI Type Descriptor');
  if ( v7 )
  {
    v8 = (struct Event *)*((_DWORD *)v7 + 976);
    if ( v8 != (struct Event *)-1 && v8 == v4 )
      CVehicleRoofUI::OnUpdateStockPile(v7);
  }
}

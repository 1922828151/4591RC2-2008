/*
 * func-name: sub_1027C8A0
 * func-address: 0x1027c8a0
 * callers: 0x10008247
 * callees: 0x10017bde, 0x102c9ea8
 */

void __stdcall sub_1027C8A0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // esi
  CDlgMgr *v4; // eax
  struct CTYDialog *Dialog; // eax
  CRadarMapUI *v6; // eax

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v3 = (int)a1;
  }
  else
  {
    v3 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  v4 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v4);
  v6 = (CRadarMapUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CRadarMapUI `RTTI Type Descriptor');
  if ( v6 )
    CRadarMapUI::OnBattleFieldInfoUpdated(v6, v3);
}

/*
 * func-name: sub_10255B90
 * func-address: 0x10255b90
 * callers: 0x10002298
 * callees: 0x100177c4, 0x102c9ea8
 */

void __stdcall sub_10255B90(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // esi
  CDlgMgr *v4; // eax
  struct CTYDialog *Dialog; // eax
  CBattleFieldDetailUI *v6; // eax

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
  v6 = (CBattleFieldDetailUI *)_RTDynamicCast(
                                 Dialog,
                                 0,
                                 &CTYDialog `RTTI Type Descriptor',
                                 &CBattleFieldDetailUI `RTTI Type Descriptor');
  if ( v6 )
    CBattleFieldDetailUI::OnMapInfoUpdated(v6, v3);
}

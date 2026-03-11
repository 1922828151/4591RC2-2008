/*
 * func-name: sub_1028C560
 * func-address: 0x1028c560
 * callers: 0x1000a37b
 * callees: 0x1000af38, 0x102c9ea8
 */

void __stdcall sub_1028C560(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // edi
  int v5; // ecx
  unsigned int v6; // esi
  CDlgMgr *v7; // eax
  struct CTYDialog *Dialog; // eax
  CStatusUI *v9; // eax

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = *((_DWORD *)Stream + 2);
  if ( v2 + 4 > v3 )
  {
    v4 = (unsigned int)a1;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  v5 = *((_DWORD *)Stream + 3);
  if ( v5 + 4 > v3 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = *(_DWORD *)(v5 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v5 + 4;
  }
  v7 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v7);
  v9 = (CStatusUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CStatusUI `RTTI Type Descriptor');
  if ( v9 )
    CStatusUI::OnBuffRemoved(v9, v4, v6);
}

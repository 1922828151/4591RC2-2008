/*
 * func-name: sub_101F0CA0
 * func-address: 0x101f0ca0
 * callers: 0x100152da
 * callees: 0x1000110e, 0x10016a4f, 0x10016d5b
 */

char __stdcall sub_101F0CA0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // esi
  int v4; // ebx
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // esi
  CDlgMgr *v9; // eax
  CDlgMgr *v10; // eax
  CDlgMgr *v11; // eax
  CDlgMgr *v12; // eax

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = *((_DWORD *)Stream + 2);
  if ( v2 + 4 > v3 )
  {
    LOBYTE(v4) = (_BYTE)a1;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  v5 = *((_DWORD *)Stream + 3);
  if ( v5 + 4 > v3 )
  {
    v6 = (int)a1;
  }
  else
  {
    v6 = *(_DWORD *)(v5 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v5 + 4;
  }
  v7 = sub_10016A4F(v4);
  v8 = v7;
  if ( v7 )
  {
    sub_10016D5B(v6);
    if ( (unsigned __int8)sub_1000110E(v6) )
      *(_DWORD *)(v8 + 292) = v6;
    v9 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v9);
    v10 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v10);
    v11 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v11);
    v12 = (CDlgMgr *)CDlgMgr::Instance();
    LOBYTE(v7) = CDlgMgr::ShowDialog(v12);
  }
  return v7;
}

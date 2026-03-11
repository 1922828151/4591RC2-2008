/*
 * func-name: sub_101CE1A0
 * func-address: 0x101ce1a0
 * callers: 0x10003bd4
 * callees: 0x10006947, 0x1000a277, 0x1000a506, 0x102c9ea8
 */

void __stdcall sub_101CE1A0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // ebx
  int v5; // ecx
  unsigned int v6; // edi
  GameClient::FuncManager *v7; // eax
  struct GameClient::Func_Power *Function; // esi
  GameClient::FuncManager *v9; // eax
  struct GameClient::Function *v10; // eax
  struct GameClient::Func_Power *v11; // edi
  CDlgMgr *v12; // eax
  struct CTYDialog *Dialog; // eax
  CPowerTransportUI *v14; // eax

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
  v7 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v7, v4);
  v9 = GameClient::FuncManager::Instance();
  v10 = GameClient::FuncManager::GetFunction(v9, v6);
  v11 = v10;
  if ( Function && v10 )
  {
    v12 = (CDlgMgr *)CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v12);
    v14 = (CPowerTransportUI *)_RTDynamicCast(
                                 Dialog,
                                 0,
                                 &CTYDialog `RTTI Type Descriptor',
                                 &CPowerTransportUI `RTTI Type Descriptor',
                                 0);
    if ( v14 )
      CPowerTransportUI::SetTransport(v14, Function, v11);
  }
}

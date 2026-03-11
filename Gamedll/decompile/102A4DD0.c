/*
 * func-name: ?WaitQueueUIEvent@CWaitQueueUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x102a4dd0
 * callers: 0x1000ff88
 * callees: 0x1000194c, 0x10006947, 0x1000a506, 0x102c9ea8
 */

void __stdcall CWaitQueueUI::WaitQueueUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  int v6; // esi
  int v7; // edi
  GameClient::FuncManager *v8; // eax
  struct GameClient::Function *Function; // eax
  int v10; // eax
  unsigned int v11; // [esp-18h] [ebp-1Ch]

  v6 = _RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CWaitQueueUI `RTTI Type Descriptor');
  if ( v6 )
  {
    if ( a2 != 24 && a3 == 3 )
    {
      v7 = sub_1000194C(0);
      if ( v7 )
      {
        v11 = *(_DWORD *)(v6 + 3888);
        v8 = GameClient::FuncManager::Instance();
        Function = GameClient::FuncManager::GetFunction(v8, v11);
        v10 = _RTDynamicCast(
                Function,
                0,
                &GameClient::Function `RTTI Type Descriptor',
                &GameClient::Func_Receive `RTTI Type Descriptor');
        if ( v10 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 76))(v10, v7);
      }
    }
  }
}

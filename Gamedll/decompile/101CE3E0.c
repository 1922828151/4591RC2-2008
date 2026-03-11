/*
 * func-name: sub_101CE3E0
 * func-address: 0x101ce3e0
 * callers: 0x1001768e
 * callees: 0x1000a3a8, 0x1000abf0, 0x1000d251, 0x1000d51c, 0x1000ed13, 0x1001636a, 0x10016a4f, 0x1001a0f5, 0x1001a5be
 */

char __stdcall sub_101CE3E0(struct BinStream *a1)
{
  Event *v1; // edi
  char Owner; // al
  struct BinStream *Robot; // eax
  GameClient::RobotManager *v4; // eax
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // ebp
  int v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // edx
  struct BinStream *v12; // edi
  CDlgMgr *v13; // eax
  int v15; // [esp+0h] [ebp-38h]
  int v16; // [esp+18h] [ebp-20h] BYREF
  int v17[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v18; // [esp+34h] [ebp-4h]

  v1 = a1;
  Owner = Event::GetOwner(a1);
  Robot = (struct BinStream *)sub_10016A4F(Owner);
  if ( Robot )
  {
    v15 = *((_DWORD *)Robot + 73);
    v4 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v4, v15);
    a1 = Robot;
    if ( Robot )
    {
      Robot = Event::GetStream(v1);
      v5 = *((_DWORD *)Robot + 3);
      v6 = *((_DWORD *)Robot + 2);
      if ( v5 + 4 > v6 )
      {
        v7 = (int)a1;
      }
      else
      {
        v7 = *(_DWORD *)(v5 + *((_DWORD *)Robot + 1));
        *((_DWORD *)Robot + 3) = v5 + 4;
      }
      v8 = *((_DWORD *)Robot + 3);
      if ( v8 + 4 > v6 )
      {
        v9 = (int)a1;
      }
      else
      {
        v9 = *(_DWORD *)(v8 + *((_DWORD *)Robot + 1));
        *((_DWORD *)Robot + 3) = v8 + 4;
      }
      v10 = *((_DWORD *)Robot + 3);
      if ( v10 + 4 <= v6 )
      {
        v16 = *(_DWORD *)(v10 + *((_DWORD *)Robot + 1));
        *((_DWORD *)Robot + 3) = v10 + 4;
      }
      v11 = *((_DWORD *)Robot + 3);
      if ( v11 + 4 > v6 )
      {
        v12 = a1;
      }
      else
      {
        v12 = *(struct BinStream **)(v11 + *((_DWORD *)Robot + 1));
        *((_DWORD *)Robot + 3) = v11 + 4;
      }
      if ( v7 == *((_DWORD *)a1 + 227) )
      {
        if ( v12 != (struct BinStream *)-1 )
        {
          a1 = 0;
          sub_1001636A(13, (int)&a1);
          if ( a1 )
          {
            memset(&v17[1], 0, 12);
            v18 = 0;
            sub_1001A0F5(v17, (int)&v16);
            CWaitQueueUI::SetQueuePos(v9, (int)v17, (wchar_t)v12, v7);
            v18 = -1;
            sub_1000D51C();
          }
          a1 = 0;
          sub_1001A5BE(3, (int)&a1);
          if ( a1 )
            sub_1000D251(13);
        }
        v13 = (CDlgMgr *)CDlgMgr::Instance();
        LOBYTE(Robot) = CDlgMgr::ShowDialog(v13);
      }
    }
  }
  return (char)Robot;
}

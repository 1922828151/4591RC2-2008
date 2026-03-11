/*
 * func-name: sub_101CDB20
 * func-address: 0x101cdb20
 * callers: 0x1001594c
 * callees: 0x1000194c, 0x10001b04, 0x10006947, 0x100077ed, 0x1000a3a8, 0x1000a506, 0x1000ed13, 0x10013647
 */

void __stdcall sub_101CDB20(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // esi
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *Robot; // eax
  struct GameClient::Robot *v6; // edi
  GameClient::FuncManager *v7; // eax
  struct GameClient::Function *Function; // eax
  int v9; // [esp+8h] [ebp-24h]
  unsigned int v10; // [esp+8h] [ebp-24h]
  Outpop::Utility::Ref_Object *v11; // [esp+18h] [ebp-14h] BYREF
  Outpop::Utility::Ref_Object *v12; // [esp+1Ch] [ebp-10h] BYREF
  int v13; // [esp+28h] [ebp-4h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v2 + 4) <= *((_DWORD *)Stream + 2) )
  {
    a1 = *(Event **)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) += 4;
  }
  v3 = sub_1000194C(0);
  if ( v3 )
  {
    v9 = *(_DWORD *)(v3 + 292);
    v4 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v4, v9);
    v6 = Robot;
    if ( Robot )
    {
      if ( a1 == *((Event **)Robot + 226) )
      {
        if ( *((_DWORD *)Robot + 227) == -1 )
        {
          v10 = (unsigned int)a1;
          v7 = GameClient::FuncManager::Instance();
          Function = GameClient::FuncManager::GetFunction(v7, v10);
          if ( Function )
          {
            *((_DWORD *)v6 + 227) = a1;
            (*(void (__thiscall **)(struct GameClient::Function *))(*(_DWORD *)Function + 32))(Function);
          }
        }
        else
        {
          sub_100077ED((int)&v12, 9, 206, COERCE_INT(0.0), 1, 512);
          v13 = 1;
          sub_10001B04((int)&a1);
          j_nullsub_44((int)&v12);
          v13 = -1;
          if ( v12 )
            Outpop::Utility::Ref_Object::release(v12);
        }
      }
      else
      {
        sub_100077ED((int)&v11, 9, 206, COERCE_INT(0.0), 1, 512);
        v13 = 0;
        sub_10001B04((int)&a1);
        j_nullsub_44((int)&v11);
        v13 = -1;
        if ( v11 )
          Outpop::Utility::Ref_Object::release(v11);
      }
    }
  }
}

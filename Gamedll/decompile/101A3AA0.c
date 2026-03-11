/*
 * func-name: ?SetIsDamanged@Establishment@GameClient@@UAEX_N@Z_0
 * func-address: 0x101a3aa0
 * callers: 0x1000ca40
 * callees: 0x1000194c, 0x10002f7c, 0x1000516e, 0x10006947, 0x1000a3a8, 0x1000a506, 0x1000abc8, 0x1000ae2a, 0x1000ed13, 0x10011577, 0x100141e1, 0x102c1be0, 0x102c9d98
 */

void __thiscall GameClient::Establishment::SetIsDamanged(GameClient::Establishment *this, bool a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  GameClient::RobotManager *v6; // eax
  struct GameClient::Robot *Robot; // eax
  struct GameClient::Robot *v8; // edi
  GameClient::FuncManager *v9; // eax
  struct GameClient::Function *Function; // eax
  int v11; // edx
  CDlgMgr *v12; // eax
  int v13; // eax
  struct Game *v14; // eax
  int v15; // eax
  int v16; // ecx
  void (__thiscall **v17)(_DWORD, char *, int); // edi
  int v18; // eax
  unsigned int i; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // eax
  unsigned int j; // edi
  int v27; // ecx
  int v28; // [esp+3Ch] [ebp-2Ch]
  int v29; // [esp+40h] [ebp-28h]
  unsigned int v30; // [esp+40h] [ebp-28h]
  float v31; // [esp+50h] [ebp-18h] BYREF
  float v32; // [esp+54h] [ebp-14h]
  float v33; // [esp+58h] [ebp-10h]
  float v34[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = *((_DWORD *)this + 75);
  *((_BYTE *)this + 372) = a2;
  if ( v3 )
    *(_BYTE *)(v3 + 816) = a2;
  v4 = *((_DWORD *)this + 77);
  if ( v4 )
    *(_BYTE *)(v4 + 816) = *((_BYTE *)this + 372) == 0;
  if ( *((_BYTE *)this + 372) )
  {
    v5 = sub_1000194C(0);
    if ( v5 )
    {
      v29 = *(_DWORD *)(v5 + 292);
      v6 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v6, v29);
      v8 = Robot;
      if ( Robot )
      {
        if ( *((_DWORD *)Robot + 226) != -1 )
        {
          v30 = *((_DWORD *)Robot + 226);
          v9 = GameClient::FuncManager::Instance();
          Function = GameClient::FuncManager::GetFunction(v9, v30);
          if ( Function )
          {
            if ( *((GameClient::Establishment **)Function + 7) == this )
            {
              v11 = *((_DWORD *)v8 + 227);
              *((_DWORD *)v8 + 226) = -1;
              if ( v11 == *((_DWORD *)Function + 8) )
                *((_DWORD *)v8 + 227) = -1;
              v12 = (CDlgMgr *)CDlgMgr::Instance();
              CDlgMgr::ShowDialog(v12);
            }
          }
        }
      }
    }
    v13 = *((_DWORD *)this + 2);
    if ( *(_DWORD *)(v13 + 384) )
    {
      v28 = v13 + 364;
      v14 = Game::Instance();
      v15 = sub_100141E1(*((_DWORD *)v14 + 25), v28, 1);
      if ( sub_1000ABC8(v15) )
      {
        sub_1000AE2A((int)this + 24);
        sub_10002F7C((int)this + 36);
      }
    }
    v16 = *((_DWORD *)this + 99);
    if ( v16 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 40))(v16) )
    {
      v17 = (void (__thiscall **)(_DWORD, char *, int))(**((_DWORD **)this + 99) + 28);
      v18 = (*(int (__thiscall **)(GameClient::Establishment *, float *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 44))(
              this,
              v34,
              *(float *)(*((_DWORD *)this + 2) + 512),
              0,
              0.75);
      (*v17)(*((_DWORD *)this + 99), (char *)this + 24, v18);
    }
  }
  for ( i = 0; ; ++i )
  {
    v20 = *((_DWORD *)this + 65);
    if ( !v20 || i >= (*((_DWORD *)this + 66) - v20) >> 2 )
      break;
    v21 = *((_DWORD *)this + 65);
    v22 = *(_DWORD *)(v21 + 4 * i);
    LOBYTE(v21) = *((_BYTE *)this + 372) == 0;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 24))(v22, v21);
  }
  if ( *((_BYTE *)this + 372) )
    goto LABEL_32;
  if ( !*((_DWORD *)this + 80) && *((_BYTE *)this + 324) )
  {
    v31 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
    sub_102C1BE0((char *)this + 328, &v31);
    v34[0] = *((float *)this + 6) + v31;
    v34[1] = *((float *)this + 7) + v32;
    v34[2] = *((float *)this + 8) + v33;
    v23 = operator new(8u);
    if ( v23 )
    {
      v24 = *((_DWORD *)this + 3);
      *v23 = &GameClient::EnterEstabEffectArea::`vftable';
      v23[1] = v24;
    }
    v25 = NxPhysics::Instance(*((float *)this + 85), *((float *)this + 86), v34, *((_DWORD *)this + 3), 0);
    *((_DWORD *)this + 80) = NxPhysics::CreateTriggerActor(v25);
  }
  if ( *((_BYTE *)this + 372) )
LABEL_32:
    GameClient::Establishment::SwitchEstabState(3);
  else
    GameClient::Establishment::SwitchEstabState(1);
  for ( j = 0; ; ++j )
  {
    v27 = *((_DWORD *)this + 49);
    if ( !v27 || j >= (*((_DWORD *)this + 50) - v27) >> 2 )
      break;
    *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 49) + 4 * j) + 346) = *((_BYTE *)this + 372);
  }
}

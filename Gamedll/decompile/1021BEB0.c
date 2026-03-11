/*
 * func-name: sub_1021BEB0
 * func-address: 0x1021beb0
 * callers: 0x100023a6
 * callees: 0x1000169a, 0x10009674, 0x1000b4e2, 0x1000e56b
 */

void __stdcall sub_1021BEB0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  Event *v4; // ecx
  struct BinStream *v5; // eax
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // edi
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // [esp-4h] [ebp-Ch]
  int v13; // [esp+0h] [ebp-8h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = a1;
  }
  else
  {
    v4 = *(Event **)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  if ( v4 )
  {
    LogPrintf("GameServer connect failed. code: %d", v4);
  }
  else
  {
    v5 = Event::GetStream(a1);
    v6 = *((_DWORD *)v5 + 3);
    v7 = *((_DWORD *)v5 + 2);
    if ( v6 + 4 > v7 )
    {
      v8 = (int)a1;
    }
    else
    {
      v8 = *(_DWORD *)(v6 + *((_DWORD *)v5 + 1));
      *((_DWORD *)v5 + 3) = v6 + 4;
    }
    v9 = *((_DWORD *)v5 + 3);
    v10 = v9 + 4;
    if ( v9 + 4 > v7 )
    {
      v11 = (unsigned int)a1;
    }
    else
    {
      v11 = *(_DWORD *)(v9 + *((_DWORD *)v5 + 1));
      *((_DWORD *)v5 + 3) = v10;
    }
    if ( GameClient::LocalUserManager::GetUserByDirectToken(GameClient::LocalUserManager::s_pInstance, v11) )
    {
      sub_10009674(v8);
      sub_1000E56B(v8, v13);
      sub_1000169A(v12);
      LogPrintf("GameServer connect success.");
    }
  }
}

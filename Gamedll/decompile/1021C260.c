/*
 * func-name: sub_1021C260
 * func-address: 0x1021c260
 * callers: 0x1000e39a
 * callees: 0x100050ba, 0x100077ed, 0x1000dbd9, 0x1000e674, 0x1000ea25, 0x1001055a, 0x10013647, 0x10015eab, 0x10016a4f, 0x10019092, 0x102c9d62, 0x102c9d98
 */

void __stdcall sub_1021C260(Event *a1)
{
  int v1; // esi
  struct BinStream *Stream; // eax
  int v3; // ecx
  char v4; // al
  unsigned int v5; // edi
  struct GameClient::LocalUser *UserByIndex; // eax
  int v7; // esi
  int v8; // [esp+10h] [ebp-70h]
  int v9; // [esp+10h] [ebp-70h]
  int v10; // [esp+14h] [ebp-6Ch]
  int v11; // [esp+14h] [ebp-6Ch]
  Outpop::Utility::Ref_Object *v12; // [esp+20h] [ebp-60h] BYREF
  _BYTE v13[4]; // [esp+24h] [ebp-5Ch] BYREF
  int v14; // [esp+28h] [ebp-58h]
  _BYTE v15[68]; // [esp+2Ch] [ebp-54h] BYREF
  int v16; // [esp+7Ch] [ebp-4h]

  ++dword_103B67C0;
  if ( dword_103B67C0 == GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance) )
  {
    v1 = 0;
    if ( !*(_DWORD *)(dword_103B665C + 4) )
    {
      v12 = (Outpop::Utility::Ref_Object *)operator new(0x30u);
      v16 = 0;
      if ( v12 )
        v1 = sub_10019092();
      sub_1000DBD9(v8, v10);
      v16 = 1;
      Stream = Event::GetStream(a1);
      v3 = *((_DWORD *)Stream + 3);
      if ( (unsigned int)(v3 + 4) <= *((_DWORD *)Stream + 2) )
      {
        v14 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
        *((_DWORD *)Stream + 3) += 4;
      }
      sub_100050BA((int)v15);
      v4 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v1 + 4))(v1, v13);
      v16 = -1;
      if ( !v4 )
      {
        sub_1000E674(v9, v11);
        return;
      }
      *(_DWORD *)(dword_103B665C + 4) = v1;
      sub_1000E674(v9, v11);
    }
    v5 = 0;
    if ( GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance) )
    {
      while ( 1 )
      {
        UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, v5);
        v7 = sub_10016A4F(*((_DWORD *)UserByIndex + 19));
        if ( !v7 )
          break;
        sub_100077ED((int)&v12, 9, 234, COERCE_INT(0.0), 1, 256);
        v16 = 2;
        sub_10015EAB(v7 + 4);
        j_nullsub_44((int)&v12);
        v16 = -1;
        if ( v12 )
          Outpop::Utility::Ref_Object::release(v12);
        if ( ++v5 >= GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance) )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      dword_103B67C0 = 0;
      LogPrintf("Battle initialize success.");
    }
  }
}

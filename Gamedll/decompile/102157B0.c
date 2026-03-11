/*
 * func-name: sub_102157B0
 * func-address: 0x102157b0
 * callers: none
 * callees: 0x1000169a, 0x10001b04, 0x100077ed, 0x10009674, 0x1000e56b, 0x1001055a, 0x10013647, 0x10016a4f
 */

void __stdcall sub_102157B0(Event *a1)
{
  Event *v1; // esi
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  Event *v5; // ecx
  struct GameClient::LocalUser *UserByIndex; // edi
  struct BinStream *v7; // eax
  int v8; // ecx
  unsigned int v9; // esi
  int v10; // ebx
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // [esp+8h] [ebp-28h]
  int v14; // [esp+Ch] [ebp-24h]
  int v15; // [esp+1Ch] [ebp-14h] BYREF
  int v16; // [esp+20h] [ebp-10h] BYREF
  int v17; // [esp+2Ch] [ebp-4h]

  v1 = a1;
  Stream = Event::GetStream(a1);
  v3 = *((_DWORD *)Stream + 3);
  v4 = v3 + 4;
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = a1;
  }
  else
  {
    v5 = *(Event **)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4;
  }
  if ( !v5 )
  {
    UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
    if ( UserByIndex )
    {
      v7 = Event::GetStream(v1);
      v8 = *((_DWORD *)v7 + 3);
      v9 = *((_DWORD *)v7 + 2);
      if ( v8 + 4 > v9 )
      {
        v10 = (int)a1;
      }
      else
      {
        v10 = *(_DWORD *)(v8 + *((_DWORD *)v7 + 1));
        *((_DWORD *)v7 + 3) = v8 + 4;
      }
      v11 = *((_DWORD *)v7 + 3) + 4;
      if ( v11 <= v9 )
        *((_DWORD *)v7 + 3) = v11;
      sub_10009674(v10);
      sub_1000E56B(v10, v14);
      sub_1000169A(v13);
      if ( sub_10016A4F(*((_DWORD *)UserByIndex + 19)) )
      {
        sub_100077ED((int)&a1, 9, 233, COERCE_INT(0.0), 1, 256);
        v12 = *((_DWORD *)UserByIndex + 19);
        v15 = *((_DWORD *)UserByIndex + 20);
        v17 = 0;
        v16 = v12;
        sub_10001B04((int)&v16);
        sub_10001B04((int)&v15);
        j_nullsub_44((int)&a1);
        v17 = -1;
        if ( a1 )
          Outpop::Utility::Ref_Object::release(a1);
      }
    }
  }
}

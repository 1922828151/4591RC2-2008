/*
 * func-name: ?OnAnimation@EquipAsyncLoaderReport@GameClient@@UAEXHPAVAnimationSet@@@Z_0
 * func-address: 0x100ff2c0
 * callers: 0x1000c153
 * callees: 0x1000c757, 0x1001940c, 0x102c71e0, 0x102c7580, 0x102c9d62
 */

void __thiscall GameClient::EquipAsyncLoaderReport::OnAnimation(
        GameClient::EquipAsyncLoaderReport *this,
        int a2,
        struct AnimationSet *a3)
{
  int v3; // ebx
  unsigned int v5; // edi
  void *Key; // eax
  int v7; // eax
  GameClient::AdapterActor *v8; // esi
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  int v12; // eax
  char v13; // [esp+17h] [ebp-75h]
  int i; // [esp+18h] [ebp-74h]
  int v15; // [esp+1Ch] [ebp-70h]
  int v16; // [esp+24h] [ebp-68h]
  _BYTE v17[28]; // [esp+28h] [ebp-64h] BYREF
  _BYTE v18[28]; // [esp+44h] [ebp-48h] BYREF
  _BYTE v19[28]; // [esp+60h] [ebp-2Ch] BYREF
  int v20; // [esp+88h] [ebp-4h]

  v3 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 1) && a3 )
  {
    Key = (void *)AnimationSet::GetKey(a3);
    std::string::string(v19, Key);
    v20 = 0;
    v7 = sub_1000C757((int)v19);
    (*(void (__thiscall **)(int, struct AnimationSet *))(*(_DWORD *)v7 + 4))(v7, a3);
    v16 = (*(int (__thiscall **)(_DWORD, struct AnimationSet *))(**((_DWORD **)this + 1) + 116))(
            *((_DWORD *)this + 1),
            a3);
    *(_DWORD *)(sub_1000C757((int)v19) + 44) = v16;
    v15 = 0;
    for ( i = 2180; ; i += 4 )
    {
      v8 = (GameClient::AdapterActor *)*((_DWORD *)this + 1);
      v9 = *((_DWORD *)v8 + 556);
      if ( !v9 || v5 >= (*((_DWORD *)v8 + 557) - v9) / 28 )
        break;
      if ( *(_DWORD *)((char *)v8 + i) != -1 )
        goto LABEL_11;
      v10 = *((_DWORD *)v8 + 556);
      if ( !v10 || v5 >= (*((_DWORD *)v8 + 557) - v10) / 28 )
        _invalid_parameter_noinfo();
      v11 = (void *)sub_102C71E0(v17, v15 + *((_DWORD *)v8 + 556));
      LOBYTE(v20) = 1;
      v12 = sub_102C7580(v18, v11);
      v3 |= 3u;
      v20 = 2;
      v13 = 1;
      if ( !(unsigned __int8)std::operator==<char>(v12, v19) )
LABEL_11:
        v13 = 0;
      v20 = 1;
      if ( (v3 & 2) != 0 )
      {
        v3 &= ~2u;
        std::string::~string(v18);
      }
      v20 = 0;
      if ( (v3 & 1) != 0 )
      {
        v3 &= ~1u;
        std::string::~string(v17);
      }
      if ( v13 )
        *(_DWORD *)(i + *((_DWORD *)this + 1)) = v16;
      ++v5;
      v15 += 28;
    }
    GameClient::AdapterActor::RemoveAsyncHandle(v8, a2);
    v20 = -1;
    std::string::~string(v19);
  }
}

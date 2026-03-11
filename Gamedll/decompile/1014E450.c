/*
 * func-name: ?OnDestroy@DamageEquip@GameClient@@UAEXXZ_0
 * func-address: 0x1014e450
 * callers: 0x10013f75
 * callees: 0x1000abc8, 0x10010519, 0x10010bae, 0x100141e1, 0x10018fc0, 0x1001960f, 0x102c71e0
 */

void __thiscall GameClient::DamageEquip::OnDestroy(GameClient::DamageEquip *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // [esp-4h] [ebp-64h]
  _BYTE v11[28]; // [esp+1Ch] [ebp-44h] BYREF
  _BYTE v12[28]; // [esp+38h] [ebp-28h] BYREF
  int v13; // [esp+5Ch] [ebp-4h]

  v2 = *((_DWORD *)this + 197);
  if ( !v2 || !((*((_DWORD *)this + 198) - v2) / 20) )
    _invalid_parameter_noinfo();
  v3 = *((_DWORD *)this + 197);
  if ( *(float *)(v3 + 8) <= 0.0 )
  {
    v4 = *((_DWORD *)this + 2);
    if ( *(_DWORD *)(v4 + 2288) )
    {
      if ( v3 )
      {
        if ( (*((_DWORD *)this + 198) - v3) / 20 )
        {
          v5 = sub_102C71E0(v12, v4 + 2268);
          v13 = 0;
          v6 = std::operator+<char>(v11, v5, ".reb");
          v10 = *(_DWORD *)(*((_DWORD *)this + 45) + 712);
          LOBYTE(v13) = 1;
          v7 = sub_100141E1(v10, v6, 1);
          LOBYTE(v13) = 0;
          std::string::~string(v11);
          v13 = -1;
          std::string::~string(v12);
          if ( sub_1000ABC8(v7) )
            sub_10010519((int)this + 36, (int)this + 24);
        }
      }
    }
    if ( *(_DWORD *)(v4 + 2352) && !*((_DWORD *)this + 220) )
    {
      *((_BYTE *)this + 888) = *(_BYTE *)(v4 + 2360);
      *((float *)this + 221) = *(float *)(v4 + 2356);
      std::string::operator=((char *)this + 824, v4 + 2296);
      v8 = AudioDevice::Instance();
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
      *((_DWORD *)this + 220) = v9;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v4 + 2352) + 12))(*(_DWORD *)(v4 + 2352), v9);
    }
    SoundMgr::Instance();
    SoundMgr::PlaySoundA((int)this + 824, (int)this + 24, (int)this + 808, 0, COERCE_INT(0.75));
  }
  GameClient::Item::OnDestroy(this);
}

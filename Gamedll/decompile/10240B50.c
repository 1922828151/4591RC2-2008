/*
 * func-name: ?OnReadVarComplete@FSuspendVehicle@GameClient@@UAEXXZ_0
 * func-address: 0x10240b50
 * callers: 0x1000b70d
 * callees: 0x100060cd, 0x1000a795, 0x1000aff6, 0x1001789b, 0x102c9ea8
 */

void __thiscall GameClient::FSuspendVehicle::OnReadVarComplete(GameClient::FSuspendVehicle *this)
{
  unsigned int v2; // edi
  int i; // ebx
  int v4; // eax
  int v5; // eax
  void *v6; // eax
  int Flyweight; // eax
  char v8; // [esp-1Ch] [ebp-3Ch] BYREF
  int v9; // [esp-18h] [ebp-38h]
  int v10; // [esp-14h] [ebp-34h]
  int v11; // [esp-10h] [ebp-30h]
  int v12; // [esp-Ch] [ebp-2Ch]
  int v13; // [esp-8h] [ebp-28h]
  int v14; // [esp-4h] [ebp-24h]
  int v15; // [esp+10h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  GameClient::FControlledEstab::OnReadVarComplete(this);
  v2 = 0;
  for ( i = 0; ; i += 28 )
  {
    v4 = *((_DWORD *)this + 286);
    if ( !v4 || v2 >= (*((_DWORD *)this + 287) - v4) / 28 )
      break;
    v5 = *((_DWORD *)this + 286);
    if ( !v5 || v2 >= (*((_DWORD *)this + 287) - v5) / 28 )
      _invalid_parameter_noinfo();
    v6 = (void *)(i + *((_DWORD *)this + 286));
    v15 = (int)&v8;
    std::string::string(&v8, v6);
    v16 = 0;
    GameClient::FlyweightManager::Instance();
    v16 = -1;
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v8, v9, v10, v11, v12, v13, v14);
    if ( Flyweight )
    {
      v14 = 0;
      v15 = _RTDynamicCast(
              Flyweight,
              0,
              &GameClient::Flyweight `RTTI Type Descriptor',
              &GameClient::FSuspendVehicleWheel `RTTI Type Descriptor');
      if ( v15 )
        sub_100060CD((char *)this + 1156, (int)&v15);
    }
    ++v2;
  }
}

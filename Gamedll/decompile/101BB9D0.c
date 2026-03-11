/*
 * func-name: ?OnCreate@WheelVehicle@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101bb9d0
 * callers: 0x10013476
 * callees: 0x10001794, 0x10004ea8, 0x100145c9
 */

bool __thiscall GameClient::WheelVehicle::OnCreate(GameClient::WheelVehicle *this, struct GameClient::Flyweight *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // esi
  int v6; // [esp-78h] [ebp-80h]
  int v7; // [esp-78h] [ebp-80h]
  int v8; // [esp-74h] [ebp-7Ch]
  int v9; // [esp-74h] [ebp-7Ch]
  int v10; // [esp-70h] [ebp-78h]
  int v11; // [esp-6Ch] [ebp-74h]
  int v12; // [esp-68h] [ebp-70h]
  int v13; // [esp-64h] [ebp-6Ch]
  int v14; // [esp-60h] [ebp-68h]
  int v15; // [esp-5Ch] [ebp-64h]
  int v16; // [esp-58h] [ebp-60h]
  int v17; // [esp-54h] [ebp-5Ch]
  int v18; // [esp-50h] [ebp-58h]
  int v19; // [esp-4Ch] [ebp-54h]
  int v20; // [esp-48h] [ebp-50h]
  int v21; // [esp-44h] [ebp-4Ch]
  int v22; // [esp-40h] [ebp-48h]
  int v23; // [esp-3Ch] [ebp-44h]
  int v24; // [esp-38h] [ebp-40h]
  int v25; // [esp-34h] [ebp-3Ch]
  int v26; // [esp-30h] [ebp-38h]
  int v27; // [esp-2Ch] [ebp-34h]
  int v28; // [esp-28h] [ebp-30h]
  int v29; // [esp-24h] [ebp-2Ch]
  int v30; // [esp-20h] [ebp-28h]
  int v31; // [esp-1Ch] [ebp-24h]
  int v32; // [esp-18h] [ebp-20h]
  int v33; // [esp-14h] [ebp-1Ch]
  int v34; // [esp-10h] [ebp-18h]
  int v35; // [esp-Ch] [ebp-14h]
  int v36; // [esp-8h] [ebp-10h]
  int v37; // [esp-4h] [ebp-Ch]

  result = GameClient::ControlledEstab::OnCreate(this, a2);
  if ( result )
  {
    *((_DWORD *)this + 135) = a2;
    v4 = *((_DWORD *)a2 + 306);
    if ( v4 )
      v5 = (*((_DWORD *)a2 + 307) - v4) / 28;
    else
      v5 = 0;
    sub_100145C9(v6, v8);
    sub_10001794(
      v5,
      v7,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    return 1;
  }
  return result;
}

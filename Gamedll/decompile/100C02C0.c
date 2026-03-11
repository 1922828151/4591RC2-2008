/*
 * func-name: sub_100C02C0
 * func-address: 0x100c02c0
 * callers: 0x1000760d
 * callees: 0x10005d5d, 0x1001a875, 0x102c9d98
 */

void __thiscall sub_100C02C0(Effect_Base *this)
{
  void *v2; // eax
  void *v3; // edx
  double v4; // st7
  int v5; // eax
  int v6; // [esp-4h] [ebp-38h] BYREF
  int v7; // [esp+0h] [ebp-34h]
  int v8; // [esp+4h] [ebp-30h]
  int v9; // [esp+8h] [ebp-2Ch]
  int v10; // [esp+Ch] [ebp-28h]
  int v11; // [esp+10h] [ebp-24h]
  int v12; // [esp+14h] [ebp-20h]
  int *v13; // [esp+24h] [ebp-10h]
  int v14; // [esp+30h] [ebp-4h]

  v2 = (void *)(*((_DWORD *)this + 284) + 100);
  v13 = &v6;
  std::string::string(&v6, v2);
  Precacher::UpdateTexture(*((_DWORD *)this + 284));
  v3 = (void *)(*((_DWORD *)this + 285) + 100);
  v13 = &v6;
  std::string::string(&v6, v3);
  Precacher::UpdateTexture(*((_DWORD *)this + 285));
  if ( !*((_DWORD *)this + 263) )
  {
    v13 = (int *)operator new(0x164u);
    v14 = 0;
    if ( v13 )
    {
      v4 = *((float *)this + 286);
      v12 = *((_DWORD *)this + 273);
      v8 = *((_DWORD *)this + 274);
      v9 = *((_DWORD *)this + 275);
      v10 = *((_DWORD *)this + 276);
      v11 = *((_DWORD *)this + 277);
      *(float *)&v7 = v4;
      v5 = WaterDecal::WaterDecal(
             *((_DWORD *)this + 178),
             *((_DWORD *)this + 284),
             *((_DWORD *)this + 285),
             (int)this + 856,
             v7,
             v8,
             v9,
             v10,
             v11,
             v12);
    }
    else
    {
      v5 = 0;
    }
    v14 = -1;
    *((_DWORD *)this + 263) = v5;
  }
  Effect_Base::DeserializationComplete(this);
}

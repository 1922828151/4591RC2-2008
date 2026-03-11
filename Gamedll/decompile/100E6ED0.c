/*
 * func-name: ?OnUse@SampleWeapon@@QAEXXZ_0
 * func-address: 0x100e6ed0
 * callers: 0x10006a32
 * callees: 0x100025ea, 0x1000846d, 0x102c0ed0, 0x102c9d98
 */

void __thiscall SampleWeapon::OnUse(SampleWeapon *this)
{
  SampleBullet *v2; // eax
  SampleBullet *v3; // ebx
  float *v4; // eax
  double v5; // st7
  int v6; // ecx
  float v7; // [esp+18h] [ebp-28h]
  float v8; // [esp+1Ch] [ebp-24h]
  float v9; // [esp+20h] [ebp-20h]
  float v10; // [esp+24h] [ebp-1Ch]
  _DWORD v11[3]; // [esp+28h] [ebp-18h] BYREF
  int v12; // [esp+3Ch] [ebp-4h]

  if ( *((float *)this + 269) < 0.2000000029802322 )
  {
    *((float *)this + 269) = GDeltaTime + *((float *)this + 269);
  }
  else
  {
    v2 = (SampleBullet *)operator new(0x424u);
    v12 = 0;
    if ( v2 )
      v3 = SampleBullet::SampleBullet(v2, *((struct World **)this + 178));
    else
      v3 = 0;
    v12 = -1;
    if ( v3 )
    {
      *((_DWORD *)v3 + 214) = *((_DWORD *)this + 265);
      *((_DWORD *)v3 + 215) = *((_DWORD *)this + 266);
      *((_DWORD *)v3 + 216) = *((_DWORD *)this + 267);
      qmemcpy((char *)v3 + 868, (char *)this + 868, 0x40u);
      v4 = (float *)sub_102C0ED0(v11);
      v7 = (float)*((int *)this + 268);
      v8 = v7 * *v4;
      v9 = v4[1] * v7;
      v5 = v7 * v4[2];
      *((float *)v3 + 211) = v8;
      *((float *)v3 + 212) = v9;
      v10 = v5;
      *((float *)v3 + 213) = v10;
      *((float *)v3 + 205) = 1.0;
      v6 = *((_DWORD *)this + 274);
      if ( v6 )
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 32))(*((_DWORD *)this + 273), 0, 1.0);
      *((float *)this + 269) = 0.0;
      SampleWeapon::PlayShootAnimaiton(this);
    }
  }
}

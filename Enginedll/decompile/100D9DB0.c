/*
 * func-name: ?IsInsideThisVolume@IndoorVolume@@QAE_NAAVVector@@@Z
 * func-address: 0x100d9db0
 * callers: 0x100d9f80, 0x100da030
 * callees: 0x10001370, 0x10061060, 0x1017a0b0, 0x101a2516
 */

bool __thiscall IndoorVolume::IsInsideThisVolume(IndoorVolume *this, struct Vector *a2)
{
  bool result; // al
  bool v5; // bl
  float v6; // [esp+4h] [ebp-40h] BYREF
  float v7; // [esp+8h] [ebp-3Ch]
  float v8; // [esp+Ch] [ebp-38h]
  float v9[3]; // [esp+10h] [ebp-34h] BYREF
  float v10[10]; // [esp+1Ch] [ebp-28h] BYREF
  float v11; // [esp+48h] [ebp+4h]
  float v12; // [esp+48h] [ebp+4h]
  float v13; // [esp+48h] [ebp+4h]
  float v14; // [esp+48h] [ebp+4h]
  float v15; // [esp+48h] [ebp+4h]
  float v16; // [esp+48h] [ebp+4h]

  if ( *((_DWORD *)this + 275) == 1 )
  {
    v6 = *((float *)this + 277) + *((float *)this + 214);
    v7 = *((float *)this + 278) + *((float *)this + 215);
    v8 = *((float *)this + 279) + *((float *)this + 216);
    v9[0] = *((float *)this + 214) - *((float *)this + 277);
    v9[1] = *((float *)this + 215) - *((float *)this + 278);
    v9[2] = *((float *)this + 216) - *((float *)this + 279);
    sub_10001370(v10, v9, &v6);
    v5 = sub_10061060(v10, (float *)a2);
    sub_1017A0B0(v10);
    return v5;
  }
  else if ( *((_DWORD *)this + 275) == 2 )
  {
    v6 = *((float *)this + 214) - *(float *)a2;
    v7 = *((float *)this + 215) - *((float *)a2 + 1);
    v8 = *((float *)this + 216) - *((float *)a2 + 2);
    v15 = v7 * v7 + v6 * v6 + v8 * v8;
    v16 = sqrt(v15);
    return *((float *)this + 276) > (double)v16;
  }
  else
  {
    result = 0;
    if ( *((_DWORD *)this + 275) == 3 )
    {
      v11 = *((float *)this + 215) - *((float *)a2 + 1);
      v12 = fabs(v11);
      if ( *((float *)this + 281) >= (double)v12 )
      {
        v6 = *((float *)this + 214) - *(float *)a2;
        v7 = *((float *)this + 216) - *((float *)a2 + 2);
        v13 = v7 * v7 + v6 * v6;
        v14 = sqrt(v13);
        if ( *((float *)this + 280) >= (double)v14 )
          return 1;
      }
    }
  }
  return result;
}

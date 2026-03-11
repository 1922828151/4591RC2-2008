/*
 * func-name: ?Tick@Effect_Laser@@UAEXXZ_0
 * func-address: 0x10080c50
 * callers: 0x10002590
 * callees: 0x100031b1, 0x10005646, 0x10007b8f, 0x102c1be0, 0x102c23d0, 0x102c9dbc
 */

void __thiscall Effect_Laser::Tick(Effect_Laser *this)
{
  int v2; // edi
  bool v3; // zf
  float v4; // edx
  float v5; // eax
  float v6; // ecx
  unsigned int v7; // eax
  double v8; // st7
  int v9; // ebp
  float v10; // [esp+8h] [ebp-70h]
  float v11; // [esp+8h] [ebp-70h]
  float v12; // [esp+8h] [ebp-70h]
  float v13; // [esp+8h] [ebp-70h]
  float v14; // [esp+Ch] [ebp-6Ch] BYREF
  float v15; // [esp+10h] [ebp-68h]
  float v16; // [esp+14h] [ebp-64h]
  float v17; // [esp+18h] [ebp-60h] BYREF
  float v18; // [esp+1Ch] [ebp-5Ch]
  float v19; // [esp+20h] [ebp-58h]
  float v20; // [esp+24h] [ebp-54h]
  float v21; // [esp+28h] [ebp-50h] BYREF
  float v22; // [esp+2Ch] [ebp-4Ch]
  float v23; // [esp+30h] [ebp-48h]
  float v24; // [esp+34h] [ebp-44h]
  _BYTE v25[64]; // [esp+38h] [ebp-40h] BYREF

  v2 = *((_DWORD *)this + 263);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 1064) )
    {
      sub_102C23D0(v25);
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      sub_102C1BE0((char *)this + 1080, &v14);
      v17 = *((float *)this + 214) + v14;
      v18 = *((float *)this + 215) + v15;
      v19 = *((float *)this + 216) + v16;
      v21 = *((float *)this + 214) + *((float *)this + 267);
      v22 = *((float *)this + 268) + *((float *)this + 215);
      v23 = *((float *)this + 269) + *((float *)this + 216);
      Laser::SetEndPoints((Laser *)v2, (struct Vector *)&v21, (struct Vector *)&v17);
      v3 = *((_DWORD *)this + 273) == 2;
      v4 = *((float *)this + 275);
      v5 = *((float *)this + 276);
      v21 = *((float *)this + 274);
      v6 = *((float *)this + 277);
      v22 = v4;
      v23 = v5;
      v24 = v6;
      if ( v3 )
      {
        v10 = *((float *)this + 278);
        v17 = v21 * v10;
        v21 = v17;
        v18 = v22 * v10;
        v22 = v18;
        v19 = v23 * v10;
        v23 = v19;
        v20 = v10 * v24;
        v24 = v20;
      }
      else
      {
        v24 = *((float *)this + 278) * v24;
      }
      v7 = sub_10005646();
      Laser::SetColor((Laser *)v2, v7);
      v11 = *((float *)this + 284);
      if ( *((float *)this + 282) > 0.0 )
      {
        v8 = *((float *)this + 282) - *((float *)this + 281);
        if ( *((float *)this + 287) > v8 )
          v11 = v8 / *((float *)this + 287) * v11;
      }
      v9 = *(_DWORD *)(v2 + 252);
      *(float *)(v2 + 248) = v11;
      if ( v9 )
      {
        v14 = *((float *)this + 270) - *((float *)this + 267);
        v15 = *((float *)this + 271) - *((float *)this + 268);
        v16 = *((float *)this + 272) - *((float *)this + 269);
        v12 = v15 * v15 + v14 * v14 + v16 * v16;
        v13 = sqrt(v12);
        *(float *)(v9 + 72) = v13 * *((float *)this + 288) + 1.0;
        *(float *)(*(_DWORD *)(v2 + 252) + 64) = *(float *)(*(_DWORD *)(v2 + 252) + 72)
                                               * *((float *)this + 286)
                                               * GDeltaTime
                                               + *(float *)(*(_DWORD *)(v2 + 252) + 64);
      }
    }
    Effect_Base::Tick(this);
  }
  else
  {
    Effect_Base::Tick(this);
  }
}

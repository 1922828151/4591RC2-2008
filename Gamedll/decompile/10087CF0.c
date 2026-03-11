/*
 * func-name: ?RefreshBeam@Effect_LightBeam@@UAEXXZ_0
 * func-address: 0x10087cf0
 * callers: 0x10006ed3
 * callees: 0x1000d6cf, 0x10010e33, 0x102c0ed0
 */

void __thiscall Effect_LightBeam::RefreshBeam(Effect_LightBeam *this)
{
  int v2; // edi
  bool v3; // zf
  int v4; // ecx
  float v5; // edx
  float v6; // eax
  double v7; // st5
  struct Vector *v8; // eax
  float v9; // [esp+8h] [ebp-24h]
  __int64 v10; // [esp+Ch] [ebp-20h] BYREF
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  __int64 v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+24h] [ebp-8h]
  float v15; // [esp+28h] [ebp-4h]

  v2 = *((_DWORD *)this + 263);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 273) == 2;
    v4 = *((_DWORD *)this + 275);
    v5 = *((float *)this + 276);
    LODWORD(v10) = *((_DWORD *)this + 274);
    v6 = *((float *)this + 277);
    HIDWORD(v10) = v4;
    v11 = v5;
    v12 = v6;
    if ( v3 )
    {
      v7 = *((float *)this + 278);
      *(float *)&v13 = *(float *)&v10 * v7;
      *((float *)&v13 + 1) = *((float *)&v10 + 1) * v7;
      v10 = v13;
      v14 = v11 * v7;
      v11 = v14;
      v15 = v7 * v12;
      v12 = v15;
    }
    else
    {
      v12 = *((float *)this + 278) * v12;
    }
    v9 = *((float *)this + 265);
    *(_DWORD *)(v2 + 244) = *((_DWORD *)this + 284);
    *(float *)&v13 = *(float *)&v10 * v9;
    *((float *)&v13 + 1) = *((float *)&v10 + 1) * v9;
    v14 = v11 * v9;
    v15 = v9 * v12;
    v10 = (__int64)(255.0 * v14);
    *(_DWORD *)(v2 + 248) = v10
                          | (((unsigned int)(__int64)(*((float *)&v13 + 1) * 255.0)
                            | (((unsigned int)(__int64)(*(float *)&v13 * 255.0)
                              | ((unsigned int)(__int64)(v15 * 255.0) << 8)) << 8)) << 8);
    *(float *)(v2 + 256) = *((float *)this + 285);
    *(float *)(v2 + 264) = *((float *)this + 287);
    *(float *)(v2 + 268) = *((float *)this + 288);
    *(float *)(v2 + 260) = *((float *)this + 289);
    *(float *)(v2 + 252) = *((float *)this + 286);
    *(float *)(v2 + 288) = *((float *)this + 290);
    *(float *)(v2 + 292) = *((float *)this + 291);
    *(float *)(v2 + 296) = *((float *)this + 292);
    LightBeam::UpdateBeamsInfos((LightBeam *)v2);
    v8 = (struct Vector *)sub_102C0ED0(&v10);
    LightBeam::setPosDir((LightBeam *)v2, (Effect_LightBeam *)((char *)this + 856), v8);
  }
}

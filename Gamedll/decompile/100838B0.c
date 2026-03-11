/*
 * func-name: ?DeserializationComplete@Effect_LaserParticle@@UAEXXZ_0
 * func-address: 0x100838b0
 * callers: 0x10017dcd
 * callees: 0x10005646, 0x1000d5cb, 0x1001a875, 0x102c0ed0, 0x102c9d98
 */

void __thiscall Effect_LaserParticle::DeserializationComplete(Effect_LaserParticle *this)
{
  void *v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // [esp+0h] [ebp-94h]
  int v11; // [esp+4h] [ebp-90h]
  int v12; // [esp+8h] [ebp-8Ch]
  int v13; // [esp+18h] [ebp-7Ch]
  int v14; // [esp+20h] [ebp-74h]
  int v15; // [esp+24h] [ebp-70h]
  int v16; // [esp+28h] [ebp-6Ch]
  int v17; // [esp+2Ch] [ebp-68h]
  int v18; // [esp+30h] [ebp-64h]
  int v19; // [esp+34h] [ebp-60h] BYREF
  int v20; // [esp+38h] [ebp-5Ch]
  int v21; // [esp+3Ch] [ebp-58h]
  int v22; // [esp+40h] [ebp-54h]
  int v23; // [esp+44h] [ebp-50h]
  int v24; // [esp+48h] [ebp-4Ch]
  int v25; // [esp+4Ch] [ebp-48h]
  float v26; // [esp+60h] [ebp-34h]
  float v27; // [esp+64h] [ebp-30h]
  float v28; // [esp+68h] [ebp-2Ch]
  void *v29; // [esp+6Ch] [ebp-28h]
  float v30[3]; // [esp+70h] [ebp-24h] BYREF
  _BYTE v31[12]; // [esp+7Ch] [ebp-18h] BYREF
  int v32; // [esp+90h] [ebp-4h]

  v2 = (void *)(*((_DWORD *)this + 311) + 100);
  v28 = COERCE_FLOAT(&v19);
  std::string::string(&v19, v2);
  Precacher::UpdateTexture(*((_DWORD *)this + 311));
  if ( !*((_DWORD *)this + 263) )
  {
    v29 = operator new(0x1A4u);
    v32 = 0;
    if ( v29 )
    {
      v3 = *((_DWORD *)this + 273);
      v4 = *((_DWORD *)this + 311);
      v26 = *((float *)this + 294);
      v5 = *((unsigned __int8 *)this + 1248);
      v27 = *((float *)this + 295);
      v25 = v3;
      v6 = *((float *)this + 296);
      v24 = v4;
      v28 = v6;
      v23 = v5;
      v7 = *((_DWORD *)this + 284);
      v30[0] = v26;
      v22 = 0;
      v30[1] = v27;
      v30[2] = v28;
      v21 = *((int *)this + 293);
      v20 = *((int *)this + 292);
      v19 = *((int *)this + 291);
      v18 = *((int *)this + 290);
      v17 = *((int *)this + 289);
      v16 = *((int *)this + 288);
      v15 = *((int *)this + 286);
      v14 = *((int *)this + 287);
      v13 = sub_102C0ED0(v31);
      v12 = *((int *)this + 285);
      v11 = *((_DWORD *)this + 178);
      v10 = *((int *)this + 306);
      v8 = sub_10005646();
      v9 = LaserParticleSystem::LaserParticleSystem(
             v8,
             v10,
             v11,
             v12,
             v7,
             v7,
             (int)this + 856,
             v13,
             (int)v30,
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
             v25);
    }
    else
    {
      v9 = 0;
    }
    v32 = -1;
    *((_DWORD *)this + 263) = v9;
    *((_BYTE *)this + 724) = 0;
  }
  Effect_Base::DeserializationComplete(this);
}

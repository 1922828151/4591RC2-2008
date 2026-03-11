/*
 * func-name: ?DeserializationComplete@Effect_ParticleSystem@@UAEXXZ_0
 * func-address: 0x100919f0
 * callers: 0x10008080
 * callees: 0x10005646, 0x100074aa, 0x1001a875, 0x102c0ed0, 0x102c0f30, 0x102c9d98
 */

void __thiscall Effect_ParticleSystem::DeserializationComplete(Effect_ParticleSystem *this)
{
  void *v2; // eax
  int v3; // edx
  int v4; // eax
  double v5; // st7
  double v6; // st7
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+0h] [ebp-A4h]
  int v11; // [esp+4h] [ebp-A0h]
  int v12; // [esp+8h] [ebp-9Ch]
  int v13; // [esp+10h] [ebp-94h]
  int v14; // [esp+14h] [ebp-90h]
  int v15; // [esp+18h] [ebp-8Ch]
  int v16; // [esp+20h] [ebp-84h]
  int v17; // [esp+24h] [ebp-80h]
  int v18; // [esp+28h] [ebp-7Ch]
  int v19; // [esp+2Ch] [ebp-78h]
  int v20; // [esp+30h] [ebp-74h]
  int v21; // [esp+34h] [ebp-70h]
  int v22; // [esp+38h] [ebp-6Ch] BYREF
  int v23; // [esp+3Ch] [ebp-68h]
  int v24; // [esp+40h] [ebp-64h]
  int v25; // [esp+44h] [ebp-60h]
  int v26; // [esp+48h] [ebp-5Ch]
  int v27; // [esp+4Ch] [ebp-58h]
  int v28; // [esp+50h] [ebp-54h]
  float v29; // [esp+64h] [ebp-40h]
  float v30; // [esp+68h] [ebp-3Ch]
  float v31; // [esp+6Ch] [ebp-38h]
  void *v32; // [esp+70h] [ebp-34h]
  float v33[3]; // [esp+74h] [ebp-30h] BYREF
  _BYTE v34[12]; // [esp+80h] [ebp-24h] BYREF
  _BYTE v35[12]; // [esp+8Ch] [ebp-18h] BYREF
  int v36; // [esp+A0h] [ebp-4h]

  v2 = (void *)(*((_DWORD *)this + 319) + 100);
  v31 = COERCE_FLOAT(&v22);
  std::string::string(&v22, v2);
  Precacher::UpdateTexture(*((_DWORD *)this + 319));
  if ( !*((_DWORD *)this + 263) )
  {
    v32 = operator new(0x164u);
    v36 = 0;
    if ( v32 )
    {
      v3 = *((_DWORD *)this + 273);
      v29 = *((float *)this + 298);
      v4 = *((_DWORD *)this + 319);
      v5 = *((float *)this + 299);
      v28 = v3;
      v30 = v5;
      v27 = v4;
      v6 = *((float *)this + 300);
      v26 = 0;
      v31 = v6;
      v7 = *((unsigned __int8 *)this + 1232);
      v33[0] = v29;
      v33[1] = v30;
      v33[2] = v31;
      v25 = *((int *)this + 297);
      v24 = *((int *)this + 296);
      v23 = *((int *)this + 294);
      v22 = *((int *)this + 293);
      v21 = *((int *)this + 292);
      v20 = *((int *)this + 291);
      v19 = *((int *)this + 289);
      v18 = *((int *)this + 288);
      v17 = *((int *)this + 287);
      v16 = *((int *)this + 290);
      v15 = v7;
      v14 = sub_102C0F30(v34);
      v13 = sub_102C0ED0(v35);
      v12 = *((_DWORD *)this + 284);
      v11 = *((_DWORD *)this + 309);
      v10 = *((int *)this + 285);
      v8 = sub_10005646();
      v9 = ParticleSystem::ParticleSystem(
             *((_DWORD *)this + 178),
             v8,
             v10,
             v11,
             v12,
             (int)this + 856,
             v13,
             v14,
             v15,
             (int)v33,
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
             v28);
    }
    else
    {
      v9 = 0;
    }
    v36 = -1;
    *((_DWORD *)this + 263) = v9;
    *((_BYTE *)this + 724) = 0;
  }
  Effect_Base::DeserializationComplete(this);
}

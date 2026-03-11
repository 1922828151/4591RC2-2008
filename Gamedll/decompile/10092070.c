/*
 * func-name: ?DeserializationComplete@Effect_ParticleSystemEx@@UAEXXZ_0
 * func-address: 0x10092070
 * callers: 0x10002b80
 * callees: 0x10003477, 0x10005646, 0x10008080, 0x102c0ed0, 0x102c0f30, 0x102c9d98
 */

void __thiscall Effect_ParticleSystemEx::DeserializationComplete(Effect_ParticleSystemEx *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+0h] [ebp-B0h]
  int v6; // [esp+4h] [ebp-ACh]
  int v7; // [esp+8h] [ebp-A8h]
  int v8; // [esp+10h] [ebp-A0h]
  int v9; // [esp+14h] [ebp-9Ch]
  int v10; // [esp+18h] [ebp-98h]
  int v11; // [esp+1Ch] [ebp-94h]
  int v12; // [esp+20h] [ebp-90h]
  int v13; // [esp+28h] [ebp-88h]
  int v14; // [esp+2Ch] [ebp-84h]
  int v15; // [esp+30h] [ebp-80h]
  int v16; // [esp+34h] [ebp-7Ch]
  int v17; // [esp+38h] [ebp-78h]
  int v18; // [esp+3Ch] [ebp-74h]
  int v19; // [esp+40h] [ebp-70h]
  int v20; // [esp+44h] [ebp-6Ch]
  int v21; // [esp+48h] [ebp-68h]
  int v22; // [esp+4Ch] [ebp-64h]
  int v23; // [esp+50h] [ebp-60h]
  int v24; // [esp+58h] [ebp-58h]
  int v25; // [esp+5Ch] [ebp-54h]
  float v26; // [esp+74h] [ebp-3Ch]
  float v27; // [esp+78h] [ebp-38h]
  float v28[3]; // [esp+80h] [ebp-30h] BYREF
  _BYTE v29[12]; // [esp+8Ch] [ebp-24h] BYREF
  _BYTE v30[12]; // [esp+98h] [ebp-18h] BYREF
  int v31; // [esp+ACh] [ebp-4h]

  if ( !*((_DWORD *)this + 263) )
  {
    v31 = 0;
    if ( operator new(0x180u) )
    {
      v25 = *((_DWORD *)this + 273);
      v26 = *((float *)this + 299);
      v24 = *((_DWORD *)this + 319);
      v27 = *((float *)this + 300);
      v2 = *((unsigned __int8 *)this + 1232);
      v28[0] = *((float *)this + 298);
      v28[1] = v26;
      v28[2] = v27;
      v23 = *((int *)this + 297);
      v22 = *((int *)this + 296);
      v21 = *((int *)this + 294);
      v20 = *((int *)this + 293);
      v19 = *((int *)this + 292);
      v18 = *((int *)this + 321);
      v17 = *((int *)this + 291);
      v16 = *((int *)this + 289);
      v15 = *((int *)this + 288);
      v14 = *((int *)this + 287);
      v13 = *((int *)this + 290);
      v12 = v2;
      v11 = sub_102C0F30(v29);
      v10 = sub_102C0ED0(v30);
      v9 = *((int *)this + 322);
      v8 = *((int *)this + 320);
      v7 = *((_DWORD *)this + 284);
      v6 = *((_DWORD *)this + 309);
      v5 = *((int *)this + 285);
      v3 = sub_10005646();
      v4 = ParticleSystemEx::ParticleSystemEx(
             *((_DWORD *)this + 178),
             v3,
             v5,
             v6,
             v7,
             (int)this + 856,
             v8,
             v9,
             v10,
             v11,
             v12,
             (int)v28,
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
             0,
             v24,
             v25);
    }
    else
    {
      v4 = 0;
    }
    v31 = -1;
    *((_DWORD *)this + 263) = v4;
    *((_BYTE *)this + 724) = 0;
  }
  Effect_ParticleSystem::DeserializationComplete(this);
}

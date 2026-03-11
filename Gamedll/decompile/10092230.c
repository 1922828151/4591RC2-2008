/*
 * func-name: ?Tick@Effect_ParticleSystem@@UAEXXZ_0
 * func-address: 0x10092230
 * callers: 0x10017c4c
 * callees: 0x10005646, 0x10005e07, 0x1001230f, 0x10014669, 0x10017c51, 0x10018381, 0x10018aca, 0x102c0ed0, 0x102c0f30, 0x102c1380, 0x102c13d0, 0x102c1420
 */

void __thiscall Effect_ParticleSystem::Tick(Effect_ParticleSystem *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // edx
  float v6; // ecx
  float v7; // edx
  Light *v8; // ecx
  struct LightState *CurrentState; // eax
  float v10; // ecx
  float v11; // edx
  float v12; // eax
  int v13; // eax
  float v14; // ecx
  float v15; // edx
  float v16; // ebx
  bool v17; // zf
  float v18; // [esp+8h] [ebp-E4h]
  int v19; // [esp+8h] [ebp-E4h]
  float v20; // [esp+18h] [ebp-D4h]
  float v21; // [esp+18h] [ebp-D4h]
  float v22; // [esp+18h] [ebp-D4h]
  float v23; // [esp+18h] [ebp-D4h]
  float v24; // [esp+18h] [ebp-D4h]
  float v25; // [esp+18h] [ebp-D4h]
  int v26; // [esp+1Ch] [ebp-D0h] BYREF
  float v27; // [esp+20h] [ebp-CCh]
  float v28; // [esp+24h] [ebp-C8h]
  float v29; // [esp+28h] [ebp-C4h]
  float v30; // [esp+2Ch] [ebp-C0h] BYREF
  float v31; // [esp+30h] [ebp-BCh]
  float v32; // [esp+34h] [ebp-B8h]
  float v33; // [esp+38h] [ebp-B4h]
  int v34; // [esp+3Ch] [ebp-B0h]
  float v35; // [esp+40h] [ebp-ACh]
  float v36; // [esp+44h] [ebp-A8h]
  float v37; // [esp+48h] [ebp-A4h]
  char v38[64]; // [esp+4Ch] [ebp-A0h] BYREF
  int v39[4]; // [esp+8Ch] [ebp-60h] BYREF
  char v40[16]; // [esp+9Ch] [ebp-50h] BYREF
  _BYTE v41[64]; // [esp+ACh] [ebp-40h] BYREF

  v2 = (_DWORD *)*((_DWORD *)this + 263);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 1064) )
    {
      sub_10014669(v38);
      if ( 0.0 != *((float *)this + 313) )
      {
        v20 = GDeltaTime * *((float *)this + 313) + *((float *)this + 316);
        *((float *)this + 316) = v20;
        sub_102C1380(v20);
      }
      if ( 0.0 != *((float *)this + 314) )
      {
        v21 = *((float *)this + 314) * GDeltaTime + *((float *)this + 317);
        *((float *)this + 317) = v21;
        sub_102C13D0(v21);
      }
      if ( 0.0 != *((float *)this + 315) )
      {
        v22 = *((float *)this + 315) * GDeltaTime + *((float *)this + 318);
        *((float *)this + 318) = v22;
        sub_102C1420(v22);
      }
      sub_10018ACA(v41, (int)this + 868);
      v3 = (_DWORD *)sub_102C0ED0(&v26);
      v2[58] = *v3;
      v2[59] = v3[1];
      v2[60] = v3[2];
      sub_10018ACA(v41, (int)this + 868);
      v4 = (_DWORD *)sub_102C0F30(&v26);
      v2[86] = *v4;
      v2[87] = v4[1];
      v2[88] = v4[2];
      if ( *((_BYTE *)this + 1216)
        && SkyController::Instance
        && *((_DWORD *)SkyController::Instance + 178) == *((_DWORD *)this + 178) )
      {
        v5 = *((_DWORD *)this + 274);
        v35 = *((float *)this + 275);
        v6 = *((float *)this + 277);
        v34 = v5;
        v7 = *((float *)this + 276);
        v37 = v6;
        v8 = (Light *)*((_DWORD *)SkyController::Instance + 307);
        v36 = v7;
        CurrentState = Light::GetCurrentState(v8);
        v10 = *((float *)CurrentState + 1);
        v30 = *(float *)CurrentState;
        v11 = *((float *)CurrentState + 2);
        v12 = *((float *)CurrentState + 3);
        v31 = v10;
        v32 = v11;
        v33 = v12;
        sub_10005E07();
        v18 = *((float *)this + 305);
        sub_10017C51((int)v40, (int)&v30);
        v19 = sub_1001230F((int)&v26, v18);
        v23 = 1.0 - *((float *)this + 305);
        sub_1001230F((int)v39, v23);
        sub_10018381((int)&v30, v19);
        sub_10005E07();
        *(float *)&v13 = v30;
        v14 = v31;
        v15 = v32;
        v16 = v33;
      }
      else
      {
        v13 = *((int *)this + 274);
        v14 = *((float *)this + 275);
        v15 = *((float *)this + 276);
        v16 = *((float *)this + 277);
      }
      v17 = *((_DWORD *)this + 273) == 2;
      v29 = v16;
      v37 = v16;
      v28 = v15;
      v27 = v14;
      v26 = v13;
      v34 = v13;
      v35 = v14;
      v36 = v15;
      if ( v17 )
      {
        v24 = *((float *)this + 278);
        v30 = v24 * *(float *)&v26;
        v31 = v27 * v24;
        v32 = v28 * v24;
        v33 = v24 * v29;
        v25 = *((float *)this + 265);
        *(float *)&v26 = v30 * v25;
        v34 = v26;
        v27 = v31 * v25;
        v35 = v27;
        v28 = v32 * v25;
        v36 = v28;
        v29 = v25 * v33;
        v37 = v29;
      }
      else
      {
        v37 = *((float *)this + 278) * *((float *)this + 265) * v29;
      }
      v2[80] = sub_10005646();
    }
    Effect_Base::Tick(this);
  }
  else
  {
    Effect_Base::Tick(this);
  }
}

/*
 * func-name: ?addModel@C3DModel@@QAE_NPAVActor@@@Z
 * func-address: 0x100b2080
 * callers: 0x100b41c0
 * callees: 0x1008fcc0, 0x100dd770, 0x100de9e0, 0x100ee930, 0x1013a940, 0x1016db80, 0x1016e600, 0x1017a0b0, 0x101a2516, 0x101a2534
 */

char __thiscall C3DModel::addModel(C3DModel *this, struct Actor *a2)
{
  TextureCamera *v4; // eax
  TextureCamera *v5; // eax
  Light *v6; // eax
  float *v7; // eax
  int v8; // ecx
  float *v9; // eax
  float v10; // ecx
  World *v11; // esi
  int v12; // eax
  float *v13; // esi
  double v14; // st7
  double v15; // st7
  double v16; // st7
  float *v17; // eax
  double v18; // st7
  float v19; // [esp+28h] [ebp-B4h]
  float v20; // [esp+28h] [ebp-B4h]
  float v21; // [esp+28h] [ebp-B4h]
  float v22; // [esp+28h] [ebp-B4h]
  float v23; // [esp+28h] [ebp-B4h]
  float v24; // [esp+28h] [ebp-B4h]
  float v25; // [esp+28h] [ebp-B4h]
  int v26; // [esp+2Ch] [ebp-B0h] BYREF
  float v27; // [esp+30h] [ebp-ACh]
  float v28; // [esp+34h] [ebp-A8h]
  float v29; // [esp+38h] [ebp-A4h]
  float v30; // [esp+3Ch] [ebp-A0h]
  float v31; // [esp+40h] [ebp-9Ch]
  float v32; // [esp+44h] [ebp-98h]
  float v33; // [esp+48h] [ebp-94h]
  float v34; // [esp+4Ch] [ebp-90h]
  float v35; // [esp+50h] [ebp-8Ch]
  float v36; // [esp+54h] [ebp-88h]
  float v37; // [esp+58h] [ebp-84h]
  float v38; // [esp+5Ch] [ebp-80h]
  float v39; // [esp+60h] [ebp-7Ch]
  float v40; // [esp+64h] [ebp-78h]
  _BYTE v41[16]; // [esp+68h] [ebp-74h] BYREF
  float v42; // [esp+78h] [ebp-64h]
  float v43; // [esp+7Ch] [ebp-60h]
  float v44; // [esp+80h] [ebp-5Ch]
  float v45; // [esp+84h] [ebp-58h]
  float v46; // [esp+88h] [ebp-54h]
  float v47; // [esp+8Ch] [ebp-50h]
  float v48[16]; // [esp+90h] [ebp-4Ch] BYREF
  int v49; // [esp+D8h] [ebp-4h]

  if ( !a2 )
    return 0;
  if ( !*((_DWORD *)this + 133) )
  {
    v4 = (TextureCamera *)operator new(0x1520u);
    v49 = 0;
    if ( v4 )
      v5 = TextureCamera::TextureCamera(v4, 0);
    else
      v5 = 0;
    v34 = 0.0;
    v35 = 0.0;
    v36 = 0.0;
    v37 = 0.0;
    v38 = 0.0;
    *((_DWORD *)this + 133) = v5;
    v39 = 0.0;
    v40 = 1.0;
    *(float *)&v26 = 0.0;
    v27 = 0.0;
    v28 = -6.0;
    TextureCamera::Init(
      v5,
      0.0,
      0.0,
      -6.0,
      LODWORD(v38),
      0.0,
      1.0,
      90.0,
      0,
      0.0,
      LODWORD(v35),
      LODWORD(v36),
      LODWORD(v37),
      0.0,
      0);
    v6 = (Light *)operator new(0x5B0u);
    v49 = 1;
    if ( v6 )
      v7 = (float *)Light::Light(v6, (struct World *)(*((_DWORD *)this + 133) + 1608));
    else
      v7 = 0;
    v49 = -1;
    *(float *)&v26 = 0.0;
    v27 = 10.0;
    v7[214] = 0.0;
    v28 = -10.0;
    v7[215] = v27;
    v7[216] = v28;
    Light::SetRange((Light *)v7, 100.0);
  }
  v8 = *((_DWORD *)this + 133);
  *((_DWORD *)this + 270) = a2;
  (*(void (__thiscall **)(struct Actor *, int))(*(_DWORD *)a2 + 28))(a2, v8 + 1608);
  v9 = (float *)*((_DWORD *)this + 270);
  *(float *)&v26 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v9[214] = 0.0;
  v10 = v28;
  v9 += 214;
  v9[1] = 0.0;
  v9[2] = v10;
  *(_BYTE *)(*((_DWORD *)this + 270) + 724) = 1;
  *(_DWORD *)(*((_DWORD *)this + 270) + 732) = 2;
  v11 = (World *)(*((_DWORD *)this + 133) + 1608);
  World::AddActor(v11, *((struct Actor **)this + 270));
  v12 = *((_DWORD *)v11 + 806);
  if ( !v12 || !((*((_DWORD *)v11 + 807) - v12) >> 2) )
    invalid_parameter_noinfo();
  v13 = (float *)**((_DWORD **)v11 + 806);
  StaticModel::GetWorldBBox(*(_DWORD *)(*((_DWORD *)this + 270) + 716), v41);
  v49 = 2;
  v29 = v45 - v42;
  v30 = v46 - v43;
  v19 = v47 - v44;
  v31 = v45 + 10.0;
  v33 = v46 + 10.0;
  v32 = v44 - 10.0;
  *(float *)&v26 = v31;
  v14 = v33;
  v13[214] = v31;
  v27 = v14;
  v15 = v32;
  v13[215] = v27;
  v28 = v15;
  v16 = v30;
  v13[216] = v28;
  v31 = v16 * v16 + v29 * v29 + v19 * v19;
  v20 = sqrt(v31);
  v21 = v20 * 100.0 + 20.0;
  Light::SetRange((Light *)v13, v21);
  v22 = v45 - v42;
  v29 = v46 - v43;
  v30 = v47 - v44;
  v23 = v22 * 0.5;
  v29 = v29 * 0.5;
  v30 = 0.5 * v30;
  v32 = v42 + v23;
  v33 = v43 + v29;
  v29 = v44 + v30;
  v24 = sqrt(v31);
  v17 = (float *)(*((_DWORD *)this + 133) + 856);
  v25 = v29 - v24;
  v18 = v33;
  *v17 = v32;
  v27 = v18;
  v17[1] = v27;
  *(float *)&v26 = 0.0;
  v17[2] = v25;
  v27 = 0.0;
  v28 = 1.0;
  qmemcpy((void *)(*((_DWORD *)this + 133) + 868), sub_1008FCC0(v48, &v26), 0x40u);
  v49 = -1;
  sub_1017A0B0(v41);
  return 1;
}

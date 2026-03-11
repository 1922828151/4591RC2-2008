/*
 * func-name: ?RecalcPos@C3DModel@@QAEXMM@Z
 * func-address: 0x100b2510
 * callers: none
 * callees: 0x1004c240, 0x1008fcc0, 0x100dd770, 0x100ee930, 0x1017a0b0, 0x101a2516
 */

void __thiscall C3DModel::RecalcPos(C3DModel *this, float a2, float a3)
{
  int v4; // eax
  float *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  float *v9; // ebx
  float *v10; // eax
  double v11; // st7
  float v12; // [esp+14h] [ebp-8Ch]
  float v13; // [esp+14h] [ebp-8Ch]
  float v14; // [esp+14h] [ebp-8Ch]
  float v15; // [esp+14h] [ebp-8Ch]
  float v16; // [esp+18h] [ebp-88h]
  float v17; // [esp+18h] [ebp-88h]
  float v18; // [esp+18h] [ebp-88h]
  float v19; // [esp+18h] [ebp-88h]
  float v20; // [esp+1Ch] [ebp-84h]
  float v21; // [esp+1Ch] [ebp-84h]
  float v22; // [esp+1Ch] [ebp-84h]
  float v23; // [esp+1Ch] [ebp-84h]
  float v24; // [esp+1Ch] [ebp-84h]
  float v25; // [esp+1Ch] [ebp-84h]
  float v26; // [esp+1Ch] [ebp-84h]
  float v27; // [esp+1Ch] [ebp-84h]
  int v28; // [esp+20h] [ebp-80h] BYREF
  float v29; // [esp+24h] [ebp-7Ch]
  float v30; // [esp+28h] [ebp-78h]
  _BYTE v31[16]; // [esp+2Ch] [ebp-74h] BYREF
  float v32; // [esp+3Ch] [ebp-64h]
  float v33; // [esp+40h] [ebp-60h]
  float v34; // [esp+44h] [ebp-5Ch]
  float v35; // [esp+48h] [ebp-58h]
  float v36; // [esp+4Ch] [ebp-54h]
  float v37; // [esp+50h] [ebp-50h]
  float v38[16]; // [esp+54h] [ebp-4Ch] BYREF
  int v39; // [esp+9Ch] [ebp-4h]

  v4 = *((_DWORD *)this + 270);
  if ( v4 )
  {
    StaticModel::GetWorldBBox(*(_DWORD *)(v4 + 716), v31);
    v5 = (float *)(*((_DWORD *)this + 133) + 856);
    v39 = 0;
    v12 = v35 - v32;
    v16 = v36 - v33;
    v20 = v37 - v34;
    v13 = v12 * 0.5;
    v17 = v16 * 0.5;
    v21 = 0.5 * v20;
    v14 = v32 + v13;
    v18 = v33 + v17;
    v22 = v34 + v21;
    v23 = v22 - a2;
    *v5 = v14;
    v5[1] = v18;
    v5[2] = v23;
    *(float *)&v28 = 0.0;
    v29 = 0.0;
    v30 = 1.0;
    qmemcpy((void *)(*((_DWORD *)this + 133) + 868), sub_1008FCC0(v38, &v28), 0x40u);
    v6 = *((_DWORD *)this + 133);
    v7 = *(_DWORD *)(v6 + 4832);
    v8 = v6 + 1608;
    if ( !v7 || !((*(_DWORD *)(v8 + 3228) - v7) >> 2) )
      invalid_parameter_noinfo();
    v9 = **(float ***)(v8 + 3224);
    v10 = (float *)*((_DWORD *)this + 133);
    v11 = v10[214];
    v10 += 214;
    v24 = v11 + 0.0;
    v19 = v10[1] + a3;
    v15 = v10[2] + 0.0;
    v9[214] = v24;
    v9[215] = v19;
    *(float *)&v28 = 0.0;
    v9[216] = v15;
    v29 = -a3;
    v30 = a2;
    sub_1004C240((float *)&v28);
    qmemcpy(v9 + 217, sub_1008FCC0(v38, &v28), 0x40u);
    v25 = a2 * a2 + a3 * a3;
    v26 = sqrt(v25);
    v27 = v26 + 10.0;
    Light::SetRange((Light *)v9, v27);
    v39 = -1;
    sub_1017A0B0(v31);
  }
}

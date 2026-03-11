/*
 * func-name: ?GetView@Light@@QAE?AVMatrix@@XZ
 * func-address: 0x100ddae0
 * callers: 0x1001cbe0, 0x101220b0, 0x101282d0
 * callees: 0x1001cb70, 0x1004c240, 0x101780c8, 0x1017815e, 0x10178164, 0x101786e0, 0x1017b990, 0x101a251c, 0x101a28da
 */

float *__thiscall Light::GetView(int this, float *a2)
{
  double v3; // st7
  float *result; // eax
  float v5; // eax
  float v6; // ecx
  float v7; // edx
  double v8; // st7
  float v9; // eax
  float v10; // edx
  float v11; // ecx
  float v12; // eax
  float v13; // edx
  float v14; // ecx
  float v15; // eax
  float v16; // edx
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st3
  double v22; // st3
  double v23; // st3
  double v24; // st2
  double v25; // st2
  double v26; // st2
  double v27; // st1
  double v28; // st1
  double v29; // st4
  double v30; // st1
  double v31; // st7
  double v32; // st3
  float v33; // [esp+Ch] [ebp-ECh]
  float v34; // [esp+10h] [ebp-E8h]
  float v35; // [esp+14h] [ebp-E4h]
  float v36; // [esp+30h] [ebp-C8h] BYREF
  float v37; // [esp+34h] [ebp-C4h]
  float v38; // [esp+38h] [ebp-C0h]
  float v39; // [esp+3Ch] [ebp-BCh] BYREF
  float v40; // [esp+40h] [ebp-B8h]
  float v41; // [esp+44h] [ebp-B4h]
  float v42; // [esp+48h] [ebp-B0h] BYREF
  float v43; // [esp+4Ch] [ebp-ACh]
  float v44; // [esp+50h] [ebp-A8h]
  float v45; // [esp+58h] [ebp-A0h]
  float v46; // [esp+5Ch] [ebp-9Ch] BYREF
  float v47; // [esp+60h] [ebp-98h]
  float v48; // [esp+64h] [ebp-94h]
  float v49; // [esp+6Ch] [ebp-8Ch] BYREF
  float v50; // [esp+70h] [ebp-88h]
  float v51; // [esp+74h] [ebp-84h]
  _BYTE v52[64]; // [esp+78h] [ebp-80h] BYREF
  float v53[16]; // [esp+B8h] [ebp-40h] BYREF

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[4] = 0.0;
  a2[5] = 0.0;
  a2[6] = 0.0;
  a2[8] = 0.0;
  a2[9] = 0.0;
  a2[10] = 0.0;
  a2[12] = 0.0;
  a2[13] = 0.0;
  a2[14] = 0.0;
  memset(a2, 0, 0x40u);
  sub_101786E0(1.0);
  a2[15] = 1.0;
  if ( *(_DWORD *)(this + 1428) == 1 )
  {
    v36 = *(float *)(this + 856);
    v37 = *(float *)(this + 860);
    v38 = *(float *)(this + 864);
    v45 = 0.0 - 0.0;
    v39 = v45;
    v40 = v45;
    v42 = v45;
    v3 = 0.0 * 0.0;
    v43 = v45;
    v41 = v3 - v3;
    v44 = v41;
    v45 = v3 + v3 + 1.0;
    v45 = acos(v45);
    D3DXMatrixRotationAxis(a2, &v42, LODWORD(v45));
    v35 = -v38;
    v34 = -v37;
    v33 = -v36;
    D3DXMatrixTranslation(v52, LODWORD(v33), LODWORD(v34), LODWORD(v35));
    qmemcpy(a2, sub_1001CB70(v52, v53, (int)a2), 0x40u);
    return a2;
  }
  else if ( *(_DWORD *)(this + 1260) )
  {
    v5 = *(float *)(this + 1112);
    v42 = 0.0;
    v6 = *(float *)(this + 1116);
    v44 = 0.0;
    v7 = *(float *)(this + 1120);
    v39 = v5;
    v40 = v6;
    v43 = 1.0;
    v8 = *(float *)(this + 1124);
    v41 = v7;
    v36 = v8 * 5.0;
    v37 = *(float *)(this + 1128) * 5.0;
    v38 = 5.0 * *(float *)(this + 1132);
    v36 = v36 + v5;
    v37 = v6 + v37;
    v38 = v7 + v38;
    D3DXMatrixLookAtLH(a2, &v39, &v36, &v42);
    return a2;
  }
  else
  {
    v9 = *(float *)(this + 1124);
    v10 = *(float *)(this + 1132);
    v37 = *(float *)(this + 1128);
    v11 = *(float *)(this + 1116);
    v36 = v9;
    v12 = *(float *)(this + 1112);
    v38 = v10;
    v13 = *(float *)(this + 1120);
    v40 = v11;
    v14 = *(float *)(this + 1236);
    v39 = v12;
    v15 = *(float *)(this + 1232);
    v41 = v13;
    v16 = *(float *)(this + 1240);
    v47 = v14;
    v46 = v15;
    v48 = v16;
    sub_1004C240(&v46);
    sub_1017B990(&v42, &v46, &v36);
    sub_1017B990(&v49, &v36, &v42);
    v17 = v42;
    v18 = v49;
    *a2 = v42;
    v47 = v18;
    v19 = v36;
    a2[1] = v47;
    v48 = v19;
    v20 = v43;
    a2[2] = v48;
    v46 = v20;
    v21 = v50;
    a2[4] = v46;
    v47 = v21;
    v22 = v37;
    a2[5] = v47;
    v48 = v22;
    v23 = v44;
    a2[6] = v48;
    v42 = v23;
    v24 = v51;
    a2[8] = v42;
    v43 = v24;
    v25 = v38;
    a2[9] = v43;
    v44 = v25;
    v26 = v40;
    v27 = v40;
    a2[10] = v44;
    v28 = v20 * v27;
    v29 = v39;
    v30 = v17 * v39 + v28;
    v31 = v41;
    v42 = v23 * v41 + v30;
    a2[12] = v42;
    result = a2;
    v43 = v18 * v29 + v26 * v50 + v31 * v51;
    v32 = v37;
    a2[13] = v43;
    v44 = v31 * v38 + v26 * v32 + v19 * v29;
    a2[14] = v44;
  }
  return result;
}

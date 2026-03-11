/*
 * func-name: ?DoCircle@Gizmo@@IAE_NPAUID3DXLine@@K@Z
 * func-address: 0x100946e0
 * callers: 0x10094d10
 * callees: 0x1000ac80, 0x10092020, 0x100953f0, 0x101780e0, 0x10178c20, 0x10178ff0, 0x101a2500, 0x101a2516, 0x101a281a, 0x101a2820
 */

char __thiscall Gizmo::DoCircle(Gizmo *this, struct ID3DXLine *a2, char a3)
{
  int v4; // esi
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // rt0
  double v11; // st5
  double v12; // st7
  double v13; // st7
  float *v14; // esi
  char v15; // dl
  unsigned int v16; // edi
  struct Vector *v17; // ebx
  unsigned int v18; // ebx
  float v19; // ecx
  unsigned int v20; // edi
  double v21; // st7
  int v22; // ebx
  int v23; // edi
  char v25; // [esp+29h] [ebp-A1h]
  float v26; // [esp+2Ah] [ebp-A0h]
  int v27; // [esp+2Ah] [ebp-A0h]
  float v28; // [esp+2Ah] [ebp-A0h]
  float v29; // [esp+2Ah] [ebp-A0h]
  float v30; // [esp+2Ah] [ebp-A0h]
  float v31; // [esp+2Ah] [ebp-A0h]
  float v32; // [esp+2Eh] [ebp-9Ch]
  float v33; // [esp+2Eh] [ebp-9Ch]
  float v34; // [esp+2Eh] [ebp-9Ch]
  float v35; // [esp+32h] [ebp-98h] BYREF
  float v36; // [esp+36h] [ebp-94h]
  float v37; // [esp+3Ah] [ebp-90h]
  float v38; // [esp+3Eh] [ebp-8Ch] BYREF
  float v39; // [esp+42h] [ebp-88h]
  float v40; // [esp+46h] [ebp-84h]
  float v41; // [esp+4Ah] [ebp-80h]
  float v42; // [esp+4Eh] [ebp-7Ch]
  void *v43; // [esp+56h] [ebp-74h]
  int v44; // [esp+5Ah] [ebp-70h]
  int v45; // [esp+5Eh] [ebp-6Ch]
  float v46; // [esp+62h] [ebp-68h] BYREF
  float v47; // [esp+66h] [ebp-64h]
  float v48; // [esp+6Ah] [ebp-60h]
  int v49; // [esp+6Eh] [ebp-5Ch]
  float v50; // [esp+72h] [ebp-58h] BYREF
  float v51; // [esp+76h] [ebp-54h]
  float v52; // [esp+7Ah] [ebp-50h]
  float v53[19]; // [esp+7Eh] [ebp-4Ch] BYREF

  qmemcpy(v53, (char *)this + 48, 0x40u);
  sub_10178C20(v53);
  *(float *)&v49 = v53[12] - *((float *)this + 200);
  v32 = v53[13] - *((float *)this + 201);
  v35 = v53[14] - *((float *)this + 202);
  v33 = v32 * v32 + *(float *)&v49 * *(float *)&v49 + v35 * v35;
  v34 = sqrt(v33);
  v41 = *((float *)this + 87) * v34;
  v4 = 0;
  v43 = 0;
  v44 = 0;
  v41 = Gizmo::GetScale(this) * v41;
  v45 = 0;
  v53[18] = 0.0;
  v49 = a3 & 2;
  if ( (a3 & 2) != 0 )
    v35 = v41;
  else
    v35 = 0.0;
  if ( (a3 & 8) != 0 || (a3 & 4) != 0 )
    v26 = v41;
  else
    v26 = 0.0;
  v46 = v26;
  v47 = v35;
  v48 = 0.0;
  sub_10178FF0(&v46, &v46);
  v46 = *((float *)this + 200) + v46;
  v5 = *((float *)this + 201);
  v35 = v46;
  v47 = v5 + v47;
  v6 = *((float *)this + 202);
  v36 = v47;
  v48 = v6 + v48;
  v37 = v48;
  D3DXVec3TransformCoord(&v35, &v35, (char *)this + 188);
  sub_100953F0(&v35);
  v7 = 0.0;
  v38 = 0.0;
  v39 = 0.0;
  v40 = 0.0;
  if ( v43 )
  {
    v4 = (v44 - (int)v43) >> 3;
    v27 = v4;
    if ( v4 >= 32 )
      goto LABEL_20;
    v8 = 3.141592741012573;
    v9 = 0.0625;
  }
  else
  {
    v8 = 3.141592741012573;
    v27 = 0;
    v9 = 0.0625;
  }
  while ( 1 )
  {
    v10 = v9;
    v11 = v7;
    v12 = v10;
    v38 = v11;
    v39 = v11;
    v40 = v11;
    if ( (a3 & 8) != 0 )
    {
      v28 = v12 * (v8 * (double)v27);
      v35 = cos(v28);
      v38 = v35 * v41;
      v35 = sin(v28);
      v39 = v35 * v41;
    }
    else if ( (a3 & 4) != 0 )
    {
      v29 = v12 * (v8 * (double)v27);
      v35 = cos(v29);
      v38 = v35 * v41;
      v35 = sin(v29);
      v40 = v35 * v41;
    }
    else if ( *(float *)&v49 != 0.0 )
    {
      v30 = v12 * (v8 * (double)v27);
      v35 = cos(v30);
      v39 = v35 * v41;
      v35 = sin(v30);
      v40 = v35 * v41;
    }
    sub_10178FF0(&v38, &v38);
    v38 = *((float *)this + 200) + v38;
    v13 = *((float *)this + 201);
    v50 = v38;
    v39 = v13 + v39;
    v51 = v39;
    v40 = v40 + *((float *)this + 202);
    v52 = v40;
    D3DXVec3TransformCoord(&v50, &v50, (char *)this + 188);
    sub_100953F0(&v50);
    v27 = ++v4;
    if ( v4 >= 32 )
      break;
    v8 = 3.141592741012573;
    v9 = 0.0625;
    v7 = 0.0;
  }
LABEL_20:
  v50 = v46;
  v51 = v47;
  v52 = v48;
  D3DXVec3TransformCoord(&v50, &v50, (char *)this + 188);
  sub_100953F0(&v50);
  v14 = (float *)v43;
  v15 = 0;
  v25 = 0;
  if ( !*((_BYTE *)this + 356) )
  {
    v16 = 1;
    v31 = *((float *)this + 88);
    *((float *)this + 88) = v31 * 0.5;
    while ( 1 )
    {
      if ( !v14 || v16 >= (v44 - (int)v14) >> 3 )
      {
        invalid_parameter_noinfo();
        v14 = (float *)v43;
      }
      v17 = (struct Vector *)&v14[2 * v16];
      if ( !v14 || v16 - 1 >= (v44 - (int)v14) >> 3 )
      {
        invalid_parameter_noinfo();
        v14 = (float *)v43;
      }
      if ( Gizmo::TestLine(this, (struct Vector *)&v14[2 * v16 - 2], v17) )
        break;
      if ( (int)++v16 >= 32 )
        goto LABEL_46;
    }
    v18 = v16 - 2;
    v25 = 1;
    if ( (int)(v16 - 2) < 0 )
      v18 = 0;
    if ( !v14 || v16 + 1 >= (v44 - (int)v14) >> 3 )
    {
      invalid_parameter_noinfo();
      v14 = (float *)v43;
    }
    LODWORD(v19) = &v14[2 * v16 + 2];
    v35 = v19;
    if ( !v14 || v18 >= (v44 - (int)v14) >> 3 )
    {
      invalid_parameter_noinfo();
      v14 = (float *)v43;
      v19 = v35;
    }
    v20 = v16 - 1;
    v35 = v14[2 * v18] - *(float *)LODWORD(v19);
    v36 = v14[2 * v18 + 1] - *(float *)(LODWORD(v19) + 4);
    v35 = v35 * 0.5;
    v36 = 0.5 * v36;
    if ( !v14 || v20 >= (v44 - (int)v14) >> 3 )
    {
      invalid_parameter_noinfo();
      v14 = (float *)v43;
    }
    *((float *)this + 83) = v14[2 * v20];
    *((float *)this + 84) = v14[2 * v20 + 1];
    if ( !v14 || v20 >= (v44 - (int)v14) >> 3 )
    {
      invalid_parameter_noinfo();
      v14 = (float *)v43;
    }
    v41 = v14[2 * v20] + v35;
    v21 = v14[2 * v20 + 1];
    *((float *)this + 85) = v41;
    v42 = v21 + v36;
    *((float *)this + 86) = v42;
LABEL_46:
    v15 = v25;
    *((float *)this + 88) = v31;
  }
  v22 = -65536;
  if ( *(float *)&v49 == 0.0 )
    v22 = a3 & 8;
  if ( (a3 & 4) != 0 )
    v22 = -16711936;
  if ( (a3 & 8) != 0 )
    v22 = -16776961;
  if ( v15 || (*((_BYTE *)this + 932) & 2) != 0 && *((_BYTE *)this + 356) )
  {
    if ( *(float *)&v49 != 0.0 )
      v22 = -256;
    if ( v15 )
      goto LABEL_63;
  }
  if ( (*((_BYTE *)this + 932) & 4) != 0 && *((_BYTE *)this + 356) )
  {
LABEL_63:
    if ( (a3 & 4) != 0 )
      v22 = -256;
    if ( v15 )
      goto LABEL_66;
  }
  if ( (*((_BYTE *)this + 932) & 8) != 0 && *((_BYTE *)this + 356) )
  {
LABEL_66:
    if ( (a3 & 8) != 0 )
      v22 = -256;
  }
  if ( v14 )
  {
    v23 = (v44 - (int)v14) >> 3;
    if ( v23 )
      goto LABEL_72;
  }
  else
  {
    v23 = 0;
  }
  invalid_parameter_noinfo();
  v14 = (float *)v43;
LABEL_72:
  (*(void (__stdcall **)(struct ID3DXLine *, float *, int, int))(*(_DWORD *)a2 + 20))(a2, v14, v23, v22);
  if ( v43 )
    operator delete(v43);
  return v25;
}

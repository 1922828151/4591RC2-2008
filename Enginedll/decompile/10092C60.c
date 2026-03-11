/*
 * func-name: ?UpdateMovement@Gizmo@@IAEXXZ
 * func-address: 0x10092c60
 * callers: 0x10094190
 * callees: 0x1000bc40, 0x1001cb70, 0x1007bd30, 0x10091cd0, 0x10091cf0, 0x10092aa0, 0x101189f0, 0x101780bc, 0x101780c2, 0x101780e0, 0x10178110, 0x10178116, 0x10178720, 0x10178740, 0x10178c20, 0x10179840, 0x10179b40, 0x101a2516, 0x101a26c0
 */

void __thiscall Gizmo::UpdateMovement(Gizmo *this)
{
  int v2; // eax
  int v3; // eax
  void *v4; // eax
  double v5; // st7
  int v6; // eax
  float v7; // eax
  int v8; // ebx
  float *v9; // esi
  float v10; // eax
  float v11; // ecx
  struct RenderDevice *v12; // eax
  double v13; // st7
  double v14; // st7
  float v15; // ebx
  float v16; // ecx
  int v17; // edx
  unsigned int v18; // eax
  double v19; // st7
  double v20; // st7
  double v21; // st7
  bool v22; // zf
  int v23; // ecx
  bool v24; // al
  bool v25; // dl
  bool v26; // cl
  int v27; // eax
  float *v28; // [esp+88h] [ebp-220h]
  float v29; // [esp+9Ch] [ebp-20Ch] BYREF
  float v30; // [esp+A0h] [ebp-208h] BYREF
  float v31; // [esp+A4h] [ebp-204h]
  float v32; // [esp+A8h] [ebp-200h]
  float v33; // [esp+ACh] [ebp-1FCh]
  float v34; // [esp+B0h] [ebp-1F8h]
  float v35; // [esp+B4h] [ebp-1F4h]
  float v36; // [esp+B8h] [ebp-1F0h] BYREF
  float v37; // [esp+BCh] [ebp-1ECh]
  float v38; // [esp+C0h] [ebp-1E8h]
  float v39; // [esp+C4h] [ebp-1E4h] BYREF
  float v40; // [esp+C8h] [ebp-1E0h]
  float v41; // [esp+CCh] [ebp-1DCh]
  float v42; // [esp+D0h] [ebp-1D8h] BYREF
  float v43; // [esp+D4h] [ebp-1D4h]
  float v44; // [esp+D8h] [ebp-1D0h]
  float v45; // [esp+DCh] [ebp-1CCh] BYREF
  float v46; // [esp+E0h] [ebp-1C8h]
  int v47; // [esp+E4h] [ebp-1C4h]
  float v48[3]; // [esp+ECh] [ebp-1BCh] BYREF
  float v49[3]; // [esp+F8h] [ebp-1B0h] BYREF
  float v50[16]; // [esp+104h] [ebp-1A4h] BYREF
  _BYTE v51[12]; // [esp+144h] [ebp-164h] BYREF
  _BYTE v52[24]; // [esp+150h] [ebp-158h] BYREF
  int v53[16]; // [esp+168h] [ebp-140h] BYREF
  float v54[16]; // [esp+1A8h] [ebp-100h] BYREF
  _BYTE v55[64]; // [esp+1E8h] [ebp-C0h] BYREF
  int v56[16]; // [esp+228h] [ebp-80h] BYREF
  float v57[16]; // [esp+268h] [ebp-40h] BYREF

  v2 = *((_DWORD *)this + 233);
  LODWORD(v39) = (v2 & 2) != 0;
  if ( (v2 & 4) != 0 )
    ++LODWORD(v39);
  if ( (v2 & 8) != 0 )
    ++LODWORD(v39);
  v3 = *((_DWORD *)this + 234);
  if ( v3 && v3 != 2 )
  {
    if ( v3 == 1 )
    {
      if ( SLODWORD(v39) <= 1 )
      {
        v36 = *((float *)this + 85) - *((float *)this + 83);
        v37 = *((float *)this + 86) - *((float *)this + 84);
        sub_10091CF0(&v36);
        v45 = *((float *)this + 79) - *((float *)this + 81);
        v46 = *((float *)this + 80) - *((float *)this + 82);
        v29 = v46 * v46 + v45 * v45;
        sub_10091CF0(&v45);
        v29 = sqrt(v29);
        v29 = v29 / 55.0;
        v5 = v29;
        v29 = v46 * v37 + v45 * v36;
        v29 = v5 * -v29;
        sub_1000BC40((float *)v53);
        v6 = *((_DWORD *)this + 233);
        v42 = 0.0;
        v43 = 0.0;
        v44 = 0.0;
        if ( (v6 & 2) != 0 )
          v42 = v29;
        if ( (v6 & 4) != 0 )
          v43 = -v29;
        if ( (v6 & 8) != 0 )
          v44 = v29;
        sub_10179B40(v42, v43, v44);
        v7 = *((float *)this + 202);
        v8 = *((_DWORD *)this + 200);
        v31 = *((float *)this + 201);
        v32 = v7;
        v9 = sub_1001CB70((char *)this + 752, (float *)v56, (int)v53);
        v10 = v31;
        qmemcpy((char *)this + 752, v9, 0x40u);
        v11 = v32;
        *((_DWORD *)this + 200) = v8;
        *((float *)this + 201) = v10;
        *((float *)this + 202) = v11;
      }
      else if ( *((_BYTE *)this + 864) )
      {
        sub_10092AA0((int)this + 368, (int)*((float *)this + 79), (int)*((float *)this + 80));
        v28 = sub_1007BD30((char *)this + 48, (float *)v56);
        v4 = (void *)sub_10091CD0((char *)this + 368);
        qmemcpy((char *)this + 752, sub_1001CB70(v4, (float *)v53, (int)v28), 0x40u);
      }
    }
    return;
  }
  v50[11] = 0.0;
  v50[9] = 0.0;
  v50[8] = 0.0;
  v50[7] = 0.0;
  v50[6] = 0.0;
  v50[4] = 0.0;
  v50[3] = 0.0;
  v50[2] = 0.0;
  v50[1] = 0.0;
  v50[15] = 1.0;
  v50[10] = 1.0;
  v50[5] = 1.0;
  v50[0] = 1.0;
  v50[12] = *((float *)this + 200);
  v50[13] = *((float *)this + 201);
  v50[14] = *((float *)this + 202);
  v12 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v12 + 427) + 192))(*((_DWORD *)v12 + 427), v52);
  v30 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  qmemcpy(v55, (char *)this + 48, sizeof(v55));
  qmemcpy(v53, (char *)this + 112, sizeof(v53));
  D3DXVec3Project(&v42, &v30, v52, v53, v55, v50);
  v29 = 1.0;
  if ( LODWORD(v39) == 3 )
    v29 = v44;
  qmemcpy(v54, (char *)this + 48, sizeof(v54));
  sub_10178C20(v54);
  v42 = v54[12];
  v43 = v54[13];
  v44 = v54[14];
  D3DXVec3Unproject(v51, &v42, v52, v53, v55, v50);
  v33 = *((float *)this + 81);
  v13 = *((float *)this + 82);
  v42 = v33;
  v34 = v13;
  v43 = v34;
  v35 = v29;
  v44 = v29;
  D3DXVec3Unproject(v48, &v42, v52, v53, v55, v50);
  v33 = *((float *)this + 79);
  v14 = *((float *)this + 80);
  v42 = v33;
  v34 = v14;
  v43 = v34;
  v35 = v29;
  v44 = v29;
  D3DXVec3Unproject(v49, &v42, v52, v53, v55, v50);
  v15 = v39;
  v33 = 0.0;
  v34 = 0.0;
  v35 = 0.0;
  if ( LODWORD(v39) == 1 )
  {
    v16 = *((float *)this + 201);
    v17 = *((_DWORD *)this + 202);
    v45 = *((float *)this + 200);
    v46 = v16;
    v47 = v17;
    D3DXVec3TransformCoord(&v45, &v45, (char *)this + 188);
    v18 = *((_DWORD *)this + 233);
    v36 = (float)((v18 >> 1) & 1);
    LODWORD(v29) = (v18 >> 3) & 1;
    v37 = (float)((v18 >> 2) & 1);
    v38 = (float)SLODWORD(v29);
    v30 = v36 + *((float *)this + 200);
    v19 = *((float *)this + 201);
    v39 = v30;
    v31 = v19 + v37;
    v20 = *((float *)this + 202);
    v40 = v31;
    v32 = v20 + v38;
    v41 = v32;
    D3DXVec3TransformCoord(&v39, &v39, (char *)this + 188);
    v36 = v45 - v39;
    v37 = v46 - v40;
    v45 = v36 * v36 + v37 * v37;
    v39 = *((float *)this + 79) - *((float *)this + 81);
    v40 = *((float *)this + 80) - *((float *)this + 82);
    v29 = v39 * v39 + v40 * v40;
    sub_10091CF0(&v39);
    sub_10091CF0(&v36);
    v29 = sqrt(v29);
    v21 = v29;
    v29 = v39 * v36 + v40 * v37;
    v29 = v21 * -v29;
    v39 = v29;
    v29 = sqrt(v45);
    v22 = *((_DWORD *)this + 234) == 2;
    v33 = v39 / v29;
    v34 = v33;
    v35 = v33;
    if ( v22 )
    {
      v29 = 1.0 / *((float *)this + 215);
      v33 = v33 * v29;
      v34 = v29 * v34;
      v35 = v29 * v35;
    }
    goto LABEL_35;
  }
  if ( LODWORD(v39) != 2 )
  {
    if ( LODWORD(v39) != 3 )
      goto LABEL_35;
    goto LABEL_33;
  }
  v23 = *((_DWORD *)this + 233);
  v36 = 0.0;
  v37 = 0.0;
  v38 = 0.0;
  v24 = (v23 & 2) != 0;
  v25 = (v23 & 4) != 0;
  v26 = (v23 & 8) != 0;
  if ( v24 )
  {
    if ( v25 )
    {
      v30 = 0.0;
      v31 = 0.0;
      v36 = 0.0;
      v32 = 1.0;
      v37 = 0.0;
      v38 = 1.0;
    }
    if ( !v26 )
      goto LABEL_32;
    v30 = 0.0;
    v36 = 0.0;
    v31 = 1.0;
    v37 = 1.0;
    v32 = 0.0;
    v38 = 0.0;
  }
  if ( v26 && v25 )
  {
    v30 = 1.0;
    v36 = 1.0;
    v31 = 0.0;
    v32 = 0.0;
    v37 = 0.0;
    v38 = 0.0;
  }
LABEL_32:
  v30 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  D3DXPlaneFromPointNormal(&v45, &v30, &v36);
  D3DXPlaneIntersectLine(v48, &v45, v51, v48);
  D3DXPlaneIntersectLine(v49, &v45, v51, v49);
LABEL_33:
  v30 = v49[0] - v48[0];
  v33 = v30;
  v31 = v49[1] - v48[1];
  v34 = v31;
  v32 = v49[2] - v48[2];
  v35 = v32;
LABEL_35:
  if ( (*((_BYTE *)this + 932) & 2) != 0 )
    *((float *)this + 200) = v33 + *((float *)this + 200);
  if ( (*((_BYTE *)this + 932) & 4) != 0 )
    *((float *)this + 201) = *((float *)this + 201) + v34;
  if ( (*((_BYTE *)this + 932) & 8) != 0 )
    *((float *)this + 202) = *((float *)this + 202) + v35;
  if ( *((_DWORD *)this + 234) == 2 )
  {
    sub_10179840(v56);
    if ( LODWORD(v15) == 3 )
    {
      v33 = v34;
      v35 = v34;
    }
    sub_10178740(&v29, &v45, &v39);
    v27 = *((_DWORD *)this + 233);
    if ( (v27 & 2) != 0 )
      v29 = v33 * 0.5 + v29;
    if ( (v27 & 4) != 0 )
      v45 = v34 * 0.5 + v45;
    if ( (v27 & 8) != 0 )
      v39 = 0.5 * v35 + v39;
    if ( v29 <= 0.1000000014901161 )
      v29 = 0.1;
    if ( v45 <= 0.1000000014901161 )
      v45 = 0.1;
    if ( v39 <= 0.1000000014901161 )
      v39 = 0.1;
    sub_1000BC40(v54);
    sub_10178720(v29, v45, v39);
    qmemcpy((char *)this + 752, sub_1001CB70(v54, v57, (int)v56), 0x40u);
  }
}

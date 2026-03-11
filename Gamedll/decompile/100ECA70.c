/*
 * func-name: sub_100ECA70
 * func-address: 0x100eca70
 * callers: 0x10015af5
 * callees: 0x10002b53, 0x1000a097, 0x1000f1dc, 0x102c0750, 0x102c07a0, 0x102c9dbc, 0x102c9fe0
 */

int __userpurge sub_100ECA70@<eax>(
        int a1@<ecx>,
        float *a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  float v15; // eax
  int v16; // edx
  float *v18; // ebx
  double v19; // st7
  int v20; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int *TextSize; // eax
  _DWORD *v26; // ebx
  void (__cdecl **v27)(_DWORD *, int, int, _DWORD, _DWORD, int); // esi
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // ebx
  _DWORD *v32; // ebp
  void (__thiscall **v33)(_DWORD *, int, int); // esi
  double v34; // st7
  float v36; // [esp+30h] [ebp-7Ch]
  float v37; // [esp+34h] [ebp-78h]
  float v38; // [esp+50h] [ebp-5Ch]
  float v39; // [esp+50h] [ebp-5Ch]
  int v40; // [esp+50h] [ebp-5Ch]
  int v41; // [esp+54h] [ebp-58h]
  int v42; // [esp+54h] [ebp-58h]
  float v43; // [esp+58h] [ebp-54h]
  float v44; // [esp+58h] [ebp-54h]
  float v45; // [esp+58h] [ebp-54h]
  int v46; // [esp+60h] [ebp-4Ch] BYREF
  int v47; // [esp+64h] [ebp-48h]
  int v48; // [esp+68h] [ebp-44h]
  float v49; // [esp+6Ch] [ebp-40h] BYREF
  float v50; // [esp+70h] [ebp-3Ch]
  float v51; // [esp+74h] [ebp-38h]
  _BYTE v52[16]; // [esp+78h] [ebp-34h] BYREF
  float v53; // [esp+88h] [ebp-24h]
  float v54; // [esp+8Ch] [ebp-20h]
  float v55; // [esp+90h] [ebp-1Ch]
  float v56; // [esp+94h] [ebp-18h]
  float v57; // [esp+98h] [ebp-14h]
  float v58; // [esp+9Ch] [ebp-10h]
  int v59; // [esp+A8h] [ebp-4h]
  float v60; // [esp+B0h] [ebp+4h]
  float v61; // [esp+B0h] [ebp+4h]
  float v62; // [esp+B4h] [ebp+8h]
  float v63; // [esp+B4h] [ebp+8h]
  float v64; // [esp+B4h] [ebp+8h]
  float v65; // [esp+B4h] [ebp+8h]
  float v66; // [esp+B4h] [ebp+8h]
  float v67; // [esp+B4h] [ebp+8h]
  float v68; // [esp+B8h] [ebp+Ch]
  float v69; // [esp+B8h] [ebp+Ch]
  float v70; // [esp+B8h] [ebp+Ch]
  float v71; // [esp+BCh] [ebp+10h]
  float v72; // [esp+BCh] [ebp+10h]

  v15 = *a3;
  v16 = *((int *)a3 + 2);
  v47 = *((int *)a3 + 1);
  *(float *)&v46 = v15;
  v48 = v16;
  sub_1000F1DC();
  v18 = a2 + 88;
  v59 = 0;
  v62 = *(float *)&v46 - 0.1000000014901161;
  v38 = *(float *)&v47 - 0.1000000014901161;
  v43 = *(float *)&v48 - 0.1000000014901161;
  v53 = v62;
  v54 = v38;
  v55 = v43;
  v63 = *(float *)&v46 + 0.1000000014901161;
  v44 = *(float *)&v47 + 0.1000000014901161;
  v39 = *(float *)&v48 + 0.1000000014901161;
  v49 = v63;
  v56 = v63;
  v50 = v44;
  v57 = v44;
  v51 = v39;
  v19 = a2[88];
  v58 = v39;
  v60 = v19 - *a3;
  v64 = v18[1] - a3[1];
  v45 = v18[2] - a3[2];
  v65 = v64 * v64 + v60 * v60 + v45 * v45;
  v66 = sqrt(v65);
  if ( Camera::BoxInFrustum((Camera *)a2, (const struct BBox *)v52, 1, 0) )
  {
    CameraHandler::Instance();
    CameraHandler::GetCoords_ScreenFromWorld((int)&v49, v46, v47, v48, 1);
    if ( *(_DWORD *)(a1 + 8) )
    {
      v20 = Canvas::Instance();
      (*(void (__thiscall **)(int, int, int, int, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)v20 + 68))(
        v20,
        a5,
        (int)(v49 - (double)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 80) / 2)),
        (int)(v50 - (double)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 84) / 2)),
        *(_DWORD *)(*(_DWORD *)(a1 + 8) + 80),
        *(_DWORD *)(*(_DWORD *)(a1 + 8) + 84),
        *(_DWORD *)(a1 + 8),
        5,
        6);
      v22 = Canvas::Instance();
      Canvas::GetTextSize(v22);
      v23 = Canvas::Instance();
      v71 = v50 - (double)(v41 / 2) - (double)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 84) / 4);
      v36 = v71;
      v72 = v49 - (double)(SLODWORD(v39) / 2);
      (*(void (__cdecl **)(int, int, int, _DWORD, _DWORD, void *, int))(*(_DWORD *)v23 + 44))(
        v23,
        3,
        a5,
        LODWORD(v72),
        LODWORD(v36),
        &unk_10310E98,
        (int)v66);
      std::string::c_str(a4);
      v24 = Canvas::Instance();
      TextSize = (int *)Canvas::GetTextSize(v24);
      v40 = *TextSize;
      v42 = TextSize[1];
      v26 = (_DWORD *)Canvas::Instance();
      v27 = (void (__cdecl **)(_DWORD *, int, int, _DWORD, _DWORD, int))(*v26 + 44);
      v28 = std::string::c_str(a4);
      v68 = v50 - (double)(v42 / 2) + (double)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 84) / 4);
      v37 = v68;
      v69 = v49 - (double)(v40 / 2);
      (*v27)(v26, 3, a5, LODWORD(v69), LODWORD(v37), v28);
    }
  }
  else
  {
    v61 = sub_102C07A0(a2 + 94, &v46);
    if ( *(_DWORD *)(a1 + 4) )
    {
      v29 = RenderDevice::Instance();
      v30 = RenderDevice::Instance();
      v67 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 296))(v30) * 0.5;
      v70 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v29 + 300))(v29) * 0.5;
      v49 = v67;
      v50 = v70;
      v51 = 0.0;
      v31 = RenderDevice::Instance();
      v32 = (_DWORD *)Canvas::Instance();
      v33 = (void (__thiscall **)(_DWORD *, int, int))(*v32 + 72);
      v34 = (double)(*(int (__thiscall **)(int, int, _DWORD, _DWORD, float, float *, _DWORD, int, int))(*(_DWORD *)v31 + 296))(
                      v31,
                      40,
                      *(_DWORD *)(*(_DWORD *)(a1 + 4) + 80),
                      *(_DWORD *)(*(_DWORD *)(a1 + 4) + 84),
                      COERCE_FLOAT(LODWORD(v61)),
                      &v49,
                      *(_DWORD *)(a1 + 4),
                      5,
                      6)
          * 0.5
          - 0.5 * (double)*(int *)(*(_DWORD *)(a1 + 4) + 80);
      (*v33)(v32, a13, (int)v34);
    }
  }
  v59 = -1;
  return sub_102C0750(v52);
}

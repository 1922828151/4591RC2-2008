/*
 * func-name: ?AddPrefabInstanceUsingPosAndRot@Editor@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVVector@@AAVMatrix@@@Z
 * func-address: 0x100853c0
 * callers: none
 * callees: 0x10001440, 0x10012a30, 0x100194a0, 0x10076ef0, 0x10116820, 0x10116c70, 0x101786e0, 0x10178c30, 0x10179590, 0x1017a0b0, 0x101a2500, 0x101a251c, 0x101a2534
 */

int __thiscall Editor::AddPrefabInstanceUsingPosAndRot(
        int this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float *a9,
        int a10)
{
  PrefabInstance *v11; // eax
  PrefabInstance *v12; // esi
  bool v13; // zf
  unsigned int v14; // edi
  int v15; // eax
  char *v16; // esi
  unsigned int v17; // eax
  float *v18; // ecx
  double v19; // st7
  unsigned int i; // ebp
  unsigned int v21; // ecx
  char *v22; // edi
  char *v23; // edi
  float *v24; // eax
  char *v25; // edi
  char *v26; // edi
  float v27; // edx
  int v28; // eax
  float v29; // ecx
  char *v30; // ecx
  unsigned int v31; // edx
  char *v32; // esi
  char *v33; // esi
  char *v34; // edx
  unsigned int v35; // ecx
  char *v36; // esi
  char *v37; // esi
  float *v38; // edi
  char v40; // [esp-18h] [ebp-E4h] BYREF
  int v41; // [esp-14h] [ebp-E0h]
  int v42; // [esp-10h] [ebp-DCh]
  int v43; // [esp-Ch] [ebp-D8h]
  int v44; // [esp-8h] [ebp-D4h]
  int v45; // [esp-4h] [ebp-D0h]
  unsigned int v46; // [esp+0h] [ebp-CCh]
  int v47; // [esp+14h] [ebp-B8h] BYREF
  int v48; // [esp+18h] [ebp-B4h] BYREF
  void *v49; // [esp+1Ch] [ebp-B0h]
  unsigned int v50; // [esp+20h] [ebp-ACh]
  int v51; // [esp+24h] [ebp-A8h]
  float v52; // [esp+28h] [ebp-A4h]
  char *v53; // [esp+2Ch] [ebp-A0h]
  float v54; // [esp+30h] [ebp-9Ch]
  float v55; // [esp+34h] [ebp-98h]
  float v56; // [esp+38h] [ebp-94h]
  float v57; // [esp+3Ch] [ebp-90h]
  float v58; // [esp+40h] [ebp-8Ch]
  float v59; // [esp+44h] [ebp-88h]
  float v60; // [esp+48h] [ebp-84h]
  float v61; // [esp+4Ch] [ebp-80h]
  float v62; // [esp+50h] [ebp-7Ch]
  float v63; // [esp+54h] [ebp-78h]
  float v64[16]; // [esp+58h] [ebp-74h] BYREF
  float v65[10]; // [esp+98h] [ebp-34h] BYREF
  int v66; // [esp+C8h] [ebp-4h]

  v46 = 1200;
  v66 = 0;
  *(_BYTE *)(this + 2060) = 1;
  *(float *)&v11 = COERCE_FLOAT(operator new(v46));
  v52 = *(float *)&v11;
  LOBYTE(v66) = 1;
  if ( *(float *)&v11 == 0.0 )
    *(float *)&v12 = 0.0;
  else
    *(float *)&v12 = COERCE_FLOAT(PrefabInstance::PrefabInstance(v11, *(struct World **)(this + 2048)));
  v52 = COERCE_FLOAT(&v40);
  LOBYTE(v66) = 0;
  std::string::string(&v40, &a2);
  PrefabInstance::LoadModel(v40, v41, v42, v43, v44, v45, v46);
  v13 = *((_BYTE *)v12 + 442) == 0;
  v47 = (int)v12;
  if ( !v13 )
  {
    if ( !*((_BYTE *)v12 + 441) )
    {
      v46 = (unsigned int)&v47;
      *(_BYTE *)(this + 2060) = 1;
      std::vector<Actor *>::push_back((_DWORD *)(this + 2244), (int *)v46);
    }
    *((_BYTE *)v12 + 441) = 1;
  }
  v49 = 0;
  v50 = 0;
  v51 = 0;
  LOBYTE(v66) = 2;
  v47 = (int)v12;
  std::vector<Actor *>::push_back(&v48, &v47);
  sub_10001440(v65);
  v54 = 0.0;
  v55 = 0.0;
  LOBYTE(v66) = 3;
  v56 = 0.0;
  v14 = 0;
  v15 = std::vector<Model *>::size(&v48);
  v16 = (char *)v49;
  if ( v15 )
  {
    do
    {
      if ( !v16 || v14 >= (int)(v50 - (_DWORD)v16) >> 2 )
      {
        invalid_parameter_noinfo();
        v16 = (char *)v49;
      }
      *(float *)&v17 = COERCE_FLOAT(std::vector<Model *>::size(&v48));
      v52 = *(float *)&v17;
      *(float *)&v47 = (float)v17;
      v18 = (float *)(*(_DWORD *)&v16[4 * v14++] + 856);
      *(float *)&v47 = 1.0 / *(float *)&v47;
      v19 = *(float *)&v47;
      *(float *)&v47 = *v18 * *(float *)&v47;
      v60 = v18[1] * v19;
      v52 = v19 * v18[2];
      v54 = *(float *)&v47 + v54;
      v55 = v55 + v60;
      v56 = v56 + v52;
    }
    while ( v14 < v17 );
  }
  for ( i = 0; v16; ++i )
  {
    v21 = v50;
    if ( (int)(v50 - (_DWORD)v16) >> 2 <= i )
      break;
    v22 = v16;
    if ( (unsigned int)v16 > v50 )
    {
      invalid_parameter_noinfo();
      v16 = (char *)v49;
      v21 = v50;
    }
    v53 = v22;
    v23 = &v22[4 * i];
    if ( (unsigned int)v23 > v21 || v23 < v16 )
    {
      invalid_parameter_noinfo();
      v16 = (char *)v49;
      v21 = v50;
    }
    if ( (unsigned int)v23 >= v50 )
    {
      invalid_parameter_noinfo();
      v16 = (char *)v49;
      v21 = v50;
    }
    v24 = (float *)(*(_DWORD *)v23 + 856);
    v57 = *v24 - v54;
    v58 = v24[1] - v55;
    v59 = v24[2] - v56;
    v61 = *a9 + v57;
    v62 = a9[1] + v58;
    v63 = a9[2] + v59;
    if ( !v16 || (int)(v21 - (_DWORD)v16) >> 2 <= i )
      goto LABEL_51;
    v25 = v16;
    if ( (unsigned int)v16 > v21 )
    {
      invalid_parameter_noinfo();
      v16 = (char *)v49;
      v21 = v50;
    }
    v53 = v25;
    v26 = &v25[4 * i];
    if ( (unsigned int)v26 > v21 || v26 < v16 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v26 >= v50 )
      invalid_parameter_noinfo();
    v27 = v62;
    v28 = *(_DWORD *)v26 + 856;
    *(float *)v28 = v61;
    v29 = v63;
    *(float *)(v28 + 4) = v27;
    *(float *)(v28 + 8) = v29;
    v30 = (char *)v49;
    if ( !v49 )
      goto LABEL_51;
    v31 = v50;
    if ( (int)(v50 - (_DWORD)v49) >> 2 <= i )
      goto LABEL_51;
    v32 = (char *)v49;
    if ( (unsigned int)v49 > v50 )
    {
      invalid_parameter_noinfo();
      v31 = v50;
      v30 = (char *)v49;
    }
    v53 = v32;
    v33 = &v32[4 * i];
    if ( (unsigned int)v33 > v31 || v33 < v30 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v33 >= v50 )
      invalid_parameter_noinfo();
    sub_10178C30(*(_DWORD *)v33 + 868);
    v34 = (char *)v49;
    if ( !v49 || (v35 = v50, (int)(v50 - (_DWORD)v49) >> 2 <= i) )
LABEL_51:
      std::vector<Actor *>::_Xran();
    v36 = (char *)v49;
    if ( (unsigned int)v49 > v50 )
    {
      invalid_parameter_noinfo();
      v35 = v50;
      v34 = (char *)v49;
    }
    v53 = v36;
    v37 = &v36[4 * i];
    if ( (unsigned int)v37 > v35 || v37 < v34 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v37 >= v50 )
      invalid_parameter_noinfo();
    v38 = (float *)(*(_DWORD *)v37 + 868);
    memset(v64, 0, sizeof(v64));
    sub_101786E0(1.0);
    v64[15] = 1.0;
    sub_10179590(v38, a10, v64);
    qmemcpy(v38, v64, 0x40u);
    v16 = (char *)v49;
  }
  LOBYTE(v66) = 2;
  sub_1017A0B0(v65);
  if ( v49 )
    operator delete(v49);
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v66 = -1;
  return std::string::~string(&a2);
}

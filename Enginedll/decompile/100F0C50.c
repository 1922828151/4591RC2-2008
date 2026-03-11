/*
 * func-name: ?DrawSimpleWithShader@StaticModel@@QAEXPAVCamera@@PAUModelFrame@@PAVShader@@VMatrix@@@Z
 * func-address: 0x100f0c50
 * callers: 0x100f0c50, 0x100f1010
 * callees: 0x1000d780, 0x1001cb70, 0x10021240, 0x10076ef0, 0x1009dd90, 0x100a1b10, 0x100ee360, 0x100f0c50, 0x100f1a90, 0x10121350, 0x101216e0, 0x10124d90
 */

struct Mesh *__userpurge StaticModel::DrawSimpleWithShader@<eax>(
        StaticModel *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>,
        struct Camera *a6,
        ModelFrame *a7,
        Shader *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        Shader *a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24)
{
  struct Mesh *result; // eax
  struct Mesh *v27; // ebp
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // edi
  int v32; // eax
  int v33; // eax
  unsigned int v34; // ebx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  void (__thiscall **v38)(struct Mesh *, Shader *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int, int, int, int, char *, void *); // edi
  _DWORD *v39; // eax
  int v40; // edx
  int v41; // eax
  void (__thiscall *v42)(struct Mesh *, Shader *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int, int, int, int, char *, void *); // edx
  void (*v43)(void); // edx
  int v44; // eax
  int *v45; // eax
  void (__thiscall *v46)(struct Mesh *); // edx
  int v47; // edi
  char *v48; // eax
  unsigned int v49; // ebx
  int j; // ebp
  int v51; // ecx
  int v52; // ecx
  const void **v53; // esi
  _DWORD v54[16]; // [esp-34h] [ebp-B0h] BYREF
  int v55; // [esp+Ch] [ebp-70h]
  int v56; // [esp+10h] [ebp-6Ch]
  int v57; // [esp+14h] [ebp-68h] BYREF
  int v58; // [esp+18h] [ebp-64h]
  char *v59; // [esp+1Ch] [ebp-60h]
  void *v60; // [esp+20h] [ebp-5Ch]
  struct Mesh *v61; // [esp+24h] [ebp-58h]
  float v62[19]; // [esp+30h] [ebp-4Ch] BYREF
  struct Camera *i; // [esp+80h] [ebp+4h]
  ModelFrame *v64; // [esp+84h] [ebp+8h]

  v62[18] = NAN;
  result = (struct Mesh *)NtCurrentTeb()->NtTib.ExceptionList;
  LODWORD(v62[17]) = &loc_101AFBCB;
  LODWORD(v62[16]) = result;
  v58 = a2;
  v57 = a3;
  v56 = a5;
  v55 = a4;
  if ( a7 )
  {
    qmemcpy(v54, &a9, sizeof(v54));
    StaticModel::DrawSimpleWithShader(
      a1,
      a6,
      *((_DWORD *)a7 + 90),
      a8,
      v54[0],
      v54[1],
      v54[2],
      v54[3],
      v54[4],
      v54[5],
      v54[6],
      v54[7],
      v54[8],
      v54[9],
      v54[10],
      v54[11],
      v54[12],
      v54[13],
      v54[14],
      v54[15]);
    qmemcpy(v54, &a9, sizeof(v54));
    StaticModel::DrawSimpleWithShader(
      a1,
      a6,
      *((_DWORD *)a7 + 89),
      a8,
      v54[0],
      v54[1],
      v54[2],
      v54[3],
      v54[4],
      v54[5],
      v54[6],
      v54[7],
      v54[8],
      v54[9],
      v54[10],
      v54[11],
      v54[12],
      v54[13],
      v54[14],
      v54[15]);
    result = ModelFrame::GetMesh(a7, 0);
    if ( result )
    {
      if ( !*((_BYTE *)result + 2524) )
      {
        result = StaticModel::ChooseLOD(a1, a6, a7);
        v27 = result;
        if ( result )
        {
          v60 = (char *)a7 + 164;
          Shader::SetWorld(a8, (ModelFrame *)((char *)a7 + 164));
          v61 = (ModelFrame *)((char *)a7 + 228);
          Shader::SetOldWVP(a8, (ModelFrame *)((char *)a7 + 228));
          v28 = *((_DWORD *)a7 + 110);
          v64 = (ModelFrame *)((char *)a7 + 436);
          if ( v28 )
            v29 = (*((_DWORD *)a7 + 111) - v28) >> 6;
          else
            v29 = 0;
          v30 = *((_DWORD *)a7 + 106);
          v31 = (int)a7 + 420;
          v59 = (char *)a7 + 420;
          if ( v30 )
            v32 = (*((_DWORD *)a7 + 107) - v30) >> 2;
          else
            v32 = 0;
          if ( v29 != v32 )
          {
            v33 = std::vector<Model *>::size((_DWORD *)a7 + 105);
            sub_100F1A90((int)a7 + 436, v33);
          }
          v34 = 0;
          for ( i = 0; ; i = (struct Camera *)((char *)i + 20) )
          {
            v35 = *((_DWORD *)v27 + 620);
            if ( !v35 || v34 >= (*((_DWORD *)v27 + 621) - v35) / 20 )
              break;
            v36 = *((_DWORD *)v27 + 620);
            if ( !v36 || v34 >= (*((_DWORD *)v27 + 621) - v36) / 20 )
              invalid_parameter_noinfo();
            (*(void (__thiscall **)(struct Mesh *, _DWORD, int, int, int, int, char *, void *))(*(_DWORD *)v27 + 108))(
              v27,
              *(_DWORD *)((char *)i + *((_DWORD *)v27 + 620)),
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            v37 = *(_DWORD *)(v31 + 4);
            if ( v37 && (*(_DWORD *)(v31 + 8) - v37) >> 2 )
            {
              LODWORD(v62[4]) = &v57;
              sub_1000D780(&v57, a13);
              LODWORD(v62[5]) = &v54[14];
              a10 = 0;
              std::vector<Matrix *>::vector<Matrix *>(&v54[14], v31);
              v38 = (void (__thiscall **)(struct Mesh *, Shader *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int, int, int, int, char *, void *))(*(_DWORD *)v27 + 92);
              v39 = (_DWORD *)std::vector<AttributeRange>::operator[]((_DWORD *)v27 + 619, v34);
              v54[9] = *v39;
              v54[10] = v39[1];
              v54[11] = v39[2];
              v40 = v39[3];
              v41 = v39[4];
              v54[12] = v40;
              v42 = *v38;
              a10 = -1;
              v42(v27, a14, v54[9], v54[10], v54[11], v54[12], v41, v54[14], v54[15], v55, v56, v57, v58, v59, v60);
            }
            else
            {
              Shader::SetMBSkinning(a14, 0, 0, 0, 0);
            }
            v43 = *(void (**)(void))(**((_DWORD **)a14 + 4) + 260);
            v60 = (void *)*((_DWORD *)a14 + 4);
            v43();
            v44 = *((_DWORD *)v27 + 620);
            if ( !v44 || v34 >= (*((_DWORD *)v27 + 621) - v44) / 20 )
              invalid_parameter_noinfo();
            v45 = (int *)(a11 + *((_DWORD *)v27 + 620));
            v46 = *(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v27 + 60);
            v55 = *v45;
            v56 = v45[1];
            v57 = v45[2];
            v47 = v45[3];
            v48 = (char *)v45[4];
            v58 = v47;
            v59 = v48;
            v46(v27);
            v31 = (int)v59;
            ++v34;
          }
          if ( (*(unsigned __int8 (__thiscall **)(struct Mesh *))(*(_DWORD *)v27 + 32))(v27) )
          {
            v49 = 0;
            for ( j = 0; ; j += 64 )
            {
              v51 = *(_DWORD *)(v31 + 4);
              if ( !v51 || v49 >= (*(_DWORD *)(v31 + 8) - v51) >> 2 )
                break;
              v52 = *((_DWORD *)v64 + 1);
              v53 = (const void **)(*(_DWORD *)(v31 + 4) + 4 * v49);
              if ( !v52 || v49 >= (*((_DWORD *)v64 + 2) - v52) >> 6 )
                invalid_parameter_noinfo();
              qmemcpy((void *)(j + *((_DWORD *)v64 + 1)), *v53, 0x40u);
              v31 = (int)v59;
              ++v49;
            }
          }
          result = (struct Mesh *)sub_1001CB70(v60, v62, (int)&a9);
          qmemcpy(v61, result, 0x40u);
        }
      }
    }
  }
  return result;
}

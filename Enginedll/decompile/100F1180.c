/*
 * func-name: ?DrawSimpleNonFFP@StaticModel@@IAEXPAVCamera@@PAUModelFrame@@PAVShader@@VMatrix@@@Z
 * func-address: 0x100f1180
 * callers: 0x100f1180, 0x100f1550
 * callees: 0x1000d780, 0x1001cb70, 0x10021240, 0x10076ef0, 0x1009dd90, 0x100a1b10, 0x100ee360, 0x100f1180, 0x100f1a90, 0x10121350, 0x101216e0, 0x10124d90
 */

struct Mesh *__thiscall StaticModel::DrawSimpleNonFFP(
        StaticModel *this,
        struct Camera *a2,
        ModelFrame *a3,
        Shader *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20)
{
  struct Mesh *result; // eax
  struct Mesh *v23; // ebp
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // esi
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  void (__thiscall **v35)(struct Mesh *, Shader *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // esi
  _DWORD *v36; // eax
  int v37; // edx
  int v38; // eax
  void (__thiscall *v39)(struct Mesh *, Shader *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // edx
  void (__thiscall **v40)(struct Mesh *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // esi
  _DWORD *v41; // eax
  unsigned int v42; // ebx
  int j; // ebp
  int v44; // ecx
  int v45; // ecx
  const void **v46; // esi
  _DWORD v47[20]; // [esp-34h] [ebp-B0h] BYREF
  char *v48; // [esp+1Ch] [ebp-60h]
  void *v49; // [esp+20h] [ebp-5Ch]
  struct Mesh *v50; // [esp+24h] [ebp-58h]
  _DWORD *v51; // [esp+28h] [ebp-54h]
  _DWORD *v52; // [esp+2Ch] [ebp-50h]
  float v53[18]; // [esp+30h] [ebp-4Ch] BYREF
  int v54; // [esp+78h] [ebp-4h]
  struct Camera *i; // [esp+80h] [ebp+4h]
  ModelFrame *v56; // [esp+84h] [ebp+8h]

  v54 = -1;
  result = (struct Mesh *)NtCurrentTeb()->NtTib.ExceptionList;
  LODWORD(v53[17]) = &loc_101AFBDD;
  LODWORD(v53[16]) = result;
  if ( a3 )
  {
    qmemcpy(v47, &a5, 0x40u);
    StaticModel::DrawSimpleNonFFP(
      this,
      a2,
      *((_DWORD *)a3 + 90),
      a4,
      v47[0],
      v47[1],
      v47[2],
      v47[3],
      v47[4],
      v47[5],
      v47[6],
      v47[7],
      v47[8],
      v47[9],
      v47[10],
      v47[11],
      v47[12],
      v47[13],
      v47[14],
      v47[15]);
    qmemcpy(v47, &a5, 0x40u);
    StaticModel::DrawSimpleNonFFP(
      this,
      a2,
      *((_DWORD *)a3 + 89),
      a4,
      v47[0],
      v47[1],
      v47[2],
      v47[3],
      v47[4],
      v47[5],
      v47[6],
      v47[7],
      v47[8],
      v47[9],
      v47[10],
      v47[11],
      v47[12],
      v47[13],
      v47[14],
      v47[15]);
    result = ModelFrame::GetMesh(a3, 0);
    if ( result )
    {
      if ( !*((_BYTE *)result + 2524) )
      {
        result = StaticModel::ChooseLOD(this, a2, a3);
        v23 = result;
        if ( result )
        {
          v49 = (char *)a3 + 164;
          Shader::SetWorld(a4, (ModelFrame *)((char *)a3 + 164));
          v50 = (ModelFrame *)((char *)a3 + 228);
          Shader::SetOldWVP(a4, (ModelFrame *)((char *)a3 + 228));
          v24 = *((_DWORD *)a3 + 110);
          v56 = (ModelFrame *)((char *)a3 + 436);
          if ( v24 )
            v25 = (*((_DWORD *)a3 + 111) - v24) >> 6;
          else
            v25 = 0;
          v26 = *((_DWORD *)a3 + 106);
          v27 = (int)a3 + 420;
          v48 = (char *)a3 + 420;
          if ( v26 )
            v28 = (*((_DWORD *)a3 + 107) - v26) >> 2;
          else
            v28 = 0;
          if ( v25 != v28 )
          {
            v29 = std::vector<Model *>::size((_DWORD *)a3 + 105);
            sub_100F1A90((int)a3 + 436, v29);
          }
          v30 = 0;
          for ( i = 0; ; i = (struct Camera *)((char *)i + 20) )
          {
            v31 = *((_DWORD *)v23 + 620);
            if ( !v31 || v30 >= (*((_DWORD *)v23 + 621) - v31) / 20 )
              break;
            v32 = *((_DWORD *)v23 + 620);
            if ( !v32 || v30 >= (*((_DWORD *)v23 + 621) - v32) / 20 )
              invalid_parameter_noinfo();
            v33 = (*(int (__thiscall **)(struct Mesh *, _DWORD))(*(_DWORD *)v23 + 108))(
                    v23,
                    *(_DWORD *)((char *)i + *((_DWORD *)v23 + 620)));
            if ( !v33 || !**(_BYTE **)(*(_DWORD *)(v33 + 256) + 60) && !**(_BYTE **)(*(_DWORD *)(v33 + 260) + 60) )
            {
              v34 = *(_DWORD *)(v27 + 4);
              if ( v34 && (*(_DWORD *)(v27 + 8) - v34) >> 2 )
              {
                v51 = &v47[12];
                sub_1000D780(&v47[12], (int)v56);
                v52 = &v47[8];
                v54 = 0;
                std::vector<Matrix *>::vector<Matrix *>(&v47[8], v27);
                v35 = (void (__thiscall **)(struct Mesh *, Shader *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v23 + 92);
                v36 = (_DWORD *)std::vector<AttributeRange>::operator[]((_DWORD *)v23 + 619, v30);
                v47[3] = *v36;
                v47[4] = v36[1];
                v47[5] = v36[2];
                v37 = v36[3];
                v38 = v36[4];
                v47[6] = v37;
                v39 = *v35;
                v54 = -1;
                v39(
                  v23,
                  a4,
                  v47[3],
                  v47[4],
                  v47[5],
                  v47[6],
                  v38,
                  v47[8],
                  v47[9],
                  v47[10],
                  v47[11],
                  v47[12],
                  v47[13],
                  v47[14],
                  v47[15]);
              }
              else
              {
                Shader::SetMBSkinning(a4, 0, 0, 0, 0);
              }
              (*(void (__stdcall **)(_DWORD))(**((_DWORD **)a4 + 4) + 260))(*((_DWORD *)a4 + 4));
              v40 = (void (__thiscall **)(struct Mesh *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v23 + 60);
              v41 = (_DWORD *)std::vector<AttributeRange>::operator[]((_DWORD *)v23 + 619, v30);
              (*v40)(v23, *v41, v41[1], v41[2], v41[3], v41[4]);
              v27 = (int)v48;
            }
            ++v30;
          }
          if ( (*(unsigned __int8 (__thiscall **)(struct Mesh *))(*(_DWORD *)v23 + 32))(v23) )
          {
            v42 = 0;
            for ( j = 0; ; j += 64 )
            {
              v44 = *(_DWORD *)(v27 + 4);
              if ( !v44 || v42 >= (*(_DWORD *)(v27 + 8) - v44) >> 2 )
                break;
              v45 = *((_DWORD *)v56 + 1);
              v46 = (const void **)(*(_DWORD *)(v27 + 4) + 4 * v42);
              if ( !v45 || v42 >= (*((_DWORD *)v56 + 2) - v45) >> 6 )
                invalid_parameter_noinfo();
              qmemcpy((void *)(j + *((_DWORD *)v56 + 1)), *v46, 0x40u);
              v27 = (int)v48;
              ++v42;
            }
          }
          result = (struct Mesh *)sub_1001CB70(v49, v53, (int)&a5);
          qmemcpy(v50, result, 0x40u);
        }
      }
    }
  }
  return result;
}

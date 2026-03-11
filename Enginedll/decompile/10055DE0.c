/*
 * func-name: ?QueueBatchItem@BatchRenderer@@AAEXPAUBatchItem@@PAVSortTree@@1@Z
 * func-address: 0x10055de0
 * callers: 0x100566a0, 0x10056930
 * callees: 0x10052ae0, 0x10055320, 0x10059bd0, 0x1005b520, 0x1005b6b0, 0x1005d900, 0x10076ef0, 0x100dd790, 0x100e3150, 0x100e31f0, 0x101189f0
 */

void __thiscall BatchRenderer::QueueBatchItem(
        BatchRenderer *this,
        struct BatchItem *a2,
        struct SortTree *a3,
        struct SortTree *a4)
{
  BatchRenderer *v4; // ebx
  unsigned int v5; // edi
  bool v6; // zf
  void (__cdecl *v9)(); // ebp
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ebp
  int v14; // ebx
  int v15; // ecx
  struct RenderDevice *v16; // eax
  int v17; // ecx
  struct BatchItem *v18; // edx
  int v19; // ecx
  int v20; // eax
  BatchRenderer *v21; // eax
  struct BatchItem *NewBatchItem; // edi
  int v23; // ebp
  _DWORD *v24; // edx
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // ebp
  int v28; // eax
  int v29; // ecx
  int v30; // ecx
  unsigned int v31; // ebp
  unsigned int v32; // ebp
  int v33; // eax
  char *v34; // edx
  int v35; // ecx
  unsigned int v36; // ebp
  unsigned int v37; // ebp
  int v38; // eax
  char **v39; // ecx
  unsigned int v40; // ebp
  unsigned int v41; // ebp
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  char v46; // [esp-1Ch] [ebp-44h] BYREF
  int v47; // [esp-18h] [ebp-40h]
  int v48; // [esp-14h] [ebp-3Ch]
  int v49; // [esp-10h] [ebp-38h]
  int v50; // [esp-Ch] [ebp-34h]
  int v51; // [esp-8h] [ebp-30h]
  int v52; // [esp-4h] [ebp-2Ch]
  int v53; // [esp+10h] [ebp-18h]
  _DWORD *Technique; // [esp+14h] [ebp-14h]
  int v55; // [esp+18h] [ebp-10h]
  int v56; // [esp+1Ch] [ebp-Ch]
  char *v57; // [esp+20h] [ebp-8h]
  BatchRenderer *v58; // [esp+24h] [ebp-4h]
  unsigned int v59; // [esp+2Ch] [ebp+4h]

  v4 = this;
  v5 = 0;
  v6 = *((_DWORD *)this + 2) == 0;
  v58 = this;
  if ( v6 )
  {
    v57 = &v46;
    std::string::string(&v46, "black");
    *((_DWORD *)v4 + 2) = Material::GetTechnique(v46, v47, v48, v49, v50, v51, v52);
  }
  v57 = 0;
  v53 = (int)a2;
  v59 = 0;
  v9 = invalid_parameter_noinfo;
  if ( std::vector<Model *>::size(a2) )
  {
    while ( 1 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)a2 + 23) + 20))(*((_DWORD *)a2 + 23))
        && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)a2 + 23) + 24))(*((_DWORD *)a2 + 23)) )
      {
        goto LABEL_10;
      }
      v10 = *((_DWORD *)a2 + 1);
      if ( !v10 || v5 >= (*((_DWORD *)a2 + 2) - v10) >> 2 )
        v9();
      v6 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a2 + 1) + 4 * v5) + 1432) == 1;
      LOBYTE(v56) = 1;
      if ( !v6 )
LABEL_10:
        LOBYTE(v56) = 0;
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)a2 + 23) + 12))(*((_DWORD *)a2 + 23)) )
        goto LABEL_16;
      v11 = *((_DWORD *)a2 + 1);
      if ( !v11 || v5 >= (*((_DWORD *)a2 + 2) - v11) >> 2 )
        v9();
      v6 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a2 + 1) + 4 * v5) + 1432) == 1;
      LOBYTE(v55) = 1;
      if ( !v6 )
LABEL_16:
        LOBYTE(v55) = 0;
      v12 = *((_DWORD *)a2 + 1);
      if ( !v12 || v5 >= (*((_DWORD *)a2 + 2) - v12) >> 2 )
        v9();
      v13 = *((_DWORD *)a2 + 1);
      v14 = 4 * v5;
      if ( !v13 || v5 >= (*((_DWORD *)a2 + 2) - v13) >> 2 )
        invalid_parameter_noinfo();
      Technique = (_DWORD *)Material::GetTechnique(
                              *((_DWORD *)a2 + 13),
                              *(_DWORD *)(*(_DWORD *)(v14 + *((_DWORD *)a2 + 1)) + 1428),
                              v56,
                              *(unsigned __int8 *)(*(_DWORD *)(v14 + v13) + 1420),
                              v55);
      if ( !Technique )
        goto LABEL_80;
      v15 = *((_DWORD *)a2 + 1);
      if ( !v15 || v5 >= (*((_DWORD *)a2 + 2) - v15) >> 2 )
        invalid_parameter_noinfo();
      if ( *(_BYTE *)(*(_DWORD *)(v14 + *((_DWORD *)a2 + 1)) + 1420) )
      {
        v16 = RenderDevice::Instance();
        if ( !(*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v16 + 108))(v16) )
          goto LABEL_80;
      }
      v17 = *((_DWORD *)a2 + 1);
      if ( !v17 || v5 >= (*((_DWORD *)a2 + 2) - v17) >> 2 )
        invalid_parameter_noinfo();
      if ( !Light::IsVisible(*(Light **)(*((_DWORD *)a2 + 1) + 4 * v5)) )
      {
LABEL_80:
        v40 = *((_DWORD *)a2 + 1);
        if ( v40 > *((_DWORD *)a2 + 2) )
          invalid_parameter_noinfo();
        v41 = v14 + v40;
        if ( v41 > *((_DWORD *)a2 + 2) || v41 < *((_DWORD *)a2 + 1) )
          invalid_parameter_noinfo();
        v42 = (int)(*((_DWORD *)a2 + 2) - (v41 + 4)) >> 2;
        if ( v42 > 0 )
          memmove_s((void *const)v41, 4 * v42, (const void *const)(v41 + 4), 4 * v42);
        *((_DWORD *)a2 + 2) -= 4;
        --v5;
        goto LABEL_88;
      }
      if ( (int)v5 <= 0 )
        break;
      if ( (char *)*Technique == v57 )
      {
        v18 = (struct BatchItem *)v53;
        v19 = *(_DWORD *)(v53 + 4);
        v20 = v19 ? (*(_DWORD *)(v53 + 8) - v19) >> 2 : 0;
        if ( (unsigned int)(v20 + 1) <= Technique[1] )
          goto LABEL_67;
      }
      v21 = BatchRenderer::Instance();
      NewBatchItem = BatchRenderer::GetNewBatchItem(v21);
      v23 = *((_DWORD *)NewBatchItem + 4);
      sub_1005D900(a2);
      v24 = Technique;
      v52 = 0;
      v51 = 1;
      *((_DWORD *)NewBatchItem + 4) = v23;
      *((_DWORD *)NewBatchItem + 69) = v24;
      sub_10059BD0((int)NewBatchItem, v51, v52);
      v25 = *((_DWORD *)a2 + 1);
      if ( !v25 || v59 >= (*((_DWORD *)a2 + 2) - v25) >> 2 )
        invalid_parameter_noinfo();
      v26 = *((_DWORD *)NewBatchItem + 1);
      v27 = (_DWORD *)(v14 + *((_DWORD *)a2 + 1));
      if ( !v26 || !((*((_DWORD *)NewBatchItem + 2) - v26) >> 2) )
        invalid_parameter_noinfo();
      **((_DWORD **)NewBatchItem + 1) = *v27;
      v28 = *((_DWORD *)NewBatchItem + 69);
      if ( !*(_BYTE *)(v28 + 81) || *(_BYTE *)(v28 + 84) )
      {
        v29 = *((_DWORD *)a2 + 1);
        if ( !v29 || v59 >= (*((_DWORD *)a2 + 2) - v29) >> 2 )
          invalid_parameter_noinfo();
        if ( !*(_BYTE *)(*(_DWORD *)(v14 + *((_DWORD *)a2 + 1)) + 1420) )
          sub_1005B6B0(NewBatchItem);
      }
      if ( *(_BYTE *)(*((_DWORD *)NewBatchItem + 69) + 81) )
        goto LABEL_57;
      v30 = *((_DWORD *)a2 + 1);
      if ( !v30 || v59 >= (*((_DWORD *)a2 + 2) - v30) >> 2 )
        invalid_parameter_noinfo();
      if ( *(_BYTE *)(*(_DWORD *)(v14 + *((_DWORD *)a2 + 1)) + 1420) )
LABEL_57:
        sub_1005B6B0(NewBatchItem);
      v31 = *((_DWORD *)a2 + 1);
      if ( v31 > *((_DWORD *)a2 + 2) )
        invalid_parameter_noinfo();
      v32 = v14 + v31;
      if ( v32 > *((_DWORD *)a2 + 2) || v32 < *((_DWORD *)a2 + 1) )
        invalid_parameter_noinfo();
      v33 = (int)(*((_DWORD *)a2 + 2) - (v32 + 4)) >> 2;
      if ( v33 > 0 )
        memmove_s((void *const)v32, 4 * v33, (const void *const)(v32 + 4), 4 * v33);
      *((_DWORD *)a2 + 2) -= 4;
      v34 = (char *)*Technique;
      v53 = (int)NewBatchItem;
      v5 = v59 - 1;
      v57 = v34;
LABEL_88:
      v59 = ++v5;
      v9 = invalid_parameter_noinfo;
      if ( v5 >= std::vector<Model *>::size(a2) )
      {
        v4 = v58;
        goto LABEL_90;
      }
    }
    v18 = (struct BatchItem *)v53;
LABEL_67:
    if ( v18 == a2 )
    {
      v39 = (char **)Technique;
      *((_DWORD *)a2 + 69) = Technique;
      v57 = *v39;
    }
    else
    {
      v35 = *((_DWORD *)a2 + 1);
      if ( !v35 || v5 >= (*((_DWORD *)a2 + 2) - v35) >> 2 )
        invalid_parameter_noinfo();
      sub_10052AE0((_DWORD *)v53, (int *)(v14 + *((_DWORD *)a2 + 1)));
      v36 = *((_DWORD *)a2 + 1);
      if ( v36 > *((_DWORD *)a2 + 2) )
        invalid_parameter_noinfo();
      v37 = v14 + v36;
      if ( v37 > *((_DWORD *)a2 + 2) || v37 < *((_DWORD *)a2 + 1) )
        invalid_parameter_noinfo();
      v38 = (int)(*((_DWORD *)a2 + 2) - (v37 + 4)) >> 2;
      if ( v38 > 0 )
        memmove_s((void *const)v37, 4 * v38, (const void *const)(v37 + 4), 4 * v38);
      *((_DWORD *)a2 + 2) -= 4;
      --v5;
      v57 = (char *)*Technique;
    }
    goto LABEL_88;
  }
LABEL_90:
  v43 = *((_DWORD *)a2 + 1);
  if ( !v43 || !((*((_DWORD *)a2 + 2) - v43) >> 2) )
  {
    *((_DWORD *)a2 + 69) = *((_DWORD *)v4 + 2);
    *((_DWORD *)a2 + 13) = *((_DWORD *)v4 + 263);
  }
  v44 = *((_DWORD *)a2 + 69);
  if ( (!*(_BYTE *)(v44 + 81) || *(_BYTE *)(v44 + 84))
    && (!v43 || !((*((_DWORD *)a2 + 2) - v43) >> 2) || !*(_BYTE *)(**((_DWORD **)a2 + 1) + 1420)) )
  {
    sub_1005B6B0(a2);
  }
  if ( *(_BYTE *)(*((_DWORD *)a2 + 69) + 81)
    || (v45 = *((_DWORD *)a2 + 1)) == 0
    || !((*((_DWORD *)a2 + 2) - v45) >> 2)
    || *(_BYTE *)(**((_DWORD **)a2 + 1) + 1420) )
  {
    sub_1005B6B0(a2);
  }
}

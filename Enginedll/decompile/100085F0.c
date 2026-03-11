/*
 * func-name: sub_100085F0
 * func-address: 0x100085f0
 * callers: none
 * callees: 0x10003130, 0x10003a50, 0x10006780, 0x1000dc10, 0x10011750, 0x10013650, 0x1004ea90, 0x1007ec70, 0x100a1d10, 0x100e6830
 */

char __thiscall sub_100085F0(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, unsigned int a9)
{
  unsigned int v10; // esi
  void *v11; // ebp
  bool v12; // cc
  int v13; // eax
  struct Editor *v14; // eax
  unsigned int v15; // ebx
  char *v16; // edi
  unsigned int v17; // ebp
  const char *v18; // eax
  FILE *v19; // eax
  FILE *v20; // ebx
  int *v22; // edi
  _DWORD *v23; // edi
  int v24; // ebp
  void (__cdecl *v25)(); // ebp
  unsigned int j; // ebx
  int v27; // ecx
  unsigned int i; // esi
  int v29; // ecx
  unsigned int v30; // ebx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  unsigned int k; // ebx
  int v37; // ecx
  int v38; // ecx
  _DWORD *v39; // ebp
  int v40; // edi
  int v41; // eax
  int v42; // edi
  int v43; // ecx
  void (__cdecl *v44)(); // ebp
  int v45; // ecx
  struct Actor **v46; // edi
  int v47; // ecx
  int v48; // ecx
  _DWORD *v49; // ebp
  unsigned int v50; // ebx
  int v51; // edi
  unsigned int v52; // eax
  int v53; // edi
  unsigned int v54; // edx
  _DWORD *v55; // eax
  void *v56; // ebx
  int v57; // ecx
  int v58; // ecx
  _DWORD *v59; // edi
  int v60; // ecx
  int v61; // edi
  unsigned int v62; // ebx
  int v63; // edi
  unsigned int v64; // ebp
  int v65; // eax
  _BYTE v66[24]; // [esp+4h] [ebp-64h] BYREF
  const char *v67; // [esp+1Ch] [ebp-4Ch]
  int *v68; // [esp+30h] [ebp-38h]
  unsigned int v69; // [esp+34h] [ebp-34h]
  unsigned int v70; // [esp+38h] [ebp-30h]
  int Buffer; // [esp+3Ch] [ebp-2Ch] BYREF
  int v72; // [esp+40h] [ebp-28h]
  void *Destination[2]; // [esp+44h] [ebp-24h] BYREF
  int v74; // [esp+4Ch] [ebp-1Ch] BYREF
  _BYTE v75[8]; // [esp+54h] [ebp-14h] BYREF
  int v76; // [esp+64h] [ebp-4h]

  v68 = (int *)this;
  v10 = a9;
  *(_DWORD *)(this + 92) = a9;
  *(_BYTE *)(this + 44) = *(_BYTE *)(v10 + 724);
  v67 = &a2;
  v76 = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  std::string::operator=(this + 60, v67);
  v11 = *(void **)(this + 20);
  if ( *(_DWORD *)(this + 16) > (unsigned int)v11 )
    invalid_parameter_noinfo();
  v12 = *(_DWORD *)(this + 16) <= *(_DWORD *)(this + 20);
  Destination[0] = *(void **)(this + 16);
  if ( !v12 )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase((int)Destination, this + 12, Destination[0], this + 12, v11);
  v13 = *(_DWORD *)(this + 92);
  if ( v13 && *(_DWORD *)(v13 + 3792) )
  {
    Destination[0] = v66;
    std::string::string(v66, "Parsing Scene File");
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)(this + 92) + 3792))(0.0);
  }
  std::string::operator=(*(_DWORD *)(this + 92) + 3188, &a2);
  v14 = Editor::Instance();
  v15 = *((_DWORD *)v14 + 567);
  v16 = (char *)v14 + 2260;
  if ( *((_DWORD *)v14 + 566) > v15 )
    invalid_parameter_noinfo();
  v17 = *((_DWORD *)v16 + 1);
  if ( v17 > *((_DWORD *)v16 + 2) )
    invalid_parameter_noinfo();
  sub_10013650(Destination, v16, v17, v16, v15);
  v67 = "rb";
  v18 = (const char *)std::string::c_str(&a2);
  v19 = fopen(v18, v67);
  v20 = v19;
  if ( !v19 )
  {
LABEL_13:
    v76 = -1;
    std::string::~string(&a2);
    return 0;
  }
  v22 = v68;
  fread(v68 + 14, 4u, 1u, v19);
  fread(v22 + 22, 4u, 1u, v20);
  fread(v22 + 12, 4u, 1u, v20);
  sub_10003130(v22, v20, (World **)&a9);
  v23 = v22 + 7;
  sub_10003A50(v68, v20, v23);
  Buffer = 0;
  fread(&Buffer, 4u, 1u, v20);
  v24 = 0;
  if ( Buffer > 0 )
  {
    while ( 1 )
    {
      if ( v68[23] )
      {
        a9 = 0;
        if ( !sub_10006780((ILoad *)v68, v20, (int *)&a9) )
          break;
      }
      if ( ++v24 >= Buffer )
        goto LABEL_18;
    }
    fclose(v20);
    for ( i = 0; ; ++i )
    {
      v29 = v23[1];
      if ( !v29 || i >= (v23[2] - v29) >> 2 )
        break;
      Material::Release(*(Material **)(v23[1] + 4 * i));
    }
    goto LABEL_13;
  }
LABEL_18:
  fclose(v20);
  v25 = invalid_parameter_noinfo;
  for ( j = 0; ; ++j )
  {
    v27 = v23[1];
    if ( !v27 || j >= (v23[2] - v27) >> 2 )
      break;
    Material::Release(*(Material **)(v23[1] + 4 * j));
  }
  v30 = 0;
  a9 = 0;
  while ( 1 )
  {
    v31 = *(_DWORD *)(v10 + 3224);
    if ( !v31 || v30 >= (*(_DWORD *)(v10 + 3228) - v31) >> 2 )
      break;
    v70 = 0;
    v72 = 0;
    while ( 1 )
    {
      v32 = *(_DWORD *)(v10 + 3224);
      if ( !v32 || v30 >= (*(_DWORD *)(v10 + 3228) - v32) >> 2 )
        v25();
      v33 = *(_DWORD *)(4 * v30 + *(_DWORD *)(v10 + 3224));
      v34 = *(_DWORD *)(v33 + 404);
      v35 = v33 + 400;
      if ( !v34 || v70 >= (*(_DWORD *)(v35 + 8) - v34) / 28 )
        break;
      for ( k = 0; ; ++k )
      {
        v37 = *(_DWORD *)(v10 + 3224);
        if ( !v37 || k >= (*(_DWORD *)(v10 + 3228) - v37) >> 2 )
          break;
        v38 = *(_DWORD *)(v10 + 3224);
        v39 = (_DWORD *)(v38 + 4 * k);
        if ( !v38 || a9 >= (*(_DWORD *)(v10 + 3228) - v38) >> 2 )
          invalid_parameter_noinfo();
        v40 = *(_DWORD *)(4 * a9 + *(_DWORD *)(v10 + 3224));
        v41 = *(_DWORD *)(v40 + 404);
        v42 = v40 + 400;
        if ( !v41 || v70 >= (*(_DWORD *)(v42 + 8) - v41) / 28 )
          invalid_parameter_noinfo();
        if ( (unsigned __int8)std::operator==<char>(v72 + *(_DWORD *)(v42 + 4), *v39 + 444) )
        {
          v43 = *(_DWORD *)(v10 + 3224);
          v69 = k;
          if ( v43 && k < (*(_DWORD *)(v10 + 3228) - v43) >> 2 )
          {
            v44 = invalid_parameter_noinfo;
          }
          else
          {
            v44 = invalid_parameter_noinfo;
            invalid_parameter_noinfo();
          }
          v45 = *(_DWORD *)(v10 + 3224);
          v46 = (struct Actor **)(4 * k + v45);
          Destination[0] = (void *)(4 * k);
          if ( !v45 || a9 >= (*(_DWORD *)(v10 + 3228) - v45) >> 2 )
            v44();
          if ( !Actor::HasOnOcclusionList(*(Actor **)(4 * a9 + *(_DWORD *)(v10 + 3224)), *v46) )
          {
            v47 = *(_DWORD *)(v10 + 3224);
            if ( !v47 || k >= (*(_DWORD *)(v10 + 3228) - v47) >> 2 )
              v44();
            v48 = *(_DWORD *)(v10 + 3224);
            v49 = (char *)Destination[0] + v48;
            v50 = a9;
            if ( !v48 || a9 >= (*(_DWORD *)(v10 + 3228) - v48) >> 2 )
              invalid_parameter_noinfo();
            v51 = *(_DWORD *)(*(_DWORD *)(v10 + 3224) + 4 * v50);
            v52 = *(_DWORD *)(v51 + 388);
            v53 = v51 + 384;
            if ( v52 )
              v54 = (int)(*(_DWORD *)(v53 + 8) - v52) >> 2;
            else
              v54 = 0;
            if ( v52 && v54 < (int)(*(_DWORD *)(v53 + 12) - v52) >> 2 )
            {
              v55 = *(_DWORD **)(v53 + 8);
              *v55 = *v49;
              *(_DWORD *)(v53 + 8) = v55 + 1;
            }
            else
            {
              v56 = *(void **)(v53 + 8);
              if ( v52 > (unsigned int)v56 )
                invalid_parameter_noinfo();
              std::vector<Actor *>::insert((int)&v74, v53, v56, (int)v49);
              v50 = a9;
            }
            v57 = *(_DWORD *)(v10 + 3224);
            if ( !v57 || v50 >= (*(_DWORD *)(v10 + 3228) - v57) >> 2 )
              invalid_parameter_noinfo();
            v58 = *(_DWORD *)(v10 + 3224);
            v59 = (_DWORD *)(4 * v50 + v58);
            if ( !v58 || v69 >= (*(_DWORD *)(v10 + 3228) - v58) >> 2 )
              invalid_parameter_noinfo();
            *(_DWORD *)(*(_DWORD *)((char *)Destination[0] + *(_DWORD *)(v10 + 3224)) + 380) = *v59;
          }
          break;
        }
      }
      ++v70;
      v72 += 28;
      v30 = a9;
      v25 = invalid_parameter_noinfo;
    }
    v60 = *(_DWORD *)(v10 + 3224);
    if ( !v60 || v30 >= (*(_DWORD *)(v10 + 3228) - v60) >> 2 )
      v25();
    v61 = *(_DWORD *)(4 * v30 + *(_DWORD *)(v10 + 3224));
    v62 = *(_DWORD *)(v61 + 408);
    v63 = v61 + 400;
    if ( *(_DWORD *)(v63 + 4) > v62 )
      v25();
    v64 = *(_DWORD *)(v63 + 4);
    if ( v64 > *(_DWORD *)(v63 + 8) )
      invalid_parameter_noinfo();
    sub_1000DC10(v75, v63, v64, v63, v62);
    v30 = ++a9;
    v25 = invalid_parameter_noinfo;
  }
  v65 = v68[23];
  if ( v65 && *(_DWORD *)(v65 + 3792) )
  {
    a9 = (unsigned int)v66;
    std::string::string(v66, "Caching Scene Resources");
    (*(void (__cdecl **)(_DWORD))(v68[23] + 3792))(60.0);
  }
  v76 = -1;
  std::string::~string(&a2);
  return 1;
}

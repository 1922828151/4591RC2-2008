/*
 * func-name: ?Break@MeshOps@@UAE_NPAVMesh@@PAVActor@@AAV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@@Z
 * func-address: 0x100ea5d0
 * callers: none
 * callees: 0x1000d4b0, 0x1000d550, 0x1000d680, 0x10011750, 0x100117e0, 0x1002aac0, 0x10051b50, 0x1007ec70, 0x10086a00, 0x100977a0, 0x1009d930, 0x1009ed40, 0x1009ee50, 0x101189f0, 0x101a24ac, 0x101a2500, 0x101a2534, 0x101a253a
 */

char __stdcall MeshOps::Break(_DWORD *a1, struct World **a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  unsigned int v5; // edi
  int v7; // eax
  int v8; // eax
  int *v9; // eax
  int v10; // edx
  int v11; // ebp
  int v12; // esi
  int v13; // edi
  struct RenderDevice *v14; // eax
  _DWORD *v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // esi
  int v18; // ebp
  _WORD *v19; // edx
  _DWORD *v20; // ecx
  int v21; // ebp
  int v22; // eax
  char *v23; // edi
  int v24; // edi
  Prefab *v25; // eax
  Prefab *v26; // edi
  void (__thiscall *v27)(struct World **, Prefab *, _DWORD); // eax
  int v28; // edx
  _DWORD *v29; // ecx
  ModelFrame **v30; // eax
  int v31; // edx
  void (__cdecl *v32)(); // ebp
  struct Editor *v33; // eax
  struct Editor *v34; // eax
  struct Editor *v35; // esi
  int v36; // eax
  char *v37; // esi
  Editor *v38; // eax
  struct Editor *v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // edx
  Prefab **v42; // eax
  char *v43; // edi
  _DWORD v44[3]; // [esp+18h] [ebp-A8h] BYREF
  int *v45; // [esp+24h] [ebp-9Ch]
  int v46; // [esp+38h] [ebp-88h]
  int v47; // [esp+3Ch] [ebp-84h]
  unsigned int v48; // [esp+40h] [ebp-80h]
  int v49; // [esp+44h] [ebp-7Ch] BYREF
  int v50; // [esp+48h] [ebp-78h] BYREF
  struct Mesh *v51; // [esp+4Ch] [ebp-74h]
  int v52; // [esp+50h] [ebp-70h] BYREF
  int v53; // [esp+54h] [ebp-6Ch]
  int v54; // [esp+58h] [ebp-68h]
  int v55; // [esp+5Ch] [ebp-64h] BYREF
  int v56; // [esp+60h] [ebp-60h] BYREF
  int v57; // [esp+68h] [ebp-58h] BYREF
  int v58; // [esp+70h] [ebp-50h] BYREF
  void *v59; // [esp+74h] [ebp-4Ch]
  void *Source; // [esp+78h] [ebp-48h]
  int v61; // [esp+7Ch] [ebp-44h]
  int v62; // [esp+80h] [ebp-40h] BYREF
  void *v63; // [esp+84h] [ebp-3Ch]
  int v64; // [esp+88h] [ebp-38h]
  int v65; // [esp+8Ch] [ebp-34h]
  int v66; // [esp+90h] [ebp-30h] BYREF
  void *v67; // [esp+94h] [ebp-2Ch]
  int v68; // [esp+98h] [ebp-28h]
  int v69; // [esp+9Ch] [ebp-24h]
  int v70; // [esp+A0h] [ebp-20h]
  int v71; // [esp+B0h] [ebp-10h]
  int v72; // [esp+BCh] [ebp-4h]

  v3 = a1;
  v4 = a1[620];
  v5 = 0;
  if ( v4 && (unsigned int)((a1[621] - v4) / 20) >= 2 )
  {
    (*(void (__thiscall **)(_DWORD *))(*a1 + 120))(a1);
    (*(void (__thiscall **)(_DWORD *))(*a1 + 116))(a1);
    v54 = (*(int (__thiscall **)(_DWORD *, int *))(*a1 + 128))(a1, &v50);
    v53 = (*(int (__thiscall **)(_DWORD *, int *))(*a1 + 136))(a1, &v52);
    HIBYTE(v46) = v52 == 4;
    v48 = 0;
    v47 = 0;
    while ( 1 )
    {
      v7 = v3[620];
      if ( !v7 || v5 >= (v3[621] - v7) / 20 )
        break;
      v8 = v3[620];
      if ( !v8 || v5 >= (v3[621] - v8) / 20 )
        invalid_parameter_noinfo();
      v9 = (int *)(v47 + v3[620]);
      v10 = v9[4];
      v11 = v9[1];
      v12 = v9[2];
      v13 = v9[3];
      v70 = *v9;
      v71 = v10;
      v14 = RenderDevice::Instance();
      v51 = (struct Mesh *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v14 + 8))(v14);
      v55 = 2 * (HIBYTE(v46) != 0) + 2;
      v15 = operator new(3 * v12 * v55);
      v16 = 0;
      v17 = 3 * v12;
      if ( v17 )
      {
        v18 = 3 * v11;
        v19 = (_WORD *)(v53 + 2 * v18);
        v20 = (_DWORD *)(v53 + 4 * v18);
        do
        {
          if ( HIBYTE(v46) )
            v15[v16] = *v20 - v13;
          else
            *((_WORD *)v15 + v16) = *v19 - v13;
          ++v16;
          ++v20;
          ++v19;
        }
        while ( v16 < v17 );
      }
      v59 = 0;
      v21 = v54 + v50 * v13;
      Source = 0;
      v61 = 0;
      v72 = 0;
      v22 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 108))(a1, v70);
      v23 = (char *)Source;
      v49 = v22;
      if ( v59 && ((_BYTE *)Source - (_BYTE *)v59) >> 2 < (unsigned int)((v61 - (int)v59) >> 2) )
      {
        *(_DWORD *)Source = v49;
        Source = v23 + 4;
      }
      else
      {
        if ( v59 > Source )
          invalid_parameter_noinfo();
        std::vector<Material *>::insert(&v58, &v56, &v58, v23, &v49);
      }
      v49 = (int)v44;
      std::vector<Material *>::vector<Material *>(v44, (int)&v58);
      v24 = v71;
      if ( !(*(unsigned __int8 (__thiscall **)(struct Mesh *, int, _DWORD *, int, int, int, unsigned int, _DWORD, _DWORD, _DWORD, int *))(*(_DWORD *)v51 + 72))(
              v51,
              v21,
              v15,
              v50,
              v55,
              v71,
              v17,
              v44[0],
              v44[1],
              v44[2],
              v45) )
        SeriousWarning("Mesh split failed with %d verts and %d inds", v24, v17);
      operator delete[](v15);
      v25 = (Prefab *)operator new(0x494u);
      v55 = (int)v25;
      LOBYTE(v72) = 1;
      if ( v25 )
        v26 = Prefab::Prefab(v25, a2[178]);
      else
        v26 = 0;
      v27 = (void (__thiscall *)(struct World **, Prefab *, _DWORD))*((_DWORD *)*a2 + 21);
      LOBYTE(v72) = 0;
      v27(a2, v26, 0);
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v28 = *((_DWORD *)v26 + 179);
      v45 = &v62;
      v29 = *(_DWORD **)(v28 + 308);
      LOBYTE(v72) = 2;
      ModelFrame::EnumerateMeshes(v29, (int)&v62);
      v30 = (ModelFrame **)v63;
      if ( !v63 )
        goto LABEL_32;
      v31 = v64;
      if ( (unsigned int)((v64 - (int)v63) >> 2) > 1 )
      {
        SeriousWarning("MeshOps::Break: >1 frames. This should not have happened");
        v31 = v64;
        v30 = (ModelFrame **)v63;
      }
      if ( v30 && (v31 - (int)v30) >> 2 )
      {
        v32 = invalid_parameter_noinfo;
      }
      else
      {
LABEL_32:
        v32 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
        v30 = (ModelFrame **)v63;
      }
      ModelFrame::SetMesh(*v30, v51, 0);
      ModelFrame::FixNames(*(ModelFrame ***)(*((_DWORD *)v26 + 179) + 308), a2[178], 1);
      v33 = Editor::Instance();
      std::vector<Actor *>::vector<Actor *>(&v66, (int)v33 + 2244);
      LOBYTE(v72) = 3;
      v34 = Editor::Instance();
      std::vector<Actor *>::resize((_DWORD *)v34 + 561, 1u, 0);
      v35 = Editor::Instance();
      v36 = *((_DWORD *)v35 + 562);
      v37 = (char *)v35 + 2244;
      if ( !v36 || !((*((_DWORD *)v37 + 2) - v36) >> 2) )
        v32();
      **((_DWORD **)v37 + 1) = v26;
      v38 = Editor::Instance();
      Editor::CombineSelectedOnly(v38);
      v45 = &v66;
      v39 = Editor::Instance();
      std::vector<Actor *>::operator=((int)v39 + 2244, (int)v45);
      v40 = a3[1];
      v55 = (int)v26;
      if ( v40 )
        v41 = (int)(a3[2] - v40) >> 2;
      else
        v41 = 0;
      if ( v40 && v41 < (int)(a3[3] - v40) >> 2 )
      {
        v42 = (Prefab **)a3[2];
        *v42 = v26;
        a3[2] = v42 + 1;
      }
      else
      {
        v43 = (char *)a3[2];
        if ( v40 > (unsigned int)v43 )
          v32();
        std::vector<Actor *>::insert(a3, &v57, a3, v43, &v55);
      }
      if ( v67 )
        operator delete(v67);
      v67 = 0;
      v68 = 0;
      v69 = 0;
      if ( v63 )
        operator delete(v63);
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v72 = -1;
      if ( v59 )
        operator delete(v59);
      ++v48;
      v47 += 20;
      v3 = a1;
      v5 = v48;
      v59 = 0;
      Source = 0;
      v61 = 0;
    }
    (*(void (__thiscall **)(_DWORD *))(*v3 + 140))(v3);
    (*(void (__thiscall **)(_DWORD *))(*v3 + 132))(v3);
    if ( a2 )
      (*((void (__thiscall **)(struct World **, int))*a2 + 20))(a2, 1);
    return 1;
  }
  else
  {
    SeriousWarning("MeshOps::Break: Mesh only has one subattribute/submaterial, nothing to break!\n"
                   "This function breaks subelements into seperate meshes.");
    return 0;
  }
}

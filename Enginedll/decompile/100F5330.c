/*
 * func-name: ?CreateNewInstance@Model@@UAEXPAVStaticModel@@_N1@Z
 * func-address: 0x100f5330
 * callers: none
 * callees: 0x10031350, 0x1009db20, 0x1009f940, 0x100ee890, 0x100f1970, 0x100f1b70, 0x100f2ca0, 0x101a2534
 */

void __userpurge Model::CreateNewInstance(
        Model *this@<ecx>,
        int a2@<edi>,
        int a3@<esi>,
        struct StaticModel *a4,
        BOOL a5,
        bool a6)
{
  struct StaticModel *v7; // ebx
  int v8; // ecx
  ModelFrame *v9; // ecx
  _DWORD *v10; // ecx
  Model *v11; // eax
  Model *v12; // eax
  BOOL v13; // ecx
  int v14; // ebp
  void (__thiscall *v15)(int, Model *, BOOL, _DWORD); // edx
  const char *v16; // eax
  struct StaticModel *ModelFromCache; // eax
  struct StaticModel *v18; // esi
  int v19[20]; // [esp-40h] [ebp-60h] BYREF
  int v20; // [esp+10h] [ebp-10h] BYREF
  int v21; // [esp+1Ch] [ebp-4h]

  if ( *((_DWORD *)this + 2) )
  {
    v7 = a4;
    if ( *((_DWORD *)a4 + 36) )
    {
      v8 = *((_DWORD *)a4 + 36);
      if ( v8 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 12))(v8, 1);
      *((_DWORD *)v7 + 36) = 0;
    }
    Model::operator=((int)v7, (int)this);
    v9 = (ModelFrame *)*((_DWORD *)this + 77);
    if ( v9 )
      *((_DWORD *)v7 + 77) = ModelFrame::Clone(v9, a2, a3, v7, a5, 1);
    if ( *((_DWORD *)this + 94) )
      Model::InitializeAnimationSystem(v7, (int)v7, a2, *((struct ID3DXAnimationController **)this + 94));
    if ( *((_DWORD *)v7 + 77) )
    {
      v20 = (int)v19;
      qmemcpy(v19, (char *)v7 + 224, 0x40u);
      ModelFrame::UpdateMatrices(
        *((_DWORD **)v7 + 77),
        v19[0],
        v19[1],
        v19[2],
        v19[3],
        v19[4],
        v19[5],
        v19[6],
        v19[7],
        v19[8],
        v19[9],
        v19[10],
        v19[11],
        v19[12],
        v19[13],
        v19[14],
        v19[15]);
    }
    v19[15] = (int)&v20;
    v10 = (_DWORD *)*((_DWORD *)this + 2);
    v20 = (int)v7;
    sub_100F1970(v10, &v20);
    if ( *((_DWORD *)this + 36) )
    {
      v11 = (Model *)operator new(0x1C8u);
      v20 = (int)v11;
      v21 = 0;
      if ( v11 )
        v12 = Model::Model(v11);
      else
        v12 = 0;
      v13 = a5;
      *((_DWORD *)v7 + 36) = v12;
      v14 = *((_DWORD *)this + 36);
      v15 = *(void (__thiscall **)(int, Model *, BOOL, _DWORD))(*(_DWORD *)v14 + 24);
      v21 = -1;
      v15(v14, v12, v13, 0);
    }
    sub_100F1970(&dword_11240DA0, (int *)&a4);
    *((_BYTE *)v7 + 139) = a6;
  }
  else
  {
    v16 = (const char *)std::string::c_str((char *)this + 320);
    ModelFromCache = StaticModel::FindModelFromCache(v16);
    if ( ModelFromCache )
    {
      v18 = a4;
      (*(void (__thiscall **)(struct StaticModel *, struct StaticModel *, BOOL, _DWORD))(*(_DWORD *)ModelFromCache + 24))(
        ModelFromCache,
        a4,
        a5,
        0);
      *((_BYTE *)v18 + 139) = a6;
    }
    else
    {
      *((_BYTE *)a4 + 139) = a6;
    }
  }
}

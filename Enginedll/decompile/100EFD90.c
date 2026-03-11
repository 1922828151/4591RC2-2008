/*
 * func-name: ?CreateNewInstance@StaticModel@@UAEXPAV1@_N1@Z
 * func-address: 0x100efd90
 * callers: none
 * callees: 0x1002d2e0, 0x1009f940, 0x100f1970, 0x100f2ca0, 0x101a2534
 */

void __thiscall StaticModel::CreateNewInstance(StaticModel *this, struct StaticModel *a2, BOOL a3, Model *a4)
{
  struct StaticModel *v4; // esi
  char v5; // bl
  int v7; // ecx
  ModelFrame *v8; // ecx
  BOOL v9; // ebx
  Model *v10; // eax
  Model *v11; // eax

  v4 = a2;
  v5 = *((_BYTE *)a2 + 138);
  if ( *((_DWORD *)a2 + 36) )
  {
    v7 = *((_DWORD *)a2 + 36);
    if ( v7 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, 1);
    *((_DWORD *)v4 + 36) = 0;
  }
  StaticModel::operator=((int)v4, (int)this);
  *((_BYTE *)v4 + 138) = v5;
  v8 = (ModelFrame *)*((_DWORD *)this + 77);
  v9 = a3;
  if ( v8 )
    *((_DWORD *)v4 + 77) = ModelFrame::Clone(v8, (int)this, (int)v4, v4, a3, 1);
  sub_100F1970(*((_DWORD *)this + 2), (int)&a2);
  sub_100F1970((int)&unk_11240DA0, (int)&a2);
  *((_BYTE *)v4 + 139) = (_BYTE)a4;
  if ( *((_DWORD *)this + 36) )
  {
    v10 = (Model *)operator new(0x1C8u);
    a4 = v10;
    if ( v10 )
      v11 = Model::Model(v10);
    else
      v11 = 0;
    *((_DWORD *)v4 + 36) = v11;
    (*(void (__thiscall **)(_DWORD, Model *, BOOL, _DWORD))(**((_DWORD **)this + 36) + 24))(
      *((_DWORD *)this + 36),
      v11,
      v9,
      0);
  }
}

/*
 * func-name: ?InitializeAnimationSystem@Model@@IAEXPAUID3DXAnimationController@@@Z
 * func-address: 0x100f1b70
 * callers: 0x1003dda0, 0x100f2d50, 0x100f2f70, 0x100f4f00, 0x100f4f50, 0x100f5330
 * callees: 0x100977a0, 0x1009dc50, 0x1009dc90, 0x10178176
 */

void __userpurge Model::InitializeAnimationSystem(
        Model *this@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        struct ID3DXAnimationController *a4)
{
  ModelFrame *v5; // ecx
  const char *v6; // eax
  int v7; // eax
  struct ID3DXAnimationController **v8; // edi
  struct ID3DXAnimationController *v9; // eax
  int v10; // [esp+18h] [ebp-40h]
  int v11; // [esp+1Ch] [ebp-3Ch]
  int v12; // [esp+24h] [ebp-34h]
  char *v13; // [esp+28h] [ebp-30h]
  _DWORD v15[4]; // [esp+40h] [ebp-18h] BYREF
  double v16; // [esp+50h] [ebp-8h]
  int retaddr; // [esp+58h] [ebp+0h]

  v5 = (ModelFrame *)*((_DWORD *)this + 77);
  if ( v5 )
  {
    v7 = ModelFrame::CountFrames(v5);
    v8 = (struct ID3DXAnimationController **)((char *)this + 376);
    v13 = (char *)this + 376;
    v12 = *((_DWORD *)this + 112);
    v11 = *((_DWORD *)this + 113);
    v10 = v7 + 1;
    if ( a4 )
    {
      (*(void (__stdcall **)(struct ID3DXAnimationController *, int, int, int, int, char *, int, int))(*(_DWORD *)a4 + 164))(
        a4,
        v10,
        v11,
        v12,
        v12,
        v13,
        a3,
        a2);
    }
    else
    {
      D3DXCreateAnimationController(v10, v11, v12, v12, v13, a3, a2);
      v9 = *v8;
      *(float *)&v15[1] = 0.0;
      *(float *)&v15[2] = 1.0;
      v15[0] = 1;
      retaddr = 1;
      v16 = 0.0;
      (*(void (__stdcall **)(struct ID3DXAnimationController *, _DWORD, _DWORD *))(*(_DWORD *)v9 + 92))(v9, 0, v15);
    }
    (*(void (__stdcall **)(struct ID3DXAnimationController *, _DWORD))(*(_DWORD *)*v8 + 52))(
      *v8,
      COERCE_UNSIGNED_INT64(0.009999999776482582));
    ModelFrame::Register(*((ModelFrame **)this + 77), *v8);
    ModelFrame::RegisterSkinMatrices(*((ModelFrame **)this + 77), *((struct ModelFrame **)this + 77));
  }
  else
  {
    v6 = (const char *)std::string::c_str((char *)this + 320);
    SeriousWarning("%s load failed, yet InitializeAnimationSystem was called", v6);
  }
}

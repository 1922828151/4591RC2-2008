/*
 * func-name: ?RegisterSkinMatrices@ModelFrame@@QAEXPAU1@@Z
 * func-address: 0x1009f6b0
 * callers: 0x1009f6b0, 0x100f1b70
 * callees: 0x1002ebe0, 0x10057ee0, 0x1009da50, 0x1009f6b0
 */

void __thiscall ModelFrame::RegisterSkinMatrices(ModelFrame *this, struct ModelFrame *a2)
{
  int v3; // ecx
  _DWORD *v4; // ecx
  int v5; // ecx
  int i; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  const char *v13; // eax
  ModelFrame *v14; // ecx
  ModelFrame *v15; // ecx
  int v16; // [esp+8h] [ebp-48h] BYREF
  _BYTE v17[28]; // [esp+Ch] [ebp-44h] BYREF
  _BYTE v18[28]; // [esp+28h] [ebp-28h] BYREF
  int v19; // [esp+4Ch] [ebp-4h]

  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 2) - v3) >> 2 )
    {
      v4 = (_DWORD *)*((_DWORD *)this + 1);
      if ( *v4 )
      {
        v5 = v4 && (*((_DWORD *)this + 2) - (int)v4) >> 2 ? **((_DWORD **)this + 1) : 0;
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) )
        {
          std::vector<Model *>::clear((_DWORD *)this + 105);
          for ( i = 0; ; ++i )
          {
            v7 = *((_DWORD *)this + 1);
            if ( v7 && (*((_DWORD *)this + 2) - v7) >> 2 )
              v8 = **((_DWORD **)this + 1);
            else
              v8 = 0;
            if ( i >= (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) )
              break;
            v9 = *((_DWORD *)this + 1);
            if ( v9 && (*((_DWORD *)this + 2) - v9) >> 2 )
              v10 = **((_DWORD **)this + 1);
            else
              v10 = 0;
            v11 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v10 + 48))(v10, v18, i);
            v19 = 0;
            v12 = std::string::c_str(v11);
            std::string::string(v17, v12);
            LOBYTE(v19) = 2;
            std::string::~string(v18);
            v13 = (const char *)std::string::c_str(v17);
            v16 = (int)ModelFrame::Find(a2, v13, 0) + 164;
            std::vector<Matrix *>::push_back((_DWORD *)this + 105, &v16);
            v19 = -1;
            std::string::~string(v17);
          }
        }
      }
    }
  }
  v14 = (ModelFrame *)*((_DWORD *)this + 89);
  if ( v14 )
    ModelFrame::RegisterSkinMatrices(v14, a2);
  v15 = (ModelFrame *)*((_DWORD *)this + 90);
  if ( v15 )
    ModelFrame::RegisterSkinMatrices(v15, a2);
}

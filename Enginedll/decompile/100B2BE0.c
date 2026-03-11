/*
 * func-name: ?StopMotion@CTYDialog@@UAEXH@Z
 * func-address: 0x100b2be0
 * callers: none
 * callees: 0x100af0a0, 0x100d5710, 0x100d5750, 0x100d6d20
 */

void __thiscall CTYDialog::StopMotion(CTYDialog *this, unsigned __int8 a2)
{
  unsigned __int8 v2; // di
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // eax
  int *v8; // edi
  int v9; // eax
  int v10; // ebx
  void (__stdcall *v11)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD); // eax
  int v12; // eax
  void (__stdcall *v13)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD); // eax
  double v14; // st7
  void (__stdcall *v15)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD); // eax
  struct GUISystem *v16; // eax
  CGUIWindow *v17; // eax
  struct GUISystem *v18; // eax
  CGUIWindow *v19; // eax
  int v20; // eax
  void (__stdcall *v21)(CTYDialog *, int, int, int, _DWORD, _DWORD); // edx
  int v22; // ecx
  void (__stdcall *v23)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD); // eax
  double v24; // st7
  double v25; // st7
  void (__stdcall *v26)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD); // eax
  int v27; // [esp+10h] [ebp-8h]
  int v28; // [esp+14h] [ebp-4h]

  v2 = a2;
  if ( (*((_BYTE *)this + 3772) & a2 & 2) != 0 )
  {
    v4 = *((_DWORD *)this + 954);
    *((_DWORD *)this + 175) = *((_DWORD *)this + 953);
    *((_DWORD *)this + 176) = v4;
    v5 = *((_DWORD *)this + 956);
    v6 = 0;
    if ( v5 )
      v28 = (*((_DWORD *)this + 957) - v5) / 20;
    else
      v28 = 0;
    if ( v28 > 0 )
    {
      v27 = 0;
      do
      {
        v7 = *((_DWORD *)this + 956);
        if ( !v7 || v6 >= (*((_DWORD *)this + 957) - v7) / 20 )
          invalid_parameter_noinfo();
        v8 = (int *)(v27 + *((_DWORD *)this + 956));
        v9 = *v8;
        if ( *v8 >= 0 && v9 < *((_DWORD *)this + 192) )
        {
          v10 = *(_DWORD *)(*((_DWORD *)this + 191) + 4 * v9);
          if ( v10 )
          {
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 156))(v10, v8[1], v8[2]);
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 160))(v10, v8[3], v8[4]);
          }
        }
        v27 += 20;
        ++v6;
      }
      while ( (int)v6 < v28 );
      v2 = a2;
    }
    v11 = (void (__stdcall *)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD))*((_DWORD *)this + 184);
    *((_DWORD *)this + 943) ^= 2u;
    if ( v11 )
      v11(this, 5122, 0, 0, 2, 0);
  }
  if ( (*((_BYTE *)this + 3772) & v2 & 4) != 0 )
  {
    v12 = *((_DWORD *)this + 950);
    *((_DWORD *)this + 173) = *((_DWORD *)this + 949);
    *((_DWORD *)this + 174) = v12;
    CTYDialog::MoveNestedDialog(this);
    v13 = (void (__stdcall *)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD))*((_DWORD *)this + 184);
    *((_DWORD *)this + 943) ^= 4u;
    if ( v13 )
      v13(this, 5122, 0, 0, 4, 0);
  }
  if ( (v2 & *((_BYTE *)this + 3772) & 8) != 0 )
  {
    v14 = *((float *)this + 24);
    *((_DWORD *)this + 943) ^= 8u;
    *((float *)this + 23) = v14;
    v15 = (void (__stdcall *)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD))*((_DWORD *)this + 184);
    if ( v15 )
      v15(this, 5122, 0, 0, 8, 0);
  }
  if ( (*((_BYTE *)this + 3772) & v2 & 0x10) != 0 )
  {
    v16 = GUISystem::Instance();
    v17 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v16 + 76))(v16, this);
    if ( v17 )
    {
      if ( CGUIWindow::GetVisible(v17) )
      {
        v18 = GUISystem::Instance();
        v19 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v18 + 76))(v18, this);
        if ( v19 )
        {
          if ( (*((_BYTE *)this + 3836) & 4) != 0 )
          {
            CGUIWindow::SetVisible(v19, 0);
            CTYDialog::m_bModuleDlgEnabled = 0;
          }
          else
          {
            CGUIWindow::SetVisible(v19, 0);
          }
          v20 = *((int *)this + 192) > 0 ? **((_DWORD **)this + 191) : 0;
          v21 = (void (__stdcall *)(CTYDialog *, int, int, int, _DWORD, _DWORD))*((_DWORD *)this + 184);
          if ( v21 )
          {
            if ( v20 )
              v22 = *(_DWORD *)(v20 + 136);
            else
              v22 = 0;
            v21(this, 24, v22, v20, 0, 0);
          }
        }
      }
    }
    v23 = (void (__stdcall *)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD))*((_DWORD *)this + 184);
    v24 = *((float *)this + 24);
    *((_DWORD *)this + 943) ^= 0x10u;
    *((float *)this + 23) = v24;
    if ( v23 )
      v23(this, 5122, 0, 0, 16, 0);
  }
  if ( (v2 & *((_BYTE *)this + 3772) & 0x20) != 0 )
  {
    v25 = *((float *)this + 24);
    *((_DWORD *)this + 943) ^= 0x20u;
    *((float *)this + 23) = v25;
    v26 = (void (__stdcall *)(CTYDialog *, int, _DWORD, _DWORD, int, _DWORD))*((_DWORD *)this + 184);
    if ( v26 )
      v26(this, 5122, 0, 0, 32, 0);
  }
  if ( !*((_DWORD *)this + 943) )
    *((_DWORD *)this + 944) = 1;
}

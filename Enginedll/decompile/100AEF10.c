/*
 * func-name: ?ShowDialog@CTYDialog@@QAE_N_NM@Z
 * func-address: 0x100aef10
 * callers: 0x10149510, 0x10149580, 0x101495d0, 0x10149640, 0x10149930, 0x101499c0, 0x10149d00, 0x1014da70, 0x1014dc70, 0x1014de70, 0x10150d40, 0x1015b760, 0x1015b9f0
 * callees: 0x100d5710, 0x100d5750, 0x100d6d20
 */

char __thiscall CTYDialog::ShowDialog(CTYDialog *this, bool a2, float a3)
{
  struct GUISystem *v4; // eax
  CGUIWindow *v5; // eax
  bool Visible; // al
  struct GUISystem *v8; // eax
  CGUIWindow *v9; // eax
  CGUIWindow *v10; // edi
  float v11; // edx
  void (__thiscall *v12)(CTYDialog *); // eax
  int v13; // edx
  void (__thiscall *v14)(CTYDialog *); // eax
  int v15; // eax
  void (__stdcall *v16)(CTYDialog *, int, _DWORD, int, bool, _DWORD); // edx

  v4 = GUISystem::Instance();
  v5 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v4 + 76))(v4, this);
  if ( v5 )
    Visible = CGUIWindow::GetVisible(v5);
  else
    Visible = 0;
  if ( Visible == a2 )
    return 1;
  v8 = GUISystem::Instance();
  v9 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v8 + 76))(v8, this);
  v10 = v9;
  if ( v9 )
  {
    if ( (*((_BYTE *)this + 3836) & 4) == 0 )
    {
      CGUIWindow::SetVisible(v9, a2);
      if ( a3 <= 0.0 )
        goto LABEL_19;
      (*(void (__thiscall **)(CTYDialog *, int))(*(_DWORD *)this + 36))(this, 24);
      v13 = *(_DWORD *)this;
      *((float *)this + 945) = a3;
      v14 = *(void (__thiscall **)(CTYDialog *))(v13 + 32);
      *((_BYTE *)this + 3868) = 0;
      *((_DWORD *)this + 943) = 8 * !a2 + 8;
      v14(this);
      if ( !a2 )
        CGUIWindow::SetVisible(v10, 1);
LABEL_17:
      if ( a3 > 0.0 && !a2 )
        return 1;
LABEL_19:
      if ( *((int *)this + 192) > 0 )
        v15 = **((_DWORD **)this + 191);
      else
        v15 = 0;
      v16 = (void (__stdcall *)(CTYDialog *, int, _DWORD, int, bool, _DWORD))*((_DWORD *)this + 184);
      if ( v16 )
      {
        if ( v15 )
        {
          v16(this, 24, *(_DWORD *)(v15 + 136), v15, a2, 0);
          return 1;
        }
        v16(this, 24, 0, 0, a2, 0);
      }
      return 1;
    }
    if ( !a2 || !CTYDialog::m_bModuleDlgEnabled )
    {
      CGUIWindow::SetVisible(v9, a2);
      if ( a3 > 0.0 )
      {
        (*(void (__thiscall **)(CTYDialog *, int))(*(_DWORD *)this + 36))(this, 24);
        v11 = *(float *)this;
        *((float *)this + 945) = a3;
        v12 = *(void (__thiscall **)(CTYDialog *))(LODWORD(v11) + 32);
        *((_BYTE *)this + 3868) = 0;
        *((_DWORD *)this + 943) = 8 * !a2 + 8;
        v12(this);
        if ( !a2 )
          CGUIWindow::SetVisible(v10, 1);
      }
      CTYDialog::m_bModuleDlgEnabled = a2;
      goto LABEL_17;
    }
  }
  return 0;
}

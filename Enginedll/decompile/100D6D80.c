/*
 * func-name: ?SetToBottom@GUISystem@@UAEXPAVCGUIWindow@@@Z
 * func-address: 0x100d6d80
 * callers: none
 * callees: 0x100d9ad0
 */

void __thiscall GUISystem::SetToBottom(GUISystem *this, struct CGUIWindow *a2)
{
  struct CREControl *v3; // eax
  struct CREControl *v4; // eax
  unsigned int v5; // edi
  char *v6; // esi
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ebp
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // edi
  int v13; // [esp+10h] [ebp-8h] BYREF

  if ( (*(int (__thiscall **)(GUISystem *, int))(*(_DWORD *)this + 68))(this, 1) )
  {
    v3 = CREDialog::s_pControlFocus;
    if ( CREDialog::s_pControlFocus )
    {
      *((_BYTE *)CREDialog::s_pControlFocus + 91) = 0;
      *((_BYTE *)v3 + 92) = 0;
    }
    v4 = CREDialog::s_pControlPressed;
    if ( CREDialog::s_pControlPressed )
    {
      *((_BYTE *)CREDialog::s_pControlPressed + 91) = 0;
      *((_BYTE *)v4 + 92) = 0;
    }
  }
  v5 = 0;
  v6 = (char *)this + 16;
  while ( 1 )
  {
    v7 = *((_DWORD *)v6 + 1);
    if ( !v7 || v5 >= (*((_DWORD *)v6 + 2) - v7) >> 2 )
      break;
    v8 = *((_DWORD *)v6 + 1);
    if ( *(struct CGUIWindow **)(v8 + 4 * v5) == a2 )
    {
      v9 = *((_DWORD *)v6 + 1);
      if ( v8 > *((_DWORD *)v6 + 2) )
        invalid_parameter_noinfo();
      v10 = v9 + 4 * v5;
      if ( v10 > *((_DWORD *)v6 + 2) || v10 < *((_DWORD *)v6 + 1) )
        invalid_parameter_noinfo();
      v11 = (int)(*((_DWORD *)v6 + 2) - (v10 + 4)) >> 2;
      if ( v11 > 0 )
        memmove_s((void *const)v10, 4 * v11, (const void *const)(v10 + 4), 4 * v11);
      *((_DWORD *)v6 + 2) -= 4;
      break;
    }
    ++v5;
  }
  v12 = (void *)*((_DWORD *)v6 + 1);
  if ( (unsigned int)v12 > *((_DWORD *)v6 + 2) )
    invalid_parameter_noinfo();
  sub_100D9AD0((int)&v13, (int)v6, v12, (int)&a2);
}

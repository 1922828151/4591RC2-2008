/*
 * func-name: ?ShowDialog@CDlgMgr@@QAE_NH_N0M@Z
 * func-address: 0x10149d00
 * callers: none
 * callees: 0x100a7900, 0x100a7990, 0x100aef10, 0x100d6d20, 0x1014e940
 */

char __thiscall CDlgMgr::ShowDialog(CDlgMgr *this, char a2, bool a3, bool a4, float a5)
{
  char *v6; // esi
  int *v7; // eax
  int v8; // edi
  int v9; // ebx
  void (__cdecl *v10)(); // esi
  int v12; // esi
  bool v13; // bl
  struct GUISystem *v14; // ebx
  struct GUISystem *v15; // ebp
  void (__thiscall **v16)(struct GUISystem *, int); // edi
  int v17; // eax
  int v19; // [esp+18h] [ebp-Ch]
  _BYTE v20[8]; // [esp+1Ch] [ebp-8h] BYREF

  v6 = (char *)this + 8;
  v7 = (int *)sub_1014E940(v20, &a2);
  v8 = *v7;
  v9 = v7[1];
  v19 = *((_DWORD *)v6 + 1);
  if ( *v7 && (char *)v8 == v6 )
  {
    v10 = invalid_parameter_noinfo;
  }
  else
  {
    v10 = invalid_parameter_noinfo;
    invalid_parameter_noinfo();
  }
  if ( v9 == v19 )
    return 0;
  if ( !v8 )
    v10();
  if ( v9 == *(_DWORD *)(v8 + 4) )
    v10();
  v12 = *(_DWORD *)(v9 + 16);
  v13 = a3;
  if ( (*(_BYTE *)(v12 + 3836) & 4) != 0 )
  {
    if ( a3 && *((_BYTE *)this + 129) )
      return 0;
    *((_BYTE *)this + 129) = a3;
    *((_DWORD *)this + 33) = *(_DWORD *)(v12 + 88);
  }
  CTYDialog::ShowDialog((CTYDialog *)v12, v13, a5);
  CTYDialog::SetHasInput((CTYDialog *)v12, a4);
  if ( !v13 )
    CTYDialog::SetCorruptAct((CTYDialog *)v12, 0);
  if ( *(_DWORD *)(v12 + 168) != 3 )
    goto LABEL_20;
  if ( v13 )
  {
    ++*((_DWORD *)this + 34);
LABEL_20:
    if ( v13 )
    {
      v14 = GUISystem::Instance();
      v15 = GUISystem::Instance();
      v16 = (void (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v15 + 60);
      v17 = (*(int (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v14 + 76))(v14, v12);
      (*v16)(v15, v17);
    }
    return 1;
  }
  if ( --*((_DWORD *)this + 34) >= 0 )
    return 1;
  *((_DWORD *)this + 34) = 0;
  return 1;
}

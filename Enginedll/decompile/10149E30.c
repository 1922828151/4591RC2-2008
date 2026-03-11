/*
 * func-name: ?BringToTop@CDlgMgr@@QAEXH@Z
 * func-address: 0x10149e30
 * callers: 0x100d75b0
 * callees: 0x100d6d20, 0x1014e940
 */

void __thiscall CDlgMgr::BringToTop(CDlgMgr *this, int a2)
{
  char *v2; // esi
  int *v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  void (__cdecl *v7)(); // esi
  int v8; // ebp
  struct GUISystem *v9; // edi
  struct GUISystem *v10; // ebx
  void (__thiscall **v11)(struct GUISystem *, int); // esi
  int v12; // eax
  _BYTE v13[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = (char *)this + 8;
  v3 = (int *)sub_1014E940(v13, &a2);
  v4 = *v3;
  v5 = v3[1];
  v6 = *((_DWORD *)v2 + 1);
  if ( *v3 && (char *)v4 == v2 )
  {
    v7 = invalid_parameter_noinfo;
  }
  else
  {
    v7 = invalid_parameter_noinfo;
    invalid_parameter_noinfo();
  }
  if ( v5 != v6 )
  {
    if ( !v4 )
      v7();
    if ( v5 == *(_DWORD *)(v4 + 4) )
      v7();
    v8 = *(_DWORD *)(v5 + 16);
    v9 = GUISystem::Instance();
    v10 = GUISystem::Instance();
    v11 = (void (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v10 + 60);
    v12 = (*(int (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v9 + 76))(v9, v8);
    (*v11)(v10, v12);
  }
}

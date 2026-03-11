/*
 * func-name: ?ClearAllDialog@CDlgMgr@@QAEXXZ
 * func-address: 0x10149c20
 * callers: none
 * callees: 0x100ce350, 0x100cedf0, 0x100d6d20, 0x101a2500
 */

void __thiscall CDlgMgr::ClearAllDialog(CDlgMgr *this)
{
  char *v1; // edi
  char *v2; // esi
  int v3; // ebp
  int v4; // ebx
  struct GUISystem *v5; // ebx
  struct GUISystem *v6; // ebp
  void (__thiscall **v7)(struct GUISystem *, int); // esi
  int v8; // eax
  _DWORD *v9; // ebx
  _DWORD *i; // esi
  _DWORD *v11; // eax
  int v12; // [esp+10h] [ebp-Ch]
  char *v13; // [esp+14h] [ebp-8h] BYREF
  int v14; // [esp+18h] [ebp-4h]

  v1 = (char *)this + 8;
  v2 = (char *)this + 8;
  v3 = **((_DWORD **)this + 3);
  v13 = (char *)this + 8;
  v14 = v3;
  while ( 1 )
  {
    v4 = *((_DWORD *)v1 + 1);
    if ( !v2 || v2 != v1 )
      invalid_parameter_noinfo();
    if ( v3 == v4 )
      break;
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( v3 == *((_DWORD *)v2 + 1) )
      invalid_parameter_noinfo();
    v12 = *(_DWORD *)(v3 + 16);
    if ( v12 )
    {
      v5 = GUISystem::Instance();
      v6 = GUISystem::Instance();
      v7 = (void (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v6 + 56);
      v8 = (*(int (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v5 + 76))(v5, v12);
      (*v7)(v6, v8);
    }
    sub_100CE350(&v13);
    v3 = v14;
    v2 = v13;
  }
  v9 = *(_DWORD **)(*((_DWORD *)v1 + 1) + 4);
  for ( i = v9; !*((_BYTE *)i + 21); v9 = i )
  {
    sub_100CEDF0((void **)i[2]);
    i = (_DWORD *)*i;
    operator delete(v9);
  }
  *(_DWORD *)(*((_DWORD *)v1 + 1) + 4) = *((_DWORD *)v1 + 1);
  v11 = (_DWORD *)*((_DWORD *)v1 + 1);
  *((_DWORD *)v1 + 2) = 0;
  *v11 = v11;
  *(_DWORD *)(*((_DWORD *)v1 + 1) + 8) = *((_DWORD *)v1 + 1);
}

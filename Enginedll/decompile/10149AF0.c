/*
 * func-name: ?RemoveDialog@CDlgMgr@@QAEPAVCTYDialog@@H@Z
 * func-address: 0x10149af0
 * callers: none
 * callees: 0x100cf040, 0x100d6d20, 0x1014e940
 */

struct CTYDialog *__thiscall CDlgMgr::RemoveDialog(CDlgMgr *this, struct GUISystem *a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  int v4; // ebp
  int v5; // ebx
  int v7; // ebx
  struct GUISystem *v8; // ebp
  struct GUISystem *v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  _DWORD *v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h]

  v2 = (_DWORD *)((char *)this + 8);
  sub_1014E940(&v13, &a2);
  v3 = (int)v13;
  v4 = v2[1];
  if ( !v13 || v13 != v2 )
    invalid_parameter_noinfo();
  v5 = v14;
  if ( v14 == v4 )
    return 0;
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v5 == *(_DWORD *)(v3 + 4) )
    invalid_parameter_noinfo();
  v7 = *(_DWORD *)(v5 + 16);
  v8 = GUISystem::Instance();
  v9 = GUISystem::Instance();
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)v8;
  a2 = v9;
  v12 = (*(int (__thiscall **)(struct GUISystem *, int))(v11 + 76))(v8, v7);
  (*(void (__thiscall **)(struct GUISystem *, int))(v10 + 56))(a2, v12);
  sub_100CF040(v2, &v13, (int)v13, v14);
  return (struct CTYDialog *)v7;
}

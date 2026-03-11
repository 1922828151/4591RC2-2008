/*
 * func-name: ?DlgOnRender@CDlgMgr@@QAE_NHM@Z
 * func-address: 0x1014a1b0
 * callers: none
 * callees: 0x1014e940
 */

char __thiscall CDlgMgr::DlgOnRender(CDlgMgr *this, char a2, float a3)
{
  char *v3; // esi
  char *v4; // edi
  int v5; // ebx
  int v6; // esi
  char *v8; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h]

  v3 = (char *)this + 24;
  sub_1014E940(&v8, &a2);
  v4 = v8;
  v5 = *((_DWORD *)v3 + 1);
  if ( !v8 || v8 != v3 )
    invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v5 )
    return 0;
  if ( !v4 )
    invalid_parameter_noinfo();
  if ( v6 == *((_DWORD *)v4 + 1) )
    invalid_parameter_noinfo();
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 16) + 8))(LODWORD(a3));
  return 1;
}

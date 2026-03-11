/*
 * func-name: ?AddUIController@CDlgMgr@@QAEXHPAVCUIController@@@Z
 * func-address: 0x1014a440
 * callers: none
 * callees: 0x1014e940, 0x1014f050
 */

void __thiscall CDlgMgr::AddUIController(CDlgMgr *this, int a2, struct CUIController *a3)
{
  char *v3; // esi
  char *v4; // edi
  int v5; // ebx
  int v6; // ebp
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // eax
  struct CUIController *v9; // ecx
  char *v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v3 = (char *)this + 24;
  sub_1014E940(&v10, &a2);
  v4 = v10;
  v5 = *((_DWORD *)v3 + 1);
  if ( !v10 || v10 != v3 )
    invalid_parameter_noinfo();
  v6 = v11;
  if ( v11 != v5 )
  {
    if ( !v4 )
      invalid_parameter_noinfo();
    if ( v6 == *((_DWORD *)v4 + 1) )
      invalid_parameter_noinfo();
    v7 = *(void (__thiscall ****)(_DWORD, int))(v6 + 16);
    if ( v7 )
      (**v7)(v7, 1);
  }
  v8 = (_DWORD *)sub_1014F050(&a2);
  v9 = a3;
  *v8 = a3;
  (*(void (__thiscall **)(struct CUIController *))(*(_DWORD *)v9 + 4))(v9);
}

/*
 * func-name: ?PostMessageA@CDlgMgr@@QAE_NHHHPAVCREControl@@@Z
 * func-address: 0x10149eb0
 * callers: 0x1015b9f0
 * callees: 0x100a9b20, 0x1014e940
 */

char __thiscall CDlgMgr::PostMessageA(CDlgMgr *this, char a2, int a3, int a4, struct CREControl *a5)
{
  char *v5; // esi
  char *v6; // edi
  int v7; // ebx
  int v8; // esi
  char *v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v5 = (char *)this + 8;
  sub_1014E940(&v10, &a2);
  v6 = v10;
  v7 = *((_DWORD *)v5 + 1);
  if ( !v10 || v10 != v5 )
    invalid_parameter_noinfo();
  v8 = v11;
  if ( v11 == v7 )
    return 0;
  if ( !v6 )
    invalid_parameter_noinfo();
  if ( v8 == *((_DWORD *)v6 + 1) )
    invalid_parameter_noinfo();
  if ( !a5 )
    CREDialog::GetControl(*(CREDialog **)(v8 + 16), 0);
  return 1;
}

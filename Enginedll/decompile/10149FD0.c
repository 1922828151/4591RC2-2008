/*
 * func-name: ?SetDlgPos@CDlgMgr@@QAE_NHHH@Z
 * func-address: 0x10149fd0
 * callers: none
 * callees: 0x100af0a0, 0x1014e940
 */

char __thiscall CDlgMgr::SetDlgPos(CDlgMgr *this, char a2, int a3, int a4)
{
  char *v4; // esi
  char *v5; // edi
  int v6; // ebx
  int v7; // esi
  CTYDialog *v9; // ecx
  int v10; // eax
  char *v11; // [esp+10h] [ebp-8h] BYREF
  int v12; // [esp+14h] [ebp-4h]

  v4 = (char *)this + 8;
  sub_1014E940(&v11, &a2);
  v5 = v11;
  v6 = *((_DWORD *)v4 + 1);
  if ( !v11 || v11 != v4 )
    invalid_parameter_noinfo();
  v7 = v12;
  if ( v12 == v6 )
    return 0;
  if ( !v5 )
    invalid_parameter_noinfo();
  if ( v7 == *((_DWORD *)v5 + 1) )
    invalid_parameter_noinfo();
  v9 = *(CTYDialog **)(v7 + 16);
  v10 = a4;
  *((_DWORD *)v9 + 173) = a3;
  *((_DWORD *)v9 + 174) = v10;
  CTYDialog::MoveNestedDialog(v9);
  return 1;
}

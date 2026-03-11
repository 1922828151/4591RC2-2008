/*
 * func-name: ?HideUIByType@CDlgMgr@@QAEXH@Z
 * func-address: 0x10149930
 * callers: 0x10149ba0, 0x10149bb0
 * callees: 0x100aef10, 0x100ce350
 */

void __thiscall CDlgMgr::HideUIByType(CDlgMgr *this, int a2)
{
  char *v2; // edi
  char *v3; // esi
  int v4; // ebp
  int v5; // ebx
  CTYDialog *v6; // ecx
  char *v7; // [esp+14h] [ebp-8h] BYREF
  int v8; // [esp+18h] [ebp-4h]

  v2 = (char *)this + 8;
  v3 = (char *)this + 8;
  v4 = **((_DWORD **)this + 3);
  v7 = (char *)this + 8;
  v8 = v4;
  while ( 1 )
  {
    v5 = *((_DWORD *)v2 + 1);
    if ( !v3 || v3 != v2 )
      invalid_parameter_noinfo();
    if ( v4 == v5 )
      break;
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v4 == *((_DWORD *)v3 + 1) )
      invalid_parameter_noinfo();
    v6 = *(CTYDialog **)(v4 + 16);
    if ( *((_DWORD *)v6 + 959) == a2 )
      CTYDialog::ShowDialog(v6, 0, 0.0);
    sub_100CE350(&v7);
    v4 = v8;
    v3 = v7;
  }
}

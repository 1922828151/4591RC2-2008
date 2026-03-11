/*
 * func-name: ?CancelByPlayer@CDlgMgr@@QAE_NXZ
 * func-address: 0x10149a60
 * callers: none
 * callees: 0x100a78a0, 0x100ce350
 */

char __thiscall CDlgMgr::CancelByPlayer(CDlgMgr *this)
{
  char *v1; // edi
  char *v2; // esi
  int v3; // ebp
  int v4; // ebx
  CTYDialog *v5; // esi
  char *v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v1 = (char *)this + 8;
  v2 = (char *)this + 8;
  v3 = **((_DWORD **)this + 3);
  v7 = (char *)this + 8;
  v8 = v3;
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
    v5 = *(CTYDialog **)(v3 + 16);
    if ( CTYDialog::GetVisible(v5) && (*(unsigned __int8 (__thiscall **)(CTYDialog *))(*(_DWORD *)v5 + 28))(v5) )
      return 1;
    sub_100CE350(&v7);
    v3 = v8;
    v2 = v7;
  }
  return 0;
}

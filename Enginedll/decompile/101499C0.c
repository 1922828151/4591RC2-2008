/*
 * func-name: ?HideAllUI@CDlgMgr@@QAEXXZ
 * func-address: 0x101499c0
 * callers: none
 * callees: 0x100a7900, 0x100aef10, 0x100ce350
 */

void __thiscall CDlgMgr::HideAllUI(CDlgMgr *this)
{
  char *v1; // edi
  char *v2; // esi
  int v3; // ebp
  int v4; // ebx
  CTYDialog *v5; // esi
  char *v7; // [esp+18h] [ebp-8h] BYREF
  int v8; // [esp+1Ch] [ebp-4h]

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
    CTYDialog::ShowDialog(v5, 0, 0.0);
    CTYDialog::SetHasInput(v5, 0);
    sub_100CE350(&v7);
    v3 = v8;
    v2 = v7;
  }
  *((_BYTE *)this + 129) = 0;
  *((_DWORD *)this + 34) = 0;
}

/*
 * func-name: ?GetDialog@CDlgMgr@@QAEPAVCTYDialog@@H@Z
 * func-address: 0x10149bc0
 * callers: 0x100af0a0, 0x100c5470, 0x100c9fa0, 0x100c9ff0, 0x100d64b0, 0x10149f20, 0x1014a120
 * callees: 0x1014e940
 */

struct CTYDialog *__thiscall CDlgMgr::GetDialog(CDlgMgr *this, int a2)
{
  char *v2; // esi
  char *v3; // edi
  int v4; // ebx
  int v5; // esi
  char *v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v2 = (char *)this + 8;
  sub_1014E940(&v7, &a2);
  v3 = v7;
  v4 = *((_DWORD *)v2 + 1);
  if ( !v7 || v7 != v2 )
    invalid_parameter_noinfo();
  v5 = v8;
  if ( v8 == v4 )
    return 0;
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v5 == *((_DWORD *)v3 + 1) )
    invalid_parameter_noinfo();
  return *(struct CTYDialog **)(v5 + 16);
}

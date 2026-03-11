/*
 * func-name: ?GetAllDialog@CDlgMgr@@QAEXAAV?$vector@PAVCTYDialog@@V?$allocator@PAVCTYDialog@@@std@@@std@@@Z
 * func-address: 0x1014a4c0
 * callers: none
 * callees: 0x100ce350, 0x1014f240
 */

void __thiscall CDlgMgr::GetAllDialog(_DWORD **this, int a2)
{
  _DWORD **v2; // edi
  _DWORD **v3; // esi
  _DWORD *v4; // ebp
  _DWORD *v5; // ebx
  int v6; // [esp+10h] [ebp-Ch] BYREF
  _DWORD **v7; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v8; // [esp+18h] [ebp-4h]

  v2 = this + 2;
  v3 = this + 2;
  v4 = (_DWORD *)*this[3];
  v7 = this + 2;
  v8 = v4;
  while ( 1 )
  {
    v5 = v2[1];
    if ( !v3 || v3 != v2 )
      invalid_parameter_noinfo();
    if ( v4 == v5 )
      break;
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v4 == v3[1] )
      invalid_parameter_noinfo();
    v6 = v4[4];
    if ( v6 )
      sub_1014F240(a2, (int)&v6);
    sub_100CE350(&v7);
    v4 = v8;
    v3 = v7;
  }
}

/*
 * func-name: ?process_element@Config2@Utility@Outpop@@IAEXPAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x100127d0
 * callers: 0x100126f0, 0x100127d0
 * callees: 0x10011100, 0x100127d0, 0x10013850
 */

void __thiscall Outpop::Utility::Config2::process_element(
        Outpop::Utility::Config2 *this,
        struct xercesc_2_5::DOMNode *a2)
{
  _DWORD *v3; // eax
  int v4; // eax
  Outpop::Utility::Config2 *v5; // ebp
  int v6; // ebx
  int v7; // esi
  unsigned int i; // ebp
  struct xercesc_2_5::DOMNode *v9; // eax
  Outpop::Utility::Config2 *v10; // [esp+18h] [ebp-40h] BYREF
  int v11; // [esp+1Ch] [ebp-3Ch]
  _DWORD *v12[3]; // [esp+20h] [ebp-38h] BYREF
  _BYTE v13[32]; // [esp+2Ch] [ebp-2Ch] BYREF
  int v14; // [esp+54h] [ebp-4h]

  v3 = (_DWORD *)(*(int (__thiscall **)(struct xercesc_2_5::DOMNode *))(*(_DWORD *)a2 + 40))(a2);
  v12[0] = &Outpop::Utility::XercescXMLItem_Warrp::`vftable';
  v12[1] = a2;
  v12[2] = v3;
  v14 = 1;
  v4 = sub_10011100(v12, (int)v13);
  LOBYTE(v14) = 2;
  sub_10013850(&v10, v4);
  LOBYTE(v14) = 1;
  std::string::~string(v13);
  v5 = v10;
  v6 = *((_DWORD *)this + 2);
  if ( !v10 || v10 != (Outpop::Utility::Config2 *)((char *)this + 4) )
    invalid_parameter_noinfo();
  if ( v11 != v6 )
  {
    if ( !v5 )
      invalid_parameter_noinfo();
    if ( v11 == *((_DWORD *)v5 + 1) )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(v11 + 36) + 4))(*(_DWORD *)(v11 + 36), v12);
  }
  v7 = (*(int (__thiscall **)(struct xercesc_2_5::DOMNode *))(*(_DWORD *)a2 + 20))(a2);
  for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7); ++i )
  {
    v9 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v7 + 4))(v7, i);
    Outpop::Utility::Config2::process_element(this, v9);
  }
}

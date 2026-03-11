/*
 * func-name: ?process_element@Config@Utility@Outpop@@IAEXPAVDOMNode@xercesc_2_5@@AAVConfig_Paser@23@@Z
 * func-address: 0x100122b0
 * callers: 0x100122b0, 0x10012390, 0x10012470
 * callees: 0x100122b0
 */

void __thiscall Outpop::Utility::Config::process_element(
        Outpop::Utility::Config *this,
        struct xercesc_2_5::DOMNode *a2,
        struct Outpop::Utility::Config_Paser *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // esi
  struct xercesc_2_5::DOMNode *v7; // eax
  _DWORD v8[6]; // [esp+14h] [ebp-18h] BYREF

  v4 = (*(int (__thiscall **)(struct xercesc_2_5::DOMNode *))(*(_DWORD *)a2 + 40))(a2);
  v5 = 0;
  v8[0] = &Outpop::Utility::XercescXMLItem_Warrp::`vftable';
  v8[1] = a2;
  v8[2] = v4;
  v8[5] = 1;
  (*(void (__thiscall **)(struct Outpop::Utility::Config_Paser *, _DWORD *))(*(_DWORD *)a3 + 4))(a3, v8);
  v6 = (*(int (__thiscall **)(struct xercesc_2_5::DOMNode *))(*(_DWORD *)a2 + 20))(a2);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) )
  {
    do
    {
      v7 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v6 + 4))(v6, v5);
      Outpop::Utility::Config::process_element(this, v7, a3);
      ++v5;
    }
    while ( v5 < (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) );
  }
}

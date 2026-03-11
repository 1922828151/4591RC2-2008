/*
 * func-name: ?validate_connector@Acceptor_Manager@Message@Outpop@@UAE_NAAV?$Smart_Ptr@VAcceptor@IONetwork@Outpop@@@Utility@3@AAVINET_Addr@IONetwork@3@HHAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@53@@Z
 * func-address: 0x1000e750
 * callers: none
 * callees: none
 */

char __thiscall Outpop::Message::Acceptor_Manager::validate_connector(
        _DWORD **this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  if ( this[11] )
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int, int, int, int))(*this[11] + 4))(
             this[11],
             *(_DWORD *)(*(_DWORD *)a2 + 12),
             *(_DWORD *)(*(_DWORD *)a2 + 8),
             *(_DWORD *)(*(_DWORD *)a2 + 16),
             a4,
             a5,
             a3,
             a6);
  else
    return 1;
}

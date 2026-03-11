/*
 * func-name: sub_1000E1B0
 * func-address: 0x1000e1b0
 * callers: none
 * callees: 0x1000ed90
 */

void __thiscall sub_1000E1B0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  struct Outpop::IONetwork::Acceptor_Config *v6; // edi
  _DWORD *v7; // esi
  struct Outpop::IONetwork::Acceptor_Config *v8; // ebx

  v6 = (struct Outpop::IONetwork::Acceptor_Config *)this[9];
  v7 = this + 8;
  if ( (unsigned int)v6 > this[10] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v8 = (struct Outpop::IONetwork::Acceptor_Config *)v7[2];
    if ( v7[1] > (unsigned int)v8 )
      invalid_parameter_noinfo();
    if ( v6 == v8 )
      break;
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    Outpop::Message::Acceptor_Manager::add_acceptor(*(Outpop::Message::Acceptor_Manager **)(this[7] + 28), v6);
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    v6 = (struct Outpop::IONetwork::Acceptor_Config *)((char *)v6 + 116);
  }
}

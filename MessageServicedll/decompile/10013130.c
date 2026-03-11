/*
 * func-name: sub_10013130
 * func-address: 0x10013130
 * callers: none
 * callees: 0x100150f0
 */

void __thiscall sub_10013130(_DWORD *this, int a2, int a3, int a4, int a5)
{
  unsigned int *v6; // edi
  _DWORD *v7; // esi
  unsigned int *v8; // ebx

  v6 = (unsigned int *)this[9];
  v7 = this + 8;
  if ( (unsigned int)v6 > this[10] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v8 = (unsigned int *)v7[2];
    if ( v7[1] > (unsigned int)v8 )
      invalid_parameter_noinfo();
    if ( v6 == v8 )
      break;
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    Outpop::Message::Connector_Manager::close_connector(*(Outpop::Message::Connector_Manager **)(this[7] + 36), *v6);
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    ++v6;
  }
}

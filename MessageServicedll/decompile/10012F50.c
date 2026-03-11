/*
 * func-name: sub_10012F50
 * func-address: 0x10012f50
 * callers: none
 * callees: 0x100145a0, 0x10014890
 */

void __thiscall sub_10012F50(_DWORD *this, int a2, int a3, int a4, int a5)
{
  unsigned int *v6; // edi
  _DWORD *v7; // esi
  unsigned int *v8; // ebx
  struct Outpop::Message::Connector_Manager::SPostAddItem *v9; // edi
  struct Outpop::Message::Connector_Manager::SPostAddItem *v10; // ebx

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
    Outpop::Message::Connector_Manager::connect(*(Outpop::Message::Connector_Manager **)(this[7] + 36), *v6);
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    ++v6;
  }
  v9 = (struct Outpop::Message::Connector_Manager::SPostAddItem *)this[13];
  if ( (unsigned int)v9 > this[14] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v10 = (struct Outpop::Message::Connector_Manager::SPostAddItem *)this[14];
    if ( this[13] > (unsigned int)v10 )
      invalid_parameter_noinfo();
    if ( v9 == v10 )
      break;
    if ( (unsigned int)v9 >= this[14] )
      invalid_parameter_noinfo();
    Outpop::Message::Connector_Manager::process_post_add_connector(
      *(Outpop::Message::Connector_Manager **)(this[7] + 36),
      v9);
    if ( (unsigned int)v9 >= this[14] )
      invalid_parameter_noinfo();
    v9 = (struct Outpop::Message::Connector_Manager::SPostAddItem *)((char *)v9 + 108);
  }
}

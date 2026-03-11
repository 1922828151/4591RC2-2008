/*
 * func-name: ?initialize@Connector_Manager@Message@Outpop@@QAEXXZ
 * func-address: 0x100138e0
 * callers: 0x100063b0
 * callees: 0x100146d0
 */

void __thiscall Outpop::Message::Connector_Manager::initialize(Outpop::Message::Connector_Manager *this)
{
  int v2; // esi
  int **v3; // eax
  int v4; // esi
  int *i; // edi
  int v6; // eax
  int *v7; // ebp

  v2 = *((_DWORD *)this + 1);
  v3 = *(int ***)(v2 + 20);
  v4 = v2 + 16;
  for ( i = *v3; ; i = (int *)*i )
  {
    v6 = *((_DWORD *)this + 1);
    v7 = *(int **)(v6 + 20);
    if ( v4 != v6 + 16 )
      invalid_parameter_noinfo();
    if ( i == v7 )
      break;
    if ( i == *(int **)(v4 + 4) )
      invalid_parameter_noinfo();
    Outpop::Message::Connector_Manager::add_connector(this, (struct Outpop::Message::Message_Connector_Config *)i[2]);
    if ( i == *(int **)(v4 + 4) )
      invalid_parameter_noinfo();
  }
}

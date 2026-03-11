/*
 * func-name: ?initialize@Acceptor_Manager@Message@Outpop@@QAEHXZ
 * func-address: 0x1000e7b0
 * callers: 0x100063b0
 * callees: 0x1000ed90
 */

int __thiscall Outpop::Message::Acceptor_Manager::initialize(Outpop::Message::Acceptor_Manager *this)
{
  int v2; // esi
  int **v3; // eax
  int v4; // esi
  int *i; // edi
  int v6; // eax
  int *v7; // ebp

  v2 = *((_DWORD *)this + 12);
  v3 = *(int ***)(v2 + 8);
  v4 = v2 + 4;
  for ( i = *v3; ; i = (int *)*i )
  {
    v6 = *((_DWORD *)this + 12);
    v7 = *(int **)(v6 + 8);
    if ( v4 != v6 + 4 )
      invalid_parameter_noinfo();
    if ( i == v7 )
      break;
    if ( i == *(int **)(v4 + 4) )
      invalid_parameter_noinfo();
    Outpop::Message::Acceptor_Manager::add_acceptor(this, (struct Outpop::IONetwork::Acceptor_Config *)i[2]);
    if ( i == *(int **)(v4 + 4) )
      invalid_parameter_noinfo();
  }
  return 0;
}

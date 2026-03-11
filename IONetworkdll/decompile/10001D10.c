/*
 * func-name: ?instance@Network_Init@IONetwork@Outpop@@SAPAV123@XZ
 * func-address: 0x10001d10
 * callers: 0x10007420, 0x1003fba0, 0x10041b20
 * callees: 0x10001d80, 0x1004e98e
 */

struct Outpop::IONetwork::Network_Init *Outpop::IONetwork::Network_Init::instance()
{
  struct Outpop::IONetwork::Network_Init *result; // eax
  Outpop::IONetwork::Network_Init *v1; // eax

  result = Outpop::IONetwork::Network_Init::instance_;
  if ( !Outpop::IONetwork::Network_Init::instance_ )
  {
    v1 = (Outpop::IONetwork::Network_Init *)operator new(28);
    if ( v1 )
      result = (struct Outpop::IONetwork::Network_Init *)Outpop::IONetwork::Network_Init::Network_Init(v1);
    else
      result = 0;
    Outpop::IONetwork::Network_Init::instance_ = result;
  }
  return result;
}

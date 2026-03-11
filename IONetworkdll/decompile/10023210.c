/*
 * func-name: ??1Comminute_Container@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10023210
 * callers: 0x10022aa0, 0x1002cbf0, 0x1002cfb0, 0x10042140, 0x10042a80, 0x10042cd0
 * callees: 0x10023fa0
 */

int __thiscall Outpop::IONetwork::Comminute_Container::~Comminute_Container(
        Outpop::IONetwork::Comminute_Container *this)
{
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Comminute_Container *)((char *)this + 44));
  return sub_10023FA0(this);
}

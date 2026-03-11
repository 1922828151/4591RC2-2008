/*
 * func-name: ?container_is_empty@Priority_Container@IONetwork@Outpop@@QAE_NXZ
 * func-address: 0x1000a1b0
 * callers: none
 * callees: none
 */

char __thiscall Outpop::IONetwork::Priority_Container::container_is_empty(Outpop::IONetwork::Priority_Container *this)
{
  if ( !Outpop::Utility::Thread_Mutex::acquire(this) )
    return 0;
  if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 15) || *((_DWORD *)this + 20) )
  {
    Outpop::Utility::Thread_Mutex::release(this);
    return 0;
  }
  else
  {
    Outpop::Utility::Thread_Mutex::release(this);
    return 1;
  }
}

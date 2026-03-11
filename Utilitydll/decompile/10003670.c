/*
 * func-name: ?next_id@Timer_Queue@Utility@Outpop@@QAEJXZ
 * func-address: 0x10003670
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Timer_Queue::next_id(Outpop::Utility::Timer_Queue *this)
{
  int result; // eax

  result = ++*((_DWORD *)this + 44);
  if ( result == -1 )
    return 1;
  return result;
}

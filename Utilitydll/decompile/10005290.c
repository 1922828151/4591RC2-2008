/*
 * func-name: ?stop@Timer_Queue@Utility@Outpop@@QAEXXZ
 * func-address: 0x10005290
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Timer_Queue::stop(Outpop::Utility::Timer_Queue *this)
{
  void *v1; // [esp-4h] [ebp-4h]

  v1 = (void *)*((_DWORD *)this + 30);
  *((_BYTE *)this + 132) = 0;
  SetEvent(v1);
}

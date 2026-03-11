/*
 * func-name: sub_10007310
 * func-address: 0x10007310
 * callers: 0x10002d60
 * callees: 0x10008960
 */

_DWORD *__stdcall sub_10007310(_DWORD *a1)
{
  _DWORD *v1; // esi

  v1 = a1;
  a1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  Outpop::IONetwork::WIN32_IoCompletionPort::WIN32_IoCompletionPort((Outpop::IONetwork::WIN32_IoCompletionPort *)(v1 + 5));
  sub_10008960(v1 + 16, &a1);
  Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)(v1 + 26));
  v1[15] = 0;
  Outpop::IONetwork::WIN32_IoCompletionPort::open((Outpop::IONetwork::WIN32_IoCompletionPort *)(v1 + 5), 0);
  return v1;
}

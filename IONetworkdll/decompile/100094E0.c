/*
 * func-name: ?set_priority@Dgram_Protocol_Head_Process@IONetwork@Outpop@@QAEXW4EPriority@Utility@3@PAE@Z
 * func-address: 0x100094e0
 * callers: none
 * callees: none
 */

char __stdcall Outpop::IONetwork::Dgram_Protocol_Head_Process::set_priority(int a1, char *a2)
{
  char result; // al

  *a2 &= 0xCFu;
  result = *a2;
  switch ( a1 )
  {
    case 1:
      result |= 0x10u;
      *a2 = result;
      break;
    case 3:
      result |= 0x20u;
      *a2 = result;
      break;
    case 5:
      result |= 0x30u;
      *a2 = result;
      break;
  }
  return result;
}

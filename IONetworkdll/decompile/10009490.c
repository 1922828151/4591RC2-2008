/*
 * func-name: ?set_squence@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAEXW4ESequenceType@Utility@3@PAE@Z
 * func-address: 0x10009490
 * callers: none
 * callees: none
 */

char __stdcall Outpop::IONetwork::Stream_Protocol_Head_Process::set_squence(int a1, char *a2)
{
  char v2; // al
  char result; // al

  *a2 &= 0xF3u;
  v2 = *a2;
  if ( a1 == 2 )
  {
    result = v2 | 4;
    *a2 = result;
  }
  else
  {
    if ( a1 == 1 )
      result = v2 | 8;
    else
      result = v2 | 0xC;
    *a2 = result;
  }
  return result;
}

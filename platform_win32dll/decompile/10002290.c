/*
 * func-name: sub_10002290
 * func-address: 0x10002290
 * callers: none
 * callees: none
 */

int __stdcall sub_10002290(int a1, int a2)
{
  int v2; // eax

  v2 = 0;
  while ( a2 != dword_10038004[2 * v2] )
  {
    if ( ++v2 >= 108 )
    {
      std::string::string(&unk_1001B5B6);
      return a1;
    }
  }
  std::string::string((&off_10038000)[2 * v2]);
  return a1;
}
